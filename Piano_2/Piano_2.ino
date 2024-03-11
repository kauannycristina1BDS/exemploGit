//Definição das constantes: pino de entrada
#define pinoBuzzer 2

//leds / botões


byte doh, re, mi, fa, sol, la, si, doh2 = 0;

void setup() {
  pinMode(pinoBuzzer, OUTPUT);

  Serial.begin(9600);
  delay(1000);
}

void loop() {

  tone(pinoBuzzer, 494);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 659);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 392);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 370);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 659);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 494);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 370);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 659);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 392);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 370);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 622);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 659);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  tone(pinoBuzzer, 494);
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  delay(1000);
  
}
