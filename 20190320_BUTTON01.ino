#include <SoftwareSerial.h>

SoftwareSerial BT (2,3);

void setup() {
  pinMode (8,INPUT);
  pinMode (13,OUTPUT);
  BT.begin (9600);
  Serial.begin (9600);
}

void loop() {
  if (digitalRead(8) == HIGH)
  {
    digitalWrite (13, HIGH);
    Serial.println ("버튼이 눌러졌습니다.");
    BT.write ('1');
  }
  else
  {
    digitalWrite (13,LOW);
    Serial.println ("버튼이 눌러지지 않았습니다.");
  }
  delay (500);
}
