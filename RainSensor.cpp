#include <Arduino.h>
#include <RainSensor.h>

RainSensor::RainSensor(uint8_t analogPin, uint8_t interval){
  this->analogPin = analogPin;
  this->interval = interval;
  this->value = 0;
  for (uint8_t i = 0; i < MAX_DATA_COLLECTED; i++) {
    this->data[i] = 0;
  }
}

RainSensor::Sense(){
  if(millis() - previusMillis > interval){
    
  }
}
