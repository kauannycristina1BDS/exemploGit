//Declaração da constante que armazena o pino do Push Button
#define pinoButton 8
#define ledVermelho 7

//Declaração da variável de estado do botão
bool status = false;

void setup() {
  //Definir a modalidade do pino
  pinMode(pinoButton, INPUT);
  pinMode(ledVermelho, OUTPUT);

  Serial.begin(9600);

  delay(1000);
}

void loop() {
  //Lendo o pino digital através da constante
  // Serial.println(digitalRead(pinoButton));

  if (digitalRead(pinoButton) == 1 && status == false) {
    Serial.println("Led ON...");
    status = true;
    digitalWrite(ledVermelho, HIGH);

  }

  else if (digitalRead(pinoButton) == 1 && status == true) {
    Serial.println("Led OFF..");
    status = false;
    digitalWrite(ledVermelho, LOW);
  }
  delay(1000);
}
