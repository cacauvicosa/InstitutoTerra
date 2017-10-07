// Tudo depois das duas barras é comentário, explicações...

void setup() { // Iniciar, executa uma vez quando liga. 
  // TRES LEDS ligados no 12, 11 e 10
  pinMode(12,OUTPUT);  // OUTPUT 
  pinMode(11,OUTPUT);pinMode(10,OUTPUT);
}

void loop() {  // Fica REPETINDO A SEQUENCIA DE COMANDOS ABAIXO....
  digitalWrite(10,LOW); // Liga (HIGH
  digitalWrite(12,HIGH); // Liga (HIGH
  delay(3000); // Espera 3000 milisegundos, que é 3 segundo
  digitalWrite(12,LOW); // Desiga (LOW).  
  digitalWrite(11,HIGH);  
  delay(1000); 
  digitalWrite(11,LOW); // Desiga (LOW).  
  digitalWrite(10,HIGH);  
  delay(3000); 
  
  
  
  
}
