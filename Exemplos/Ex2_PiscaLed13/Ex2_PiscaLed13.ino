// Tudo depois das duas barras é comentário, explicações...

void setup() { // Iniciar, executa uma vez quando liga. 
  // Onde o Led esta liga, pino 13
  pinMode(13,OUTPUT);  // OUTPUT - Saida, pino 13 é Saida
}

void loop() {  // Fica REPETINDO A SEQUENCIA DE COMANDOS ABAIXO....
  digitalWrite(13,HIGH); // Liga (HIGH) a saida 13.
  delay(10000); // Espera 1000 milisegundos, que é 1 segundo
  digitalWrite(13,LOW); // Desiga (LOW) a saida 13.  
  delay(10000); // Espera 1000 milisegundos, que é 1 segundo
}
