Controle de Servo Motor com Botões

Este projeto utiliza um servo motor controlado por dois botões. Um botão aumenta a posição do servo motor, enquanto o outro diminui. É uma ótima maneira de aprender sobre controle de atuadores e leitura de entradas digitais com Arduino.

Descrição

Servo Motor: Um servo motor é utilizado para realizar movimentos em ângulos controlados.
Botões: Dois botões permitem aumentar ou diminuir a posição do servo motor.
Botão Aumentar: Aumenta a posição do servo em 1° até 180°.
Botão Voltar: Diminui a posição do servo em 1° até 0°.

Componentes Necessários
Arduino (Uno, Mega, etc.)
Servo motor
Dois botões
Resistores (opcional, para pull-down)
Fios de conexão
Conexões
Conecte o fio de controle do servo motor à porta digital 2.
Conecte um botão à porta digital 4 e ao GND.
Conecte o outro botão à porta digital 7 e ao GND.

Código
cpp
Copiar código
// Biblioteca do servo motor
#include <Servo.h>

// Criando objeto do tipo servo motor
Servo objetoservo;

// Variável para salvar a porta que o servo está
int servo = 2; // Porta do servo

// Variáveis para as portas dos botões
int botao = 4; // Porta do botão aumentar
int botaovoltar = 7; // Porta do botão voltar

// Variável para a posição do motor
int posicao = 0;

void setup() {
  // Inicializando o servo na porta digital 2 
  objetoservo.attach(servo);
  
  // Definindo os botões como entradas
  pinMode(botao, INPUT);
  pinMode(botaovoltar, INPUT); // Para o botão de voltar
}

void loop() {
  // Se o botão de aumentar for pressionado e a posição do servo motor estiver menor que 180
  if (digitalRead(botao) == HIGH && posicao < 180) {
    posicao++; // Aumenta 1° na posição
    objetoservo.write(posicao); // Manda o motor parar na nova posição
    delay(15); // Aguarda um pouco para evitar múltiplas leituras
  }

  // Se o botão de voltar for pressionado e a posição for maior que 0
  if (digitalRead(botaovoltar) == HIGH && posicao > 0) {
    posicao--; // Diminui 1° na posição
    objetoservo.write(posicao); // Manda o motor parar na nova posição
    delay(15); // Aguarda um pouco para evitar múltiplas leituras
  }
}

Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para fazer um fork deste repositório, adicionar suas melhorias e enviar um pull request.
