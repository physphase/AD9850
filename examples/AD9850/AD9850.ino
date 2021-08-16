#include <AD9850.h>

const int W_CLK_PIN = 9;
const int FQ_UD_PIN = 10;
const int DATA_PIN = 11;
const int RESET_PIN = 12;

double freq = 10000000;
double trimFreq = 125000000;

int phase = 0;

void setup(){
  DDS.begin(W_CLK_PIN, FQ_UD_PIN, DATA_PIN, RESET_PIN);
  DDS.calibrate(trimFreq);
}

void loop(){
  DDS.setfreq(freq, phase);
  while(1);
}
