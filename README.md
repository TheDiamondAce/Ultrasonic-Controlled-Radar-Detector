# Ultrasonic Controlled Radar Detector

## Quick Note: (The Zine shows the Ultrasonic disconnected as I couldnt connect it in Wokwi to the Servo Motor. CONNECT THE SERVO MOTOR TO THE ULTRASONIC, OTHERWISE YOU CANT CONTROL IT!!!)
<img width="1586" height="2250" alt="Ultrasonic Controlled Radar Detector (1)" src="https://github.com/user-attachments/assets/3837497e-5afe-4b1b-8c9f-41c9cabbed38" />

# Motivaiton
The motivation for this was that I wanted to get into hardware, and realizing that I have no idea what I am doing, this was the first project I decided to do since it would tackle what VCC and GND is, what digital ports are, and how to use a microcontroller in the first place.
I updated this project 06/19/26 but I'm pretty sure I started this project around May 2026, since this was my first personal hardware project besides hackathons.

# How to Build
To build this, you will need to get the servo motor, the ultrasonic module,the breadboard, and the joystick module, all of which can be seen in the BOM, and use the configuration in the wiring diagram to set it up. Then after you connect it to the breadboard, you will need to connect your arduino uno to all of the ports as shown in the Wiring Diagram and use the code in this github repo to start the process.
Then it should show you a Serial Print Message, stating what distance its detecting. Also, quick note, CONNECT THE SERVO MOTOR TO THE ULTRASONIC, OTHERWISE YOU CANT CONTROL IT!!!

# How it works
The project works by using the joystick and controlling it by moving the joystick left or right, controling the servo motor which has the ultrasonic module mounted onto it.
It will then detect the distance through the ultrasonic motor which will be outputted into the Serial Console.

# Wiring Diagram

<img width="944" height="1018" alt="UCRD" src="https://github.com/user-attachments/assets/3366e8c2-a710-423c-a924-ffc4158abedb" />

