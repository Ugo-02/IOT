# Projeto de Tela LCD com Sensor de Umidade do Solo

# Descrição do Projeto
Este projeto utiliza uma tela LCD e um sensor de umidade do solo para exibir o nível de umidade em tempo real.

# Materiais Necessários
Tela LCD (16x2 ou 20x4)

Sensor de umidade do solo (por exemplo, sensor resistivo)

Microcontrolador (Arduino, Raspberry Pi, etc.)

Resistores (1kΩ)

Potenciômetro (10kΩ) - para ajuste de contraste

# Fios de conexão

Breadboard

Fonte de alimentação

# Circuito
Conecte os pinos da tela LCD ao microcontrolador da seguinte forma:

VSS -> GND

VDD -> 5V

V0 -> Centro do potenciômetro

RS -> Pino digital 12 (Arduino)

RW -> GND

E -> Pino digital 11 (Arduino)

D4 -> Pino digital 5 (Arduino)

D5 -> Pino digital 4 (Arduino)

D6 -> Pino digital 3 (Arduino)

D7 -> Pino digital 2 (Arduino)

A -> 5V (via resistor 1kΩ)

K -> GND

Conecte o sensor de umidade do solo ao microcontrolador da seguinte forma:

VCC -> 5V

GND -> GND

A0 -> Pino analógico A0 (Arduino)

# Código 
#include <LiquidCrystal.h>

const int soilSensorPin = A0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(soilSensorPin, INPUT);
}

void loop() {
  int soilMoisture = analogRead(soilSensorPin);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Soil Moisture: ");
  lcd.print(soilMoisture);
  delay(1000);
}

# Instalação
Conecte os componentes conforme o esquema do circuito.

Carregue o código no microcontrolador utilizando o Arduino IDE ou outra plataforma compatível.

# Uso
A tela LCD exibirá o nível de umidade do solo em tempo real, medido pelo sensor de umidade do solo.

