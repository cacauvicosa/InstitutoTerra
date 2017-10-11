//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Traffic Light V2
// 
// Made by augusto augusto_273@hotmail.com
// License: CC-BY-SA 3.0
// Downloaded from: https://123d.circuits.io/circuits/830452-traffic-light-v2

const int red = 13; //red no pino 13
const int yellow = 12; //yellow no pino 12
const int green = 11; //led no pino 11
const int Botao = 2; //botao no pino 2
int EstadoBotao = 0; //Variavel para ler o status do pushbutton
bool pedestre = false;

void setup(){
	pinMode(red, OUTPUT); //Pino do led será saída
    pinMode(yellow, OUTPUT); //Pino do led será saída
    pinMode(green, OUTPUT); //Pino do led será saída
	pinMode(Botao, INPUT); //Pino com botão será entrada
}
void loop(){
	EstadoBotao = digitalRead(Botao); /*novo estado do botão vai ser igual ao que
	Arduino ler no pino onde está o botão.
	Poderá ser ALTO (HIGH)se o botão estiver
	Pressionado, ou BAIXO (LOW),se o botão
	estiver solto */
	if (EstadoBotao == HIGH){ //Se botão estiver pressionado (HIGH)
		pedestre = true;
      	
	}
	if(pedestre)
    {
      digitalWrite(green, LOW);
      digitalWrite(yellow, HIGH); // acende o led do pino 13.
      delay(1000);
      digitalWrite(yellow, LOW);
      digitalWrite(red, HIGH);
      delay(5000);
      digitalWrite(red, LOW);
      delay(100);
      pedestre = false;
    }
  	if(!pedestre)
    {
       digitalWrite(green, HIGH);
    }
}
