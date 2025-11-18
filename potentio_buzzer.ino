
int potVal;
int buzzPin=8;
String msg="Inp ur num: ";
int pot= A0;
int dt=250;

void setup()
 {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(pot, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

potVal=analogRead(pot);
Serial.println(potVal);
if(potVal >1000)
digitalWrite(buzzPin, HIGH);
delay(dt);
digitalWrite(buzzPin, LOW);

}
