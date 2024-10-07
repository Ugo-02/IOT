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
