clear all; close all;

N = 512;

% audio file name
file_name = 'i.wav';
[s0,fs0] = audioread(file_name); % stereo sound, two columns
fs0
fs = 8000;
s0 = resample(s0, fs, fs0); % resample the audio file to 8000Hz
s = (s0(:,1)+s0(:,2))/2; % average the two channels

% plot spectrogram with 75% overlap
subplot(2,2,1)
% parameters: vector to apply spectrogram on, window size (apply hamming
% window by default), num_overlap, num_fft, sampling frequency
spectrogram(s, N, 0.75*N, N, fs, 'yaxis'); % plot frequency on y axis
title('Spectrogram');

% extract N samples in the middle of the file (where the sound is likely to be stable)
mid = floor(length(s)/2); 
start_index = mid-N/2;
x = s(start_index:start_index+N-1)';

% save data to header file for use in c program, note you need to change 
% the file and variable names for a different vowel
fid = fopen('vowel_i.h','w');
fprintf(fid,'float vowel_i[512] = {\n');
fprintf(fid,'%f,\n',x);
fprintf(fid,'};\n');
fclose(fid);

% display time domain voice samples
subplot(2,2,2)
plot(x)
xlabel('Samples')
ylabel('Amplitude')
title('Samples for the Vowel')

% take FFT on the samples
y = fft(x,N);
f = fs*linspace(0,1, N) - fs/2; % generate frequency vector
spectrum = abs(y).^2 % magnitude^2 of fft

% plot double-sided spectrum
subplot(2,2,3)
plot(f,fftshift(spectrum)); 
xlabel('Frequency (Hz)')
ylabel('Amplitude Squared')
title('FFT')

% calculate auto-correlation function, which is inverse transform of power spectrum
auto_corr = ifft(spectrum,N)'
auto_corr = real(auto_corr(1:N/2)); % symmetric, only keep the 1st half, then take the real part
subplot(2,2,4)
plot(auto_corr)
xlabel('Samples')
ylabel('Amplitude')
title('Autocorrelation Function')

auto_corr(1)=0; % ignore self correlation, which is the first element
% search for peak of the auto correlation function
max_num = auto_corr(1);
for i = 2 : length(auto_corr)
    if auto_corr(i) > max_num
        max_num = auto_corr(i);
        max_index = i;
    end
end
pitch = 1/((max_index-1)/fs); % convert to Hz
str = sprintf('Estimated pitch is at index %d (starting from 0) with frequency %f.', max_index-1, pitch);
disp(str)





