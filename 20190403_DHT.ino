#include <SoftwareSerial.h>
#include <DHT.h>
#include <DHT_U.h>


SoftwareSerial BT (2,3);
DHT myDHT (6, DHT11);

void setup() {
  Serial.begin (9600);
  BT.begin (9600);
}

void loop() {
  float temp = myDHT.readTemperature();
  float humi = myDHT.readHumidity();

  Serial.print ("온도센서 : ");
  Serial.print (temp);
  Serial.println (" Celius");
  
  Serial.print ("습도센서 : ");
  Serial.print (humi);
  Serial.println ("%");

  BT.println (temp);
  BT.print (humi);
  
  delay (500);

  
}
