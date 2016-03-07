#ifndef _RAINSENSOR_H
#define _RAINSENSOR_H

/**
 *
 */

#ifndef MAX_DATA_COLLECTED
#define MAX_DATA_COLLECTED 10
#endif

#ifndef WET
#define WET 2
#endif

##ifndef DAMP
#define DAMP 1
#endif

#ifndef DRY
#define DRY 0
#endif

 #include "Arduino.h"


class RainSensor{
private:
  uint8_t analogPin;
  uint8_t interval;
  uint16_t value;
  uint32_t previusMillis;


public:
  RainSensor(uint8_t analogPin, uint8_t interval = 120);

  void sense();

  inline uint16_t getValue(){
    return this->value;
  }

}


#endif
