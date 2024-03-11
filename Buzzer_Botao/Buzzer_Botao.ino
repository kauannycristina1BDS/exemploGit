//Constante para o pino da buzzer
#define pinoBuzzer 2

//Constante do led
#define pinoLedVermelho 3
#define pinoLedVerde 5

//Constante do Botão
#define pinoButton 4

bool status = false;

void setup() {
  Serial.begin(9600);

  //Modo do pino
  pinMode(pinoBuzzer, OUTPUT);
  pinMode(pinoLedVermelho, OUTPUT);
  pinMode(pinoButton, INPUT);
  pinMode(pinoLedVerde, OUTPUT);
  delay(1000);

}

void loop() {
  if(digitalRead(pinoButton) == 1 && status == false){
    tone(pinoBuzzer, 523);
    status = true;
    digitalWrite(pinoLedVermelho, HIGH);//Nota musical dó
    digitalWrite(pinoLedVerde, HIGH);

  }
  
   else if (digitalRead(pinoButton) == 1 && status == true) {
    noTone(pinoBuzzer); //Desliga buzzer
    status = false;
    digitalWrite(pinoLedVermelho, LOW); //Desliga o LED
    digitalWrite(pinoLedVerde, LOW);
 }
  delay(1000);
}
