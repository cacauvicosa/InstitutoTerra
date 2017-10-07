// Tudo depois das duas barras é comentário, explicações...

void setup() { // Iniciar, executa uma vez quando liga. 
  // TRES LEDS ligados no 12, 11 e 10
  pinMode(12,OUTPUT);  // OUTPUT 
  pinMode(11,OUTPUT);pinMode(10,OUTPUT);
}

void loop() {  // Fica REPETINDO A SEQUENCIA DE COMANDOS ABAIXO....
  int luz = analogRead(A0);
  if ( luz < 400 ) digitalWrite(12,HIGH);   //  if = SE, else = SENÃO 
  else   digitalWrite(12,LOW);   // Se Luz menor 400 Então Liga pino 12 (vermelho), senão desliga pino 12
  if ( luz < 600 && luz >=400 ) digitalWrite(11,HIGH);   //  if = SE, else = SENÃO 
  else   digitalWrite(11,LOW);   // Se Luz maior 400 e menor 600 ,Então Liga pino 11 (amarelo), senão desliga pino 11
  if ( luz >= 600 ) digitalWrite(10,HIGH);   //  if = SE, else = SENÃO 
  else   digitalWrite(10,LOW);   // Se Luz maior 600 Então Liga pino 10 (verde), senão desliga pino 10

}
