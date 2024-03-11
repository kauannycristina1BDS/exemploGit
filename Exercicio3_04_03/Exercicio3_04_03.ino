//Declaração de variáveis
float sal, salreceber, gratificacao, imposto;

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

  //Cálculo gratificação
  gratificacao = sal * 5 / 100;
  imposto = sal * 7 /100;

  //Cálculo do novo salário
  salreceber = sal + gratificacao - imposto;
  Serial.print("Salario a receber: ");
  Serial.println(salreceber);
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