#include "DHT.h"   // rIncluir a biblioteca (comandos do Sensor)

#define DHTPIN 2     // Pino 2 com DHT 22
DHT Sensor(DHTPIN, DHT22);  // Conectar o sensor em algum pino, no exemplo pino 2, tipo dht22


void setup() {
  Serial.begin(57600);
  Sensor.begin();   // Iniciar o Sensor
}

void loop() {
  // Espera  2 segundos 
  delay(2000);
  float t = Sensor.readTemperature();   // Faço a leitura
  Serial.print(t);   // imprimir  Serial a temperatura
  Serial.println(" "); // espaço
  float u = Sensor.readHumidity();
 // Serial.print(u);   // imprimir na Tela do terminal Serial 
 // Serial.print(" "); // espaço 
  // luz com LDR (resistor) numero entre 0 e 1024 com a entrada analogico 
  int luz = analogRead(A1);
 // Serial.print(luz);   // imprimir na Tela do terminal Serial 
//  Serial.print(" "); // espaço  
    int pot = analogRead(A0);
//  Serial.println(pot);   // imprimir na Tela do terminal Serial 

}
