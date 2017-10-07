#include "UbidotsMicroESP8266.h"

#define TOKEN  "wgcppnHhcK88Z7Vy34jQCyqQI7CULO"  // Put here your Ubidots TOKEN
#define ID_1 "59d8e2c1c03f97267c9b3a59" // Put your variable ID here
#define WIFISSID "Instituto Terra - Visitantes" // Put here your Wi-Fi SSID
#define PASSWORD "" // Put here your Wi-Fi password
#define ID "59d9078ac03f974c813b4245"

Ubidots client(TOKEN);

void setup(){
    Serial.begin(115200);
    client.wifiConnection(WIFISSID, PASSWORD);
    //client.setDebug(true); // Uncomment this line to set DEBUG on
    pinMode(2,OUTPUT);
}

void loop(){
    float value1 = analogRead(0);
    client.add(ID_1, value1);
    client.sendAll(false);
    float value = client.getValue(ID); // da Internet pelo Ubidots
    Serial.print("Value: ");
    Serial.println(value);
    if ( value == 1 ) digitalWrite(2,HIGH);
    else digitalWrite(2,LOW);
    delay(5000);
}
