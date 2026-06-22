# Ultrasonic Controlled Radar Detector

<img width="1410" height="2000" alt="Ultrasonic Controlled Radar Detector Zine" src="https://github.com/user-attachments/assets/92b3e183-74ba-4e3a-8903-129e4ff1bdca" />


# Motivaiton
The motivation for this was that I wanted to get into hardware, and realizing that I have no idea what I am doing, this was the first project I decided to do since it would tackle what VCC and GND is, what digital ports are, and how to use a microcontroller in the first place.
I updated this project 06/19/26 but I'm pretty sure I started this project around May 2026, since this was my first personal hardware project besides hackathons.

# How to Build
To build this, you will need to get the servo motor, the ultrasonic module,the breadboard, and the joystick module, all of which can be seen in the BOM, and use the configuration in the wiring diagram to set it up. Then after you connect it to the breadboard, you will need to connect your arduino uno to all of the ports as shown in the Wiring Diagram, (Physically you will need to daisy wire the GND if there is not enough space as well as for the 3.3V or PWR) and use the Plaformio extension and the code in this github repo to start the process. If there is an error on the #include <Arduino.h>, it is most likely a intellisense error in which you can Rebuild Intellisense Index using Platformio through the search bar up at the top of VS Code.
Then it should show you a Serial Print Message, stating what distance its detecting. Also, quick note, CONNECT THE SERVO MOTOR TO THE ULTRASONIC, OTHERWISE YOU CANT CONTROL IT!!! 

# How it works
The project works by using the joystick and controlling it by moving the joystick left or right, controling the servo motor which has the ultrasonic module mounted onto it.
It will then detect the distance through the ultrasonic motor which will be outputted into the Serial Console.

# Wiring Diagram

<img width="944" height="1018" alt="UCRD" src="https://github.com/user-attachments/assets/3366e8c2-a710-423c-a924-ffc4158abedb" />

# CAD

## Exploded View

<img width="590" height="824" alt="image" src="https://github.com/user-attachments/assets/65bcf255-ff5a-4599-9ce0-a7a02ce411f5" />

## Isometric

## Front
<img width="1040" height="852" alt="image" src="https://github.com/user-attachments/assets/a1ddb103-c299-4bb7-bb8b-70974e04cb9d" />

## Side
<img width="804" height="852" alt="image" src="https://github.com/user-attachments/assets/1977c79d-6e81-4351-bbe7-f3c9d53af1cc" />

## Back

<img width="1104" height="852" alt="image" src="https://github.com/user-attachments/assets/b2bb1f6e-a04a-41c6-b2ba-28fcccddc2aa" />

## Bottom

<img width="632" height="842" alt="image" src="https://github.com/user-attachments/assets/d8733db8-dc98-4750-a7b6-b4bf0ab9e026" />



