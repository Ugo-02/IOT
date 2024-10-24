# Jogo de Reflexo com LEDs

# Descrição do Projeto
Este projeto é um jogo de reflexo onde LEDs acendem em sequência e o participante deve apertar os botões correspondentes o mais rápido possível. A pontuação é exibida em uma tela LCD.

# Materiais Necessários
LEDs (3-5 unidades de cores diferentes)

Botões (1 para cada LED)

Tela LCD (16x2 ou 20x4)

Microcontrolador (Arduino, Raspberry Pi, etc.)

Resistores (1kΩ para LEDs e 10kΩ para botões)

Potenciômetro (10kΩ) - para ajuste de contraste do LCD

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

Conecte os LEDs ao microcontrolador da seguinte forma:

Ânodo (+) -> Pinos digitais 6, 7, 8, 9, 10 (Arduino)

Cátodo (-) -> GND (via resistores 1kΩ)

Conecte os botões ao microcontrolador da seguinte forma:

Um lado do botão -> 5V

Outro lado do botão -> Pinos digitais correspondentes aos LEDs (ex. 6, 7, 8, 9, 10) e GND (via resistores 10kΩ)

# Código
#include <LiquidCrystal.h>

const int ledPins[] = {6, 7, 8, 9, 10};
const int buttonPins[] = {6, 7, 8, 9, 10};
const int numLEDs = 5;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int score = 0;
int currentLED;

void setup() {
  lcd.begin(16, 2);
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
    pinMode(buttonPins[i], INPUT_PULLUP);
  }
  lcd.print("Score: ");
  lcd.print(score);
  delay(1000);
}

void loop() {
  currentLED = random(numLEDs);
  digitalWrite(ledPins[currentLED], HIGH);
  delay(500); // Tempo para o jogador reagir
  digitalWrite(ledPins[currentLED], LOW);

  if (digitalRead(buttonPins[currentLED]) == LOW) {
    score++;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Score: ");
    lcd.print(score);
  }
  delay(500);
}

# Instalação
Conecte os componentes conforme o esquema do circuito.

Carregue o código no microcontrolador utilizando o Arduino IDE ou outra plataforma compatível.

# Uso
O LED acende aleatoriamente, e o jogador deve pressionar o botão correspondente o mais rápido possível.

A pontuação é exibida na tela LCD.