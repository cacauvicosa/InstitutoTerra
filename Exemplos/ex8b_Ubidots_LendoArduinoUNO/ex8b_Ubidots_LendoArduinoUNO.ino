#include <SoftwareSerial.h>

#include "UbidotsMicroESP8266.h"

#define TOKEN  "wgcppnHhcK88Z7Vy34jQCyqQI7CULO"  // Put here your Ubidots TOKEN
#define ID_1 "59d8e2c1c03f97267c9b3a59" // Put your variable ID here
#define WIFISSID "Instituto Terra - Visitantes" // Put here your Wi-Fi SSID
#define PASSWORD "" // Put here your Wi-Fi password

Ubidots client(TOKEN);

SoftwareSerial mySerial(13,15); // rx e tx2 NodeMCU - d8 e d7 (conferir a ordem) - ligar com resistor 5v para 3.3V


void setup(){
    Serial.begin(115200);
    client.wifiConnection(WIFISSID, PASSWORD);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
    mySerial.begin(115200);
}

void loop(){
    float value1 = analogRead(0);
    client.add(ID_1, value1);
    client.sendAll(false);
    delay(5000);
    if (mySerial.available()) { Serial.write(mySerial.read());
      /*float t = mySerial.parseFloat();
      Serial.println(t);
      float h = mySerial.parseFloat();
      Serial.println(h);
      int l = mySerial.parseInt();
      Serial.println(l);
      int p = mySerial.parseInt();
      Serial.print(p); */      
    }
}
