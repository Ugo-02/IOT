# Introdução

Este projeto simples tem como objetivo acender um LED utilizando um Arduino. É uma ótima maneira de iniciar sua jornada no mundo da eletrônica e programação com Arduino.

# Materiais Necessários
1 Placa Arduino (ex: Arduino Uno)
1 LED (qualquer cor)
1 Resistor de 220 ohms
Fios de conexão (jumpers)
1 Breadboard (opcional)

# Diagrama de Ligação

+-----------+        +-----+
|  Arduino  |        | LED |
|           |        +-----+
|           |          | |
|           |          | |
|           |          | |
|           |          | |
|           |          | |
|           |          | |
|           |          | |
|  13 ------|----------| |------| 
|           |          | |      | Resistor 220Ω
|           |          | |      |
|           |          | |      |
|           |          | +------+  
|           |          |  
+-----------+          |
                     GND

# Conexões

1.Conecte o pino longo do LED (ânodo) ao pino digital 13 do Arduino.

2.Conecte o pino curto do LED (cátodo) a um terminal do resistor de 220 ohms.

3.Conecte a outra extremidade do resistor ao GND (terra) do Arduino.

# Código

Abra o Arduino IDE e insira o seguinte código:

// Definição do pino do LED
const int ledPin = 13;

void setup() {
  // Inicializa o pino do LED como saída
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH); // Acende o LED
  delay(1000);                // Aguarda 1 segundo
  digitalWrite(ledPin, LOW);  // Apaga o LED
  delay(1000);                // Aguarda 1 segundo
}

# Explicação do Código
const int ledPin = 13;: Define o pino 13 como o pino onde o LED está conectado.
setup(): Inicializa o pino do LED como saída.
loop(): O loop executa continuamente, acendendo o LED por 1 segundo e, em seguida, apagando-o por 1 segundo.

# Execução
Conecte seu Arduino ao computador via USB.
Abra o Arduino IDE e selecione a placa e a porta correta.
Carregue o código no Arduino.
O LED deve começar a piscar em intervalos de 1 segundo.

# Conclusão
Neste projeto, você aprendeu a acender um LED usando um Arduino. Sinta-se à vontade para modificar os tempos de delay ou usar outros pinos digitais para explorar mais possibilidades!