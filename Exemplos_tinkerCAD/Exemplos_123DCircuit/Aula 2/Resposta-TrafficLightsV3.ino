//  _ ___ _______     ___ ___ ___  ___ _   _ ___ _____ ___ 
// / |_  )__ /   \   / __|_ _| _ \/ __| | | |_ _|_   _/ __| 
// | |/ / |_ \ |) | | (__ | ||   / (__| |_| || |  | | \__ \ 
// |_/___|___/___/   \___|___|_|_\\___|\___/|___| |_| |___/ 
// 
// Traffic Lights V3
// 
// Made by Gabriel Augusto
// License: CC-BY-SA 3.0
// Downloaded from: https://123d.circuits.io/circuits/830567-the-unnamed-circuit

const int red = 13; //red no pino 13
const int yellow = 12; //yellow no pino 12
const int green = 11; //led no pino 11
const int redp = 7; //led no pino 7
const int greenp = 6; //led no pino 6
const int Botao = 2; //botao no pino 2
int EstadoBotao = 0; //Variavel para ler o status do pushbutton
bool pedestre = false;

void setup(){
	pinMode(red, OUTPUT); //Pino do led será saída
    pinMode(yellow, OUTPUT); //Pino do led será saída
    pinMode(green, OUTPUT); //Pino do led será saída
  	pinMode(greenp, OUTPUT); //Pino do led será saída
    pinMode(redp, OUTPUT); //Pino do led será saída
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
      delay(1000);
      digitalWrite(redp, LOW);
      digitalWrite(greenp, HIGH);
      delay(5000);
      digitalWrite(greenp, LOW);
      piscaPedestre();
      pedestre = false;
    }
  	if(!pedestre)
    {
      digitalWrite(redp, HIGH);
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH);
    }
}

void piscaPedestre()
{
  int i=0; 
  for(i=0;i<3;i++)
  {
    digitalWrite(redp, HIGH);
    delay(1000);
    digitalWrite(redp, LOW);
    delay(1000);
  }
  	
}
