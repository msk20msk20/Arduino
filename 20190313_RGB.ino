#include <SoftwareSerial.h>

SoftwareSerial BT (2,3);

void setup() {
  pinMode (9,OUTPUT);   //RED
  pinMode (10,OUTPUT);  //GREEN
  pinMode (11,OUTPUT);  //BLUE
  BT.begin (9600);
}

void loop() {
  if (BT.available())
  {
    char c = BT.read();
    int brightness = BT.parseInt();

    if (c = 'r')
      analogWrite (9,brightness);
    else if(c == 'g')
    analogWrite (10,brightness);
    else if(c == 'b')
    analogWrite (11,brightness);
  }
  
}
