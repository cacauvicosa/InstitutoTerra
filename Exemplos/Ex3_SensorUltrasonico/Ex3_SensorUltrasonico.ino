/* Adaptado do 
 * HCSR04Ultrasonic/examples/UltrasonicDemo/UltrasonicDemo.pde
 */

#include <Ultrasonic.h>    // Biblioteca do Sensor Ultrasonica HC-04

#define TRIGGER_PINO  12  // ligacoes do Sensor
#define ECHO_PINO    13

Ultrasonic SensorDistancia (TRIGGER_PINO, ECHO_PINO);  // Criei um sensor com nome SensorDistancia 

void setup()
  {
  Serial.begin(9600);   // Visualizar na Tela atraves do Terminal do Serial
  }

void loop()
  {
  float distancia;
  long microsec = SensorDistancia.timing();

  distancia = SensorDistancia.convert(microsec, Ultrasonic::CM);
  Serial.print("Distancia: ");
  Serial.println(distancia);
  delay(1000);
  }
