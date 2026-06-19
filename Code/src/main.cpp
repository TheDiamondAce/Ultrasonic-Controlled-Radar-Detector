
#include <Arduino.h>

 // Motor Driver Pin Definitions
#define ENABLE 5 // Enable Pin

#define DIRA 3 //Direction Pin A

#define DIRB 4 //Direction Pin B

//Joystick Pin Definitions
#define VRx A0 // Joystick X-axis connected to analog pin A0
#define VRy A1 // Joystick Y-axis connected to analog pin A1
#define SW 2   // Joystick switch connected to digital pin 2

void spinForward();
void stopSpinning();
void spinBackward();

void setup()
{
    pinMode(ENABLE, OUTPUT);
    pinMode(DIRA, OUTPUT);
    pinMode(DIRB, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    /*int xValue = analogRead(VRx);
    int yValue = analogRead(VRy);
    Serial.print("X-axis: ");
    Serial.print(xValue);
    Serial.print(" | Y-axis: ");
    Serial.println(yValue);
    if (xValue < 400)
    {
        spinBackward();
    }
    else if (xValue > 600)
    {
        spinForward();
    }
    else
    {
        stopSpinning();
    } 
        

    /* spinForward();
    delay(2000); //Delay for 2 seconds
    stopSpinning();
    delay(5000); //Delay for 5 seconds 
    */
}

void stopSpinning()
{
    digitalWrite(DIRA, HIGH);
    digitalWrite(DIRB, HIGH);
    analogWrite(ENABLE, 0);
}

void spinForward()
{
    digitalWrite(DIRA, LOW);
    digitalWrite(DIRB, HIGH);
    analogWrite(ENABLE, 255);
}

void spinBackward()
{
    digitalWrite(DIRA, HIGH);
    digitalWrite(DIRB, LOW);
    analogWrite(ENABLE, 255);
}