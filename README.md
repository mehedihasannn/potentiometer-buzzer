
Potentiometer-Controlled Buzzer (Arduino Project)
Overview
This Arduino project reads a potentiometer value and activates a buzzer when the reading crosses a threshold.
Components
Arduino Uno
Potentiometer
Buzzer
Jumper wires
How it works
Reads analog value from A0
If value > 1000 → buzzer turns ON
Delay for 250 ms
Buzzer turns OFF
Code

int potVal;
int buzzPin=8;
String msg="Inp ur num: ";
int pot= A0;
int dt=250;

void setup()
{
  Serial.begin(9600);
  pinMode(buzzPin, OUTPUT);
  pinMode(pot, INPUT);
}

void loop() {
  potVal = analogRead(pot);
  Serial.println(potVal);

  if(potVal > 1000)
    digitalWrite(buzzPin, HIGH);

  delay(dt);
  digitalWrite(buzzPin, LOW);
}
