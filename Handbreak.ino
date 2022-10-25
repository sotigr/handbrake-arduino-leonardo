#include <Joystick.h> 

#define ACTIVATION_RANGE_MIN 0
#define ACTIVATION_RANGE_MAX 100

#define POT_PIN A0 

// Uncomment if vcc is connected backwards
// #define BACKWARDS_VCC

Joystick_ Joystick;

void setup() { 

  pinMode(POT_PIN, INPUT);  
  Joystick.begin();
  Joystick.setRxAxisRange(ACTIVATION_RANGE_MIN, ACTIVATION_RANGE_MAX);

}
 
float percentValue = 0;
void loop() { 
  
  #ifdef BACKWARDS_VCC
  percentValue = map(1023 - analogRead(POT_PIN), 0, 1023, 0, 100); 
  #else 
  percentValue = map(analogRead(POT_PIN), 0, 1023, 0, 100); 
  #endif

  Joystick.setRxAxis(percentValue);

}
