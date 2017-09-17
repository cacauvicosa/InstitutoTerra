/**
 * Exemplo básico para HC-12
 */

#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); //RX, TX

int numero;
int prazo;
long int tempo;

int NaoAcabou() {
  return ( millis() - tempo < prazo );
}

int Acabou() {
  return ! NaoAcabou();
}

void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(9600);
  mySerial.begin(9600);
  numero = 0;
  prazo = 2000;
  tempo = millis();
  mySerial.print(numero,DEC);
}

void loop() {

  if(mySerial.available()  && NaoAcabou() ){ 
    int n = mySerial.parseInt();
    Serial.println(n);
    digitalWrite(13,!digitalRead(13));
    delay(1000);
    tempo = millis();
    numero++;
    mySerial.print(numero);
  } else if ( Acabou() ) {
    tempo = millis();
    mySerial.print(numero,DEC);
  }

}
