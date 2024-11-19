#include "URM08.h"
URM08 sensor(16, 17);
void setup() {
  sensor.begin(19200);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Distance:  ");
  Serial.println(sensor.getDistance());
   Serial.print("Temperature:  ");
  Serial.println(sensor.getTemperature());
}
