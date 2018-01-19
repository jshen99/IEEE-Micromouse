# IEEE-Micromouse Spring 2018

**Day 0: Parts needed:**

- Microcontroller (Teensyduino)
- Breadboard
- Motors (2 or 4) : [Pololu #3049 Micro metal Gearmotor HPCB 12V with Extended Motor Shaft](https://www.pololu.com/product/3049)
- Distance sensors
- Encoders : [Magnetic Encoder Pair Kit for Micro Metal Gearmotors, 12 CPR, 2.7-18V (HPCB compatible)](https://www.pololu.com/product/3081)
  - **Wiring**
  - Black:Ground
  - Yellow: Out B
  - Green: Out A
  - Red: VCC
  - White: M2
  - Blue: M1
- Battery
- Step up regulator : [12V Step-Up Voltage Regulator U3V50F12](https://www.pololu.com/product/2568)
- Chasiss
- wheels
- Motor Controller: [TB6612FNG Dual Motor Driver Carrier](https://www.pololu.com/product/713)
- Castor wheels (dependent on number of wheels)

 **Agenda**

1. soldering motor motor controller encoders and distance sensors and Downloading in the drivers onto the teensyduino
2. Write up software to process distance sensor and encoder data sent up to the arduino
3. Start testing if the wheels move based on different distance on the distance sensors

https://help.github.com/articles/basic-writing-and-formatting-syntax/#paragraphs-and-line-breaks

**1/3/18**
- Put on motors on chasiss
- Wrote software to test the motors
  - Left Motor: Works perfectly
  - Right Motor: Red wire is not properly soldered on but works
  **1/16/18**
  - Fixed encoder soldering and switched orientation of the wires as not to interfere with magnet and shaft
  **1/18/18**
  - Wired up motors and motor controller with teensyduio on breadboard
  - updated test code with new pins





