# Projeto de Tela LCD com Motor DC
# Descrição do Projeto
Este projeto utiliza uma tela LCD e um motor DC para exibir informações e controlar o movimento do motor.

# Materiais Necessários
Tela LCD (16x2 ou 20x4)

Motor DC

Driver de motor (por exemplo, L298N)

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

Conecte o motor DC ao driver de motor e ao microcontrolador da seguinte forma:

IN1 -> Pino digital 8 (Arduino)

IN2 -> Pino digital 9 (Arduino)

ENA -> Pino digital 10 (Arduino)

Motor VCC -> Saída do driver (MOTOR OUT)

Motor GND -> Saída do driver (MOTOR OUT)

Driver VCC -> 5V

Driver GND -> GND

# Código
#include <LiquidCrystal.h>

const int motorIn1 = 8;
const int motorIn2 = 9;
const int motorEnable = 10;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("DC Motor Control");
  pinMode(motorIn1, OUTPUT);
  pinMode(motorIn2, OUTPUT);
  pinMode(motorEnable, OUTPUT);
}

void loop() {
  // Gira o motor no sentido horário
  digitalWrite(motorIn1, HIGH);
  digitalWrite(motorIn2, LOW);
  analogWrite(motorEnable, 255);
  lcd.setCursor(0, 1);
  lcd.print("Clockwise");
  delay(2000);

  // Para o motor
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  analogWrite(motorEnable, 0);
  delay(1000);

  // Gira o motor no sentido anti-horário
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, HIGH);
  analogWrite(motorEnable, 255);
  lcd.setCursor(0, 1);
  lcd.print("Counterclockwise");
  delay(2000);

  // Para o motor
  digitalWrite(motorIn1, LOW);
  digitalWrite(motorIn2, LOW);
  analogWrite(motorEnable, 0);
  delay(1000);
}

# Instalação
Conecte os componentes conforme o esquema do circuito.

Carregue o código no microcontrolador utilizando o Arduino IDE ou outra plataforma compatível.

# Uso
A tela LCD exibirá mensagens enquanto o motor DC gira no sentido horário e anti-horário.