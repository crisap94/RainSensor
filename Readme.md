RainSensor [![Build Status](https://travis-ci.org/crisap94/RainSensor.svg?branch=master)](https://travis-ci.org/crisap94/RainSensor)
===========


Contributions are welcome under the [Apache Public License version 2.0 (http://www.apache.org/licenses/LICENSE-2.0.html).

Usage
============

Basically the library usage can be divided into the following two steps.

1. Sensor definition
---------------------
````
#define MAX_DATA_COLLECTED 10

int interval = 120;
RainSensor Sensor(A1,interval);
````
* `MAX_DATA_COLLECTED` mean the quantity of values you will get from the sensor for gettin a average measure.
* `interval` mean the time beetween each measure of the sensor,  


2. Periodic verification
------------------------

You will need to put this in loop function for check the sensor all the time and calculate the average.

```
Sensor.sense();
```
