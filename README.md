# Automated Arduino Drawer by Kamaron Bickham

## Getting Started
This is an Instructional Tutorial on how to Build an Automated Cabinet for Pots/Pans in your home. This part of the tutorial already assumes that you have either pre-built a drawer, or have one bought and installed. 
### Things you need:
1.An Arduino board <br />
2.Two 5v relay modules<br />
3.A breadboard<br />
4.A linear Actuator you can find one [here.](https://www.amazon.com/s?k=linear+actuator+arduino&crid=3LBBSCCSO4DQI&sprefix=linear+actuator+ar%2Caps%2C138&ref=nb_sb_ss_i_1_18)<br />
5.A bunch of wires<br />
6.An UltraSonic Sensor for arduino you can find one [here](https://www.amazon.com/s?k=ultrasonic+sensor+arduino&crid=1T2HC5QP2P72X&sprefix=sensor+arduino%2Caps%2C138&ref=nb_sb_ss_i_1_14)<br />
7. A power supply for the arduino, a 12v DC powersupply for the Linear Actuator.<br />
9. A breadboard power module like [this](https://www.amazon.com/JBtek-Breadboard-Supply-Arduino-Solderless/dp/B010UJFVTU/ref=sr_1_3?crid=1STHFWZ162L9T&keywords=arduino+power+module&qid=1555950079&s=gateway&sprefix=Arduino+power+mod%2Caps%2C138&sr=8-3)<br />
10.Time,patience, and a motivational support animal. <br />
 ## Instructions:
 * clone the Repo so that you have the code for the arduino
 * Place the power module on one end of the breadboard, and remove the jumper from the left side.(the left side will be powered by the 12v dc power supply.)
 * place two wires one on the normally closed point, and one on the normally open port of both relay modules
 * Connect the normally open points to the positive column on the left side of the breadboard.
 * Connect the normally closed points to the negative column on the left side of the breadboard.
 * On the other end of the relay module connect the dc+ point to the positive column on the RIGHT side of the breadboard, and connect the dc- point to the Negative column on the RIGHT side of the breadboard. 
 * The first relay's in point should be connected to pin number 7,on your arduino, and the Second relay's in point should be connected to pin number 8 on your arduino.
 
 
![Screenshot1](https://github.com/KamaronB/Arduino_Drawer/blob/master/Pics/20190421_001333.jpg)
![Screenshot2](https://github.com/KamaronB/Arduino_Drawer/blob/master/Pics/20190421_174005.jpg)
![Screenshot3](https://github.com/KamaronB/Arduino_Drawer/blob/master/Pics/20190421_174007.jpg)
