# Ultrasonic Controlled Radar Detector

<img width="1410" height="2000" alt="Ultrasonic Controlled Radar Detector Zine" src="https://github.com/user-attachments/assets/89e08f35-cf55-41ab-8c13-1ee509951642" />



# Motivaiton
The motivation for this was that I wanted to get into hardware, and realizing that I have no idea what I am doing, this was the first project I decided to do since it would tackle what VCC and GND is, what digital ports are, and how to use a microcontroller in the first place.
I updated this project 06/19/26 but I'm pretty sure I started this project around May 2026, since this was my first personal hardware project besides hackathons.

# How to Build
To build this, you will need to get the servo motor, the ultrasonic module,the breadboard, and the joystick module, all of which can be seen in the BOM, and use the configuration in the wiring diagram to set it up (For the ultrasonic wires/prongs, bend them slightly around 45-75deg so that its easier to connect the wires through the gaps). Then after you connect it to the breadboard, you will need to connect your arduino uno to all of the ports as shown in the Wiring Diagram, (Physically you will need to daisy wire the GND if there is not enough space as well as for the 3.3V or PWR) and use the Plaformio extension and the code in this github repo to start the process. If there is an error on the #include <Arduino.h>, it is most likely a intellisense error in which you can Rebuild Intellisense Index using Platformio through the search bar up at the top of VS Code.
Then it should show you a Serial Print Message, stating what distance its detecting. Also, quick note, CONNECT THE SERVO MOTOR TO THE ULTRASONIC, OTHERWISE YOU CANT CONTROL IT!!! 

# How it works
The project works by using the joystick and controlling it by moving the joystick left or right, controling the servo motor which has the ultrasonic module mounted onto it.
It will then detect the distance through the ultrasonic motor which will be outputted into the Serial Console.

# Wiring Diagram

<img width="944" height="1018" alt="UCRD" src="https://github.com/user-attachments/assets/3366e8c2-a710-423c-a924-ffc4158abedb" />

# CAD

## Exploded View

<img width="1214" height="1228" alt="image" src="https://github.com/user-attachments/assets/80c608b1-56f4-4289-9afc-a70c46f6b6de" />



## Isometric

<img width="1214" height="1228" alt="image" src="https://github.com/user-attachments/assets/9d282df4-8729-4b6f-a4bc-09461faba0ba" />


## Front
<img width="1214" height="1228" alt="image" src="https://github.com/user-attachments/assets/b0f35877-8feb-480c-a8d9-15fb4b4c14a3" />


## Side
<img width="607" height="614" alt="Screenshot 2026-06-27 at 10 45 59 PM" src="https://github.com/user-attachments/assets/3c2afc14-58c7-4824-87f5-d97bdd3ce268" />

## Back

<img width="1214" height="1228" alt="image" src="https://github.com/user-attachments/assets/893d8645-ff04-4034-b52f-671b93bd1f1f" />


## Bottom

<img width="607" height="614" alt="Screenshot 2026-06-27 at 10 47 46 PM" src="https://github.com/user-attachments/assets/752042cb-036d-4402-bc0b-9682afcd38fc" />



