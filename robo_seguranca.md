# Projeto Robô Segurança

#Descrição
Este projeto implementa um robô de segurança utilizando um servo motor e um LED. O robô detecta obstáculos a uma distância de até 30 cm e, ao detectar um objeto próximo, o servo motor se move e um LED vermelho é acionado.

# Componentes Necessários
1x Servo motor (micro servo)
1x LED vermelho
1x resistor de 220Ω
1x sensor ultrassônico (opcional, dependendo da implementação)
1x placa Arduino (por exemplo, Arduino Uno)
Fios de conexão
Placa de protótipo (breadboard)

#Esquema de Ligação

Conecte o LED vermelho ao pino 0 do Arduino, usando um resistor de 220Ω em série.
Conecte o pino de controle do servo motor ao pino 2 do Arduino.
Para o sensor ultrassônico (se usado):
Conecte o pino Trigger ao pino 1.
Conecte o pino Echo ao pino 1 também (ajuste se necessário).

# Código

#include <Servo.h>

Servo microServo; // Cria um objeto servo

int led = 0; // Pino do LED vermelho
int servo = 2; // Pino do servo
int posicao = 0;

long distancia(int trigger, int echo) {
  // Trigger como pino de saída
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  delay(5); // Espera 5 milissegundos
  digitalWrite(trigger, HIGH);
  delay(10); // Envia o pulso
  digitalWrite(trigger, LOW);

  // Echo como pino de entrada
  pinMode(echo, INPUT);
  
  return pulseIn(echo, HIGH); // Corrigido: pulseIn
}

void setup() {
  // Inicializando o servo na porta digital
  microServo.attach(servo);
  pinMode(led, OUTPUT); // Corrigido: fechando o parêntese
  microServo.write(posicao);
}

void loop() {
  int cm = 0.1723 * distancia(1, 1); // Ajuste para os pinos corretos
  
  if (cm < 30) {
    // Mandar o motor para a nova posição
    posicao = posicao + 5;
    microServo.write(posicao);
    digitalWrite(led, HIGH);
    delay(100);
  } else {
    digitalWrite(led, LOW);
  }
}

# Como Usar

Monte o circuito conforme o esquema de ligação.
Carregue o código no seu Arduino usando o Arduino IDE.
Execute o programa. O LED acenderá e o servo motor se moverá ao detectar um objeto a menos de 30 cm.

# Licença
Este projeto está licenciado sob a Licença MIT. Sinta-se à vontade para modificar e redistribuir, desde que mantenha a atribuição ao autor original.

# Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests.



