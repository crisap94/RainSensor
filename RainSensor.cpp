#include <Arduino.h>
#include <RainSensor.h>

/**
 * Constructor
 * param analogPin The analog Pin of the Arduino
 * param interval Is the time between each measure.
 */
RainSensor::RainSensor(uint8_t analogPin, uint8_t interval){
  this->analogPin = analogPin;
  this->interval = interval;
  this->value = 0;
  this->previusMillis = millis();
}

/**
 *
 */
RainSensor::sense(){
  if(millis() - previusMillis > interval){
    value = analogRead(analogPin);
    value = map(value,0,1023,0,2);
    previusMillis = millis();
  }
}
