// Tudo depois das duas barras é comentário, explicações...

void setup() { // Iniciar, executa uma vez quando liga. 
  // Onde o Led esta liga, pino 13
  pinMode(13,OUTPUT);  // OUTPUT - Saida, pino 13 é Saida
}

void loop() {  // Fica REPETINDO A SEQUENCIA DE COMANDOS ABAIXO....
  digitalWrite(13,HI); // Liga (HIGH) a saida 13.
}
