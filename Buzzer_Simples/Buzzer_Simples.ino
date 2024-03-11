//Constante para o pino da buzzer
#define pinoBuzzer 2

//Constante do led
#define pinoLedVermelho 3

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);

  delay(1000);

}

void loop() {
  tone(pinoBuzzer, 523);
  digitalWrite(pinoLedVermelho, HIGH);//Nota musical dó
  delay(1000);
  noTone(pinoBuzzer); //Desliga buzzer
  digitalWrite(pinoLedVermelho, LOW); //Desliga o LED
  delay(1000);

}
