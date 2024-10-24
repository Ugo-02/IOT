# Projeto de Tela LCD com Sensor de Presença e Buzzer
# Descrição do Projeto
Este projeto utiliza uma tela LCD, um sensor de presença (ultrassônico) e um buzzer para exibir uma mensagem e emitir um som quando alguém se aproxima.

# Materiais Necessários
Tela LCD (16x2 ou 20x4)

Sensor de proximidade (HC-SR04)

Buzzer

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

Conecte o buzzer ao microcontrolador da seguinte forma:

Pino positivo do buzzer -> Pino digital 8 (Arduino)

Pino negativo do buzzer -> GND

# Código
#include <LiquidCrystal.h>

const int trigPin = 9;
const int echoPin = 10;
const int buzzerPin = 8;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
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
    digitalWrite(buzzerPin, HIGH); // Ativa o buzzer
  } else {
    lcd.print("No one around");
    digitalWrite(buzzerPin, LOW); // Desativa o buzzer
  }
  delay(500);
}

# Instalação
Conecte os componentes conforme o esquema do circuito.

Carregue o código no microcontrolador utilizando o Arduino IDE ou outra plataforma compatível.

# Uso
A tela LCD exibirá uma mensagem e o buzzer emitirá um som quando alguém se aproximar do sensor.