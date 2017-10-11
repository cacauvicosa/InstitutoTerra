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

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(red, HIGH);  
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  delay(1000);               
  digitalWrite(red, LOW);   
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW); 
  delay(1000);               
}
