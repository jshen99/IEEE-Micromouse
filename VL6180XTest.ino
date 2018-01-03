/* This example shows how to change the range scaling factor
of the VL6180X. The sensor uses 1x scaling by default,
giving range measurements in units of mm. Increasing the
scaling to 2x or 3x makes it give raw values in units of 2
mm or 3 mm instead. In other words, a bigger scaling factor
increases the sensor's potential maximum range but reduces
its resolution. */

#include <Wire.h>
#include <VL6180X.h>

// To try different scaling factors, change the following define.
// Valid scaling factors are 1, 2, or 3.
#define SCALING 1

VL6180X sensor0;
int enable0 = 7;

VL6180X sensor1;
int enable1 = 8;

void setup()
{
  Serial.begin(9600);
  Wire.begin();

  pinMode(enable0, OUTPUT);
  digitalWrite(enable0, LOW);
  pinMode(enable1, OUTPUT);
  digitalWrite(enable1, LOW);

  delay(1000);

  digitalWrite(enable0, HIGH);
  sensor0.init();
  sensor0.configureDefault();
  sensor0.setAddress(0x20);
  Serial.println(sensor0.readReg(0x212),HEX); // read I2C address
  sensor0.setScaling(SCALING);
  sensor0.setTimeout(500);

  delay(100);

  digitalWrite(enable1, HIGH);
  sensor1.init();
  sensor1.configureDefault();
  sensor1.setAddress(0x22);
  Serial.println(sensor1.readReg(0x212),HEX); // read I2C address
  sensor1.setScaling(SCALING);
  sensor1.setTimeout(500);
}

void loop()
{
  Serial.print("(Scaling = ");
  Serial.print(sensor0.getScaling());
  Serial.print("x) ");

  Serial.print(sensor0.readRangeSingleMillimeters());
  if (sensor0.timeoutOccurred()) { Serial.print(" TIMEOUT"); }

  Serial.print("\t");
  
  Serial.print("(Scaling = ");
  Serial.print(sensor1.getScaling());
  Serial.print("x) ");

  Serial.print(sensor1.readRangeSingleMillimeters());
  if (sensor0.timeoutOccurred()) { Serial.print(" TIMEOUT"); }

  Serial.println();
}
