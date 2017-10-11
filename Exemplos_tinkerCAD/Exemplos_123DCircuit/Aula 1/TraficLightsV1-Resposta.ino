//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Trafic Lights V.1
// 
// Made by augusto augusto_273@hotmail.com
// License: CC-BY-SA 3.0
// Downloaded from: https://123d.circuits.io/circuits/830425-trafic-lights-v-1

// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int red = 13;
int yellow = 12;
int green = 11;

// the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
   pinMode(green, OUTPUT);
}

//Comecar com o sinal vermelho (5 segundos), depois passa pro verde (3 segungos) depois amarel (1 segundo) e repete tudo
void loop() {
  digitalWrite(red, HIGH); 
  delay(5000);  
  digitalWrite(red, LOW); 
  digitalWrite(green, HIGH);
  delay(3000); 
   digitalWrite(green, LOW); 
  digitalWrite(yellow, HIGH);
  delay(1000);  
  digitalWrite(yellow, LOW);
              
}
