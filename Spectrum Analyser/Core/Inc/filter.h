// for FIR filter
/*
FIR high pass filter designed with
http://t-filter.engineerjs.com/

sampling frequency: 16000 Hz

* 0 Hz - 1000 Hz
  gain = 0
  desired attenuation = -30 dB
  actual attenuation = -31.2 dB

* 2000 Hz - 8000 Hz
  gain = 1
  desired ripple = 5 dB
  actual ripple = 3.62 dB

*/

#define FILTER_SIZE 13
double h[FILTER_SIZE] = {
		0.10182634742164233,
		-0.014865499800310582,
		-0.05031615290713867,
		-0.09997863914568754,
		-0.15069012506434884,
		-0.18826147085275602,
		0.7976720610918446,
		-0.18826147085275602,
		-0.15069012506434884,
		-0.09997863914568754,
		-0.05031615290713867,
		-0.014865499800310582,
		0.10182634742164233
};


/*
FIR low pass filter designed with
http://t-filter.engineerjs.com/

sampling frequency: 16000 Hz

* 0 Hz - 1000 Hz
  gain = 1
  desired ripple = 5 dB
  actual ripple = 3.98 dB

* 2000 Hz - 8000 Hz
  gain = 0
  desired attenuation = -30 dB
  actual attenuation = -30.4 dB

*/
/*
#define FILTER_SIZE 17
double h[FILTER_SIZE] = {
		-0.01813953880344938,
		-0.0019307071010166584,
		0.011942510811700197,
		0.03694811482606952,
		0.07108694845869208,
		0.10933939124086878,
		0.14462653596382122,
		0.16952834489045882,
		0.17852663603879673,
		0.16952834489045882,
		0.14462653596382122,
		0.10933939124086878,
		0.07108694845869208,
		0.03694811482606952,
		0.011942510811700197,
		-0.0019307071010166584,
		-0.01813953880344938
};
*/




/*
FIR high pass filter designed with
http://t-filter.engineerjs.com/

sampling frequency: 16000 Hz

* 0 Hz - 2000 Hz
  gain = 0
  desired attenuation = -30 dB
  actual attenuation = -38.02 dB

* 5000 Hz - 8000 Hz
  gain = 1
  desired ripple = 5 dB
  actual ripple = 1.63 dB

*/
/*
#define FILTER_SIZE 7
double h[FILTER_SIZE] = {
		0.058358765342587264,
		-0.006296082710144939,
		-0.3186436399106337,
		0.5457197669429916,
		-0.3186436399106337,
		-0.006296082710144939,
		0.058358765342587264
};
*/

/*
FIR low pass filter designed with
http://t-filter.engineerjs.com/

sampling frequency: 16000 Hz

* 0 Hz - 1000 Hz
  gain = 1
  desired ripple = 5 dB
  actual ripple = 3.98 dB

* 2000 Hz - 8000 Hz
  gain = 0
  desired attenuation = -30 dB
  actual attenuation = -30.4 dB

*/
/*
#define FILTER_SIZE 17
double h[FILTER_SIZE] = {
		-0.01813953880344938,
		-0.0019307071010166584,
		0.011942510811700197,
		0.03694811482606952,
		0.07108694845869208,
		0.10933939124086878,
		0.14462653596382122,
		0.16952834489045882,
		0.17852663603879673,
		0.16952834489045882,
		0.14462653596382122,
		0.10933939124086878,
		0.07108694845869208,
		0.03694811482606952,
		0.011942510811700197,
		-0.0019307071010166584,
		-0.01813953880344938
};
*/

/*
FIR low pass filter designed with
http://t-filter.engineerjs.com/

sampling frequency: 16000 Hz

* 0 Hz - 500 Hz
  gain = 1
  desired ripple = 5 dB
  actual ripple = 4.01 dB

* 1000 Hz - 8000 Hz
  gain = 0
  desired attenuation = -30 dB
  actual attenuation = -30.35 dB

*/
/*
#define FILTER_SIZE 33
double h[FILTER_SIZE] = {
		-0.016584244390207517,
		-0.002321872620726192,
		-0.0008653616530258243,
		0.0019021628338223892,
		0.006082068703845935,
		0.011633653175623647,
		0.018547904448052425,
		0.02661106114330693,
		0.035569588805326555,
		0.04507119569789378,
		0.054672236227436166,
		0.0639117360076696,
		0.07229730023332938,
		0.07937161077767932,
		0.0847386628682915,
		0.08808740442014613,
		0.08922630002963483,
		0.08808740442014613,
		0.0847386628682915,
		0.07937161077767932,
		0.07229730023332938,
		0.0639117360076696,
		0.054672236227436166,
		0.04507119569789378,
		0.035569588805326555,
		0.02661106114330693,
		0.018547904448052425,
		0.011633653175623647,
		0.006082068703845935,
		0.0019021628338223892,
		-0.0008653616530258243,
		-0.002321872620726192,
		-0.016584244390207517
};
*/
