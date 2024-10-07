### Biblioteca para Conexão Serial do Sensor de Umidade do Solo

Este projeto contém um código simples para leitura e monitoramento da umidade do solo utilizando um sensor analógico, conectado a um microcontrolador. A leitura dos valores do sensor é feita através da porta serial e exibida no monitor serial.

#### Funcionalidades:
- Leitura dos dados de um sensor de umidade do solo conectado à entrada analógica do microcontrolador.
- Exibição do valor lido e do estado do solo (seco, ideal, úmido) no monitor serial.
- Delays configurados para uma pausa de 10 segundos entre as leituras, garantindo monitoramento contínuo sem sobrecarregar a execução.

#### Configuração:
- Sensor conectado ao pino analógico `A0`.
- Comunicação serial iniciada com baud rate de 9600.

#### Estrutura básica:
- `analogRead()` usado para capturar os dados de umidade do sensor.
- Condicionais para identificar o estado do solo com base nos valores lidos.

![umidade png](https://github.com/user-attachments/assets/0384845d-7026-40f4-b071-2c1f6e10d7e5)





#include <SoftwareSerial.h>

// VARIÁVEL DO SENSOR
int sensor = A0;

void setup()
{
  // Definir o sensor como entrada
  pinMode(sensor, INPUT);
  
  // Iniciando o monitor serial
  Serial.begin(9600);
}

void loop()
{
  // Guardar o valor lido pelo sensor
  int umidade = analogRead(sensor);
  
  // Exibir o valor da umidade lida
  Serial.print("Umidade do solo: ");
  Serial.println(umidade);

  // Verificar o estado do solo com base na leitura do sensor
  if (umidade <= 300) {
    Serial.println("Solo seco");
  } 
  else if (umidade > 300 && umidade <= 500) {
    Serial.println("Solo ideal");
  } 
  else if (umidade > 500) {
    Serial.println("Solo úmido");
  }

  // Pausar por 10 segundos
  delay(10000);
}


