# Potentiometer-Controlled Buzzer (Arduino Project)

## Overview  
This project uses an Arduino Uno to read the value of a potentiometer and activate a buzzer when the reading crosses a defined threshold. It demonstrates analog input, digital output, and simple embedded control.

## Components  
- Arduino Uno  
- 10kΩ Potentiometer  
- Buzzer  
- Jumper wires  
- Breadboard  

## How It Works  
- The potentiometer is connected to **A0**.  
- Arduino reads an analog value between **0 and 1023**.  
- If the value is **greater than 1000**, the buzzer turns on for 250 ms.  
- Serial monitor prints the live readings.

## Code  
```cpp
int potVal;
int buzzPin = 8;
int pot = A0;
int dt = 250;

void setup() {
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  potVal = analogRead(pot);
  Serial.println(potVal);

  if (potVal > 1000) {
    digitalWrite(buzzPin, HIGH);
  }

  delay(dt);
  digitalWrite(buzzPin, LOW);
}

Possible Improvements (Ig?)
Adjustable threshold

LCD or OLED display

Using PWM for buzzer tones (fav!)

Adding LEDs as indicators

Add circuit diagram / photos

Author
Mehedi Hasan
High school senior interested in engineering, embedded systems, and automation.
