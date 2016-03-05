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
  for (uint8_t i = 0; i < MAX_DATA_COLLECTED; i++) {
    this->data[i] = 0;
  }
  this->iterator = 0;
}

/**
 *
 */
RainSensor::sense(){
  if(millis() - previusMillis > interval){
    data[iterator] = analogRead(pin);
    iterator++;
    if (iterator == MAX_DATA_COLLECTED) {
      iterator = 0;
      for (uint8_t i = 0; i < MAX_DATA_COLLECTED; i++) {
        value+=data[i];
      }
      value=value/MAX_DATA_COLLECTED;
      value = map(value,0,1023,0,1);
    }
    previusMillis = millis();
  }
}
