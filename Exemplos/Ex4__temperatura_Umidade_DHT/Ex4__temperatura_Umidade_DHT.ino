#include "DHT.h"   // rIncluir a biblioteca (comandos do Sensor)

#define DHTPIN 2     // Pino 2 com DHT 22
DHT Sensor(DHTPIN, DHT22);  // Conectar o sensor em algum pino, no exemplo pino 2, tipo dht22

void setup() {
  Serial.begin(9600);
  Serial.println("testando....");
  Sensor.begin();   // Iniciar o Sensor
}

void loop() {
  // Espera  2 segundos 
  delay(2000);
  float t = Sensor.readTemperature();   // Faço a leitura
  Serial.print("Temperatura: ");  
  Serial.print(t);   // imprimir na Tela do terminal Serial a temperatura
  float u = Sensor.readHumidity();
  Serial.print(" Umidade: ");  
  Serial.println(u);   // imprimir na Tela do terminal Serial a temperatura
  
}
