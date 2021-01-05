#include "EEPROM.h"
#include "HTML.h"
#include <WebServer.h>

WebServer server(80);

#include "WiFiManager.h"

void setup() {
  pinMode(2, OUTPUT);
  pinMode(15,INPUT); //for resetting WiFi creds
  EEPROM.begin(400);
  Serial.begin(115200);
  if(!CheckWIFICreds()){
    Serial.println("No WIFI credentials stored in memory. Loading form...");
    digitalWrite(2,HIGH);
    while(loadWIFICredsForm());
  }
}

void loop() {
  if(digitalRead(15) == HIGH){
    Serial.println("Wiping WiFi credentials from memory...");
    wipeEEPROM();
    while(loadWIFICredsForm());
  }
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  delay(1000);
}

void wipeEEPROM(){
  for(int i=0;i<400;i++){
    EEPROM.writeByte(i,0);
  }
  EEPROM.commit();
}
