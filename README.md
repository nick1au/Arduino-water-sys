# Arduino-water-sys

A C++ Arudino-based smart watering system utilizing a moisture sensor to optimize usage of water. Future functionality is resuming development with optimization and analysis and remote features.

## About
* Course-based (June - August 2016) - SCIE 1100 (Engineering, Technology & Society)
* Team Project for Course Duration (Win Aung, Dwayne Berto, Jimmy Ly)
* Individual Project for Independent Project

## Project Info
* C++-based Project designed to save water and gain better understanding of electrical components
* Is "smart" by using moisture sensor  
i. From August 5, 2016 - Activate pump when threshold reached.
ii. Coming soon - Use a more optimized approach (researching)
* System developed in EAGLE schematic capture program
* Programmed with Arduino IDE
* Paper and poster created for overview
* Components:  
i. Arduino Uno R3
ii. Moisture sensor
iii. Pump
iv. Relay
v. Diode
vi. Resistor
vii. Transistor
viii. 9V Battery
ix. Piping
x. Capacitor

## Project Breakdown

### System connectivity
* Connected onto breadboard with jumper wires to connect all components together
* Moisture sensor - Analog A0, 5V, GND
* Transistor - PWM, 9 to base pin while connecting to parallel setup(diode, resistor and pump)
* Pump - 9V and parallel system with transistor

### Code
* Setup analog pin as input (moisture sensor) and digital pin as output (transistor)
* Operates by:  
i. Update from August 5, 2016 - Run pump when moisture reading reaches certain threshold, otherwise stop

### Schematic Capture
* Used in prototyping system design before implementation

![alt tag](https://github.com/nick1au/Arduino-water-sys/blob/master/2016-08-22%20(2).png)
* Requires Update to reflect changes

### Future Implementations
* Look at optimizing operation (eg. variable pump speed, delay periods)
* MATLAB analysis feature
* Wireless adaptation for remote operation
