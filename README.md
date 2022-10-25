# Arduino Leonardo Handbrake / E-brake

## Goal
Read a value from a potentiometer and convert it to an axis percentage pass to the computer via usb.

## Hardware
- Arduino leonardo | Arduino leonardo pro micro
- Potentiometer
- Usb to micro-usb cable

## Software Dependencies
- Arduino IDE
- Arduino Joystick Library
### Arduino Joystick Library
You can find the joystick lib source here: https://github.com/MHeironimus/ArduinoJoystickLibrary

You can download the latest zip release from here: https://github.com/MHeironimus/ArduinoJoystickLibrary/releases

Then import it in the Arduino IDE, follow the guide here: https://support.arduino.cc/hc/en-us/articles/5145457742236-Add-libraries-to-Arduino-IDE on how to import .zip libraries

## Configuration Options

To change the input pin you can change to any other analog pin. The default pin is `A0`
```c
#define POT_PIN A0 
```

If you connected the potentiometer backwards you can uncomment this line
```c 
#define BACKWARDS_VCC
```

Activation range percentage values are used to clamp the potentiometer value in case the handbrake lever does not use the full range/rotation of the potentiometer. Configure the activation percentage by adjusting these values.
```c
#define ACTIVATION_RANGE_MIN 0
#define ACTIVATION_RANGE_MAX 100
```