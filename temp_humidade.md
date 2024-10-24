#Projeto de Tela LCD com Sensor de T emperatura e Umidade

# Descrição do Projeto
Este projeto utiliza uma tela LCD e um sensor de temperatura e umidade (DHT22) para exibir informações em tempo real.

# Materiais Necessários
Tela LCD (16x2 ou 20x4)

Sensor de temperatura e umidade DHT22

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

Conecte o sensor DHT22 ao microcontrolador da seguinte forma:

VCC -> 5V

GND -> GND

Data -> Pino digital 2 (Arduino)

# Código
#include <LiquidCrystal.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  dht.begin();
}

void loop() {
  delay(2000);
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" °C");
  lcd.setCursor(0, 1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print(" %");
}

# Instalação
Conecte os componentes conforme o esquema do circuito.

Carregue o código no microcontrolador utilizando o Arduino IDE ou outra plataforma compatível.

# Uso
A tela LCD exibirá a temperatura e a umidade do ambiente a cada 2 segundos.