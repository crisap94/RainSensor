#include <RainSensor.h>

RainSensor Sensor(A1); //Construction of the Sensor Module

uint64_t previusmillis = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Sensor.Sense();//It need to be called in the loop function

  if (millis() - previusmillis > 2000) {
    Serial.println("Value: " + String(Sense.getValue()));
  }

}
