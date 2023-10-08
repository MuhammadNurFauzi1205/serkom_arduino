#include <SoftwareSerial.h>

SoftwareSerial SerialWe (2,3); //tx,rx
SoftwareSerial SerialOne (2,3);
float c;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
SerialWe.begin(9600);
SerialOne.begin(9600);
pinMode(A0,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  float tegangan_analog;
  float VRL;
  SerialWe.available();
  tegangan_analog = analogRead(A0);
//  VRL = tegangan_analog*(5/1023);
  SerialWe.write(tegangan_analog);
  Serial.println(tegangan_analog);

  SerialOne.write(5);
  Serial.println(5);
  delay(1000);
//  if(SerialWe.available()){
//  c = SerialWe.read();
//  Serial.println(c);
//  delay(1000);
//  }
}
