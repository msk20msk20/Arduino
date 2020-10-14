#include <SoftwareSerial.h>
#define relay 8
SoftwareSerial BT (2,3);

void setup() {
  pinMode (relay, OUTPUT);
  digitalWrite (relay, HIGH);
  BT.begin (9600);
  
}

void loop() {
  if (BT.available())
  {
    char munja = BT.read();
    if (munja == '1')
      digitalWrite (relay, HIGH);
    else if (munja == '2');
      digitalWrite (relay, LOW);
  } 
}
