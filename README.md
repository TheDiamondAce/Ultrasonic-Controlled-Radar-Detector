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

<img width="614" height="610" alt="Screenshot 2026-06-22 at 10 32 12 PM" src="https://github.com/user-attachments/assets/dbed9e9b-0760-457f-96bd-1d09b36a6adc" />


## Isometric

<img width="1228" height="1220" alt="image" src="https://github.com/user-attachments/assets/0bab30c6-6003-426b-9274-be1d8e2c5214" />


## Front
<img width="1228" height="1220" alt="image" src="https://github.com/user-attachments/assets/d79fa368-dcc7-43db-82d5-4b5517cff9d7" />


## Side

<img width="614" height="610" alt="Screenshot 2026-06-22 at 10 34 30 PM" src="https://github.com/user-attachments/assets/d9c335ab-f03c-48bc-a1bd-86526b9902f9" />


## Back

<img width="1228" height="1220" alt="image" src="https://github.com/user-attachments/assets/67bce434-be28-44bc-ae89-aa498c2f7918" />


## Bottom

<img width="632" height="842" alt="image" src="https://github.com/user-attachments/assets/d8733db8-dc98-4750-a7b6-b4bf0ab9e026" />



