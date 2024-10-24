# Projeto de Tela LCD com Sensor de Presença
# Descrição do Projeto
Este projeto utiliza uma tela LCD e um sensor de presença (ultrassônico) para exibir uma mensagem quando alguém se aproxima.

# Materiais Necessários
Tela LCD (16x2 ou 20x4)

Sensor de proximidade (HC-SR04)

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

Conecte o sensor de proximidade ao microcontrolador da seguinte forma:

VCC -> 5V

GND -> GND

Trig -> Pino digital 9 (Arduino)

Echo -> Pino digital 10 (Arduino)

# Código
cpp

Copiar
#include <LiquidCrystal.h>

const int trigPin = 9;
const int echoPin = 10;
const int lcdPin = 12;

LiquidCrystal lcd(lcdPin, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1;

  lcd.clear();
  lcd.setCursor(0, 0);
  if (distance <= 10) {
    lcd.print("Someone is near");
  } else {
    lcd.print("No one around");
  }
  delay(500);
}

# Instalação
Conecte os componentes conforme o esquema do circuito.

Carregue o código no microcontrolador utilizando o Arduino IDE ou outra plataforma compatível.

# Uso
A tela LCD exibirá uma mensagem quando alguém se aproxima do sensor.