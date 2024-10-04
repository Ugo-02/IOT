# Projeto Sensor PIR e Buzzer

Este projeto utiliza um sensor PIR para detectar movimento e um buzzer para emitir um som quando movimento é detectado.

## Índice

- [Descrição do Projeto](#descrição-do-projeto)
- [Componentes Necessários](#componentes-necessários)
- [Esquema de Ligação](#esquema-de-ligação)
- [Código](#código)
- [Como Usar](#como-usar)
- [Contribuição](#contribuição)
- [Licença](#licença)

## Descrição do Projeto

O projeto utiliza um sensor de movimento PIR (Passive Infrared Sensor) para detectar a presença de pessoas. Quando o sensor detecta movimento, um buzzer emite um som. Este projeto é útil em sistemas de alarme e automação residencial.

## Componentes Necessários

- 1 x Sensor PIR
- 1 x Buzzer
- 1 x Arduino (ou compatible)
- Fios de conexão
- Protoboard (opcional)

## Esquema de Ligação

- Conecte o pino VCC do sensor PIR ao pino 5V do Arduino.
- Conecte o pino GND do sensor PIR ao pino GND do Arduino.
- Conecte o pino OUT do sensor PIR ao pino digital 3 do Arduino.
- Conecte o pino positivo do buzzer ao pino digital 5 do Arduino.
- Conecte o pino negativo do buzzer ao pino GND do Arduino.

## Código

```cpp
// Definindo os pinos
int sensorPIR = 3; // Pino do sensor PIR
int buzzer = 5;    // Pino do buzzer

void setup() {
  pinMode(sensorPIR, INPUT);  // Configura o pino do sensor PIR como entrada
  pinMode(buzzer, OUTPUT);     // Configura o pino do buzzer como saída
}

void loop() {
  int detectarPresenca = digitalRead(sensorPIR); // Lê o estado do sensor PIR

  if (detectarPresenca == HIGH) { // Se presença for detectada
    tone(buzzer, 264); // Emite som no buzzer com frequência de 264 Hz
  } else {
    noTone(buzzer); // Para o som do buzzer
  }
}
![AlarmeComSensorPTR png](https://github.com/user-attachments/assets/566505e4-17c5-4c2b-b706-795a7cb0580e)

