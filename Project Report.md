





## ***Arduino IR Object Detector using IR Sensor and Buzzer***

## 

#### Abstract



This project presents a simple object detection and alert system built using an Arduino Uno, an IR sensor module, and a buzzer. The system detects the presence of nearby objects using infrared reflection and activates a buzzer to provide an audible alert. It is a beginner-friendly embedded systems project focused on sensor interfacing, digital input/output control, and practical hardware implementation.



Objective

To detect nearby objects using an IR sensor.

To trigger an audible buzzer alert when an object is detected.

To understand Arduino programming and sensor interfacing.

To observe how object color affects IR sensor detection.



## Demo Video: https://youtu.be/xvu-4R9GEDI



#### Components Used



Arduino Uno

IR Sensor Module

Buzzer

Jumper Wires

USB Cable





#### Circuit Connections



###### Component    Arduino Connection



IR Sensor OUT	D2

IR Sensor VCC	5V

IR Sensor GND	GND

Buzzer (+)	D8

Buzzer (-)	GND





#### Working Principle



The IR sensor emits infrared light and receives the reflected signal from nearby objects.



If an object is placed in front of the sensor, reflected infrared light is detected.

The sensor output changes state and sends a signal to the Arduino.

Arduino reads the signal through digital pin D2.

The buzzer connected to D8 turns ON to indicate object detection.

When no object is present, the buzzer remains OFF.

Observation



Light-colored and reflective objects were detected more reliably. Black objects were harder to detect because they absorb more infrared radiation and reflect less back to the sensor.



#### Software Used



Arduino IDE

Arduino C++



#### Applications



Obstacle detection systems

Entry alert systems

Touchless sensing applications

Security alarms

Parking assistance systems



#### Results



The project was successfully implemented and tested. The system detected nearby objects and activated the buzzer accordingly. During testing, it was observed that black objects were detected only at shorter distances compared to white or reflective objects.



#### Conclusion



This project successfully demonstrates object detection using an IR sensor with Arduino. It provided practical experience in hardware assembly, circuit wiring, sensor interfacing, and Arduino programming. It also helped in understanding the real-world limitations of IR sensors, especially with dark-colored surfaces.





