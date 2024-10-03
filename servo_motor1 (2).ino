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
