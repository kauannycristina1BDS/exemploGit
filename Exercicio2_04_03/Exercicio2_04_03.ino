//Declaração de variáveis
float sal, percentual, aumento, novosal;

void setup() {
  //Inicia a comunicação com o Serial Monitor
  Serial.begin(9600);
  delay(1000);  //Espera estratégica
}

void loop() {
  Serial.print("Digite o salario: ");
  //Lê o valor do serial e guarda na variável nota1
  sal = aguardaEntradaNumerica();
  Serial.println(sal);

  Serial.print("Digite o percentual de aumento: ");
  //Lê o valor do serial e guarda na variável nota1
  percentual = aguardaEntradaNumerica();
  Serial.println(percentual);

  //Cálculo do aumento
  aumento = sal * percentual / 100;
  Serial.print("Aumento: ");
  Serial.println(aumento);
  delay(1000);

  //Cálculo do novo salário
  novosal = sal + aumento;
  Serial.print("Novo salario: ");
  Serial.println(novosal);
  delay(1000);
}

//Criando um função chamada
float aguardaEntradaNumerica() {
  while (!Serial.available()) {
    //aguarda até que um valor seja digitado
  }

  //Verifica se a entrada é númerica ou ponto
  while (!isdigit(Serial.peek()) && Serial.peek() != '.') {
    //Descarta  a entrada não númerica
    Serial.read();
    while (Serial.available() == 0) {
      //Aguarda nova entrada do usuário
    }
  }

  //Retornar o valor digitado no Serial em tipo float
  return Serial.parseFloat();
}