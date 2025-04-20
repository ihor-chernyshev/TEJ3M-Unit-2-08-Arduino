// Created by Ihor Chernyshev
// Created on March 2025
// This program controls servo through potentiometer

#include <Servo.h>

Servo servo;

const int analogPin = 0;
float valAnalogPin;
const float angleVal = 5.68;

void setup() {
    servo.attach(8);
    servo.write(0);
    Serial.begin(9600);
}

void loop() {
    valAnalogPin = analogRead(analogPin);
    valAnalogPin = valAnalogPin / angleVal; // calculates exact angle at which servo should go
    servo.write(valAnalogPin);
    Serial.println(valAnalogPin);
}
