void setup() {
  // Configuração inicial do sistema

  //Iniciando a comunicação com o Monitor Serial
  Serial.begin(9600);

}

void loop() {
  // Código que será execudado repetidamente
  Serial.print("Hoje é o último dia do mês de janeiro "); // Mostra a frase no monitor
  delay(1000); // Espera 1 segundo antes de seguir o loop

}
