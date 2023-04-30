#include <Arduino.h>


#define DEBUG_MODE 0 //1 to enable, 0 to distable

//defining different targets for compilation
//#define MASTER //for the controller that is connected to PC over USB.
//#define LED_LADDER //for the 5 bar LED ladder
//#define LED_BAR //for the motor horizontal LED bar

#if defined(MASTER)
  int ID = 0;
#elif defined(LED_LADDER)
  int ID = 0;
#elif defined(LED_BAR)
  int ID = 0;
#else 
#error Error: Must define device to prog...
#endif





void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}