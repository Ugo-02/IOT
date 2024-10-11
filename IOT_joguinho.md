
O código do jogo Super BIM Game para Arduino é um projeto que utiliza o LiquidCrystal e simula um jogo onde um personagem deve pular obstáculos usando um botão. O personagem é mostrado em um display LCD, e o jogo termina se o personagem colidir com um obstáculo. Abaixo seguem as instruções detalhadas para ligar e jogar o Super BIM Game:

**Componentes Necessários**

1 Arduino Uno
1 Display LCD com controlador HD44780
1 Botão para controlar o personagem
Fios de conexão para montar o circuito

**Ligações dos Componentes**

Conexão do Display LCD (HD44780)

Pino VSS (do LCD) → GND (do Arduino)

Pino VDD (do LCD) → 5V (do Arduino)

Pino V0 (do LCD) → Potenciômetro para controle de contraste (ou GND para contraste fixo)

Pino RS (do LCD) → Pino 11 (Arduino)

Pino RW (do LCD) → GND (permite somente escrita)

Pino E (do LCD) → Pino 9 (Arduino)

Pinos D4, D5, D6, D7 (do LCD) → Pinos 6, 5, 4, 3 (Arduino)

Pino A (do LCD) → 5V (retroiluminação)

Pino K (do LCD) → GND (retroiluminação)

**Conexão do Botão**

Um terminal do botão → Pino 2 (Arduino)
Outro terminal do botão → GND
Conexão do Pino de Autoplay (opcional)
Pino 1 (Arduino) → Usado para simular autoplay (não obrigatório para o jogo manual)
Esquema de Ligações Simplificado
scss
Copy code
     +---------------------------+
     |   Arduino Uno              |
     |                            |
     |  2  → Botão de controle    |
     |                            |
     |  11 → RS (LCD)             |
     |                            |
     |  9  → E (LCD)              | 
     |                            |
     |  6  → D4 (LCD)             |
     |                            |
     |  5  → D5 (LCD)             |
     |                            |
     |  4  → D6 (LCD)             |
     |                            |
     |  3  → D7 (LCD)             |
     |                            |
     |  GND → Pino RW (LCD)       |
     |                            |
     |  5V  → Pino VDD (LCD)      |
     |                            |
     |  GND → Pino VSS (LCD)      | 
     |                            |       
     +----------------------------+

**Como Jogar**

Conecte os componentes conforme o esquema acima.
Carregue o código no Arduino usando a IDE do Arduino.
Pressione o botão para iniciar o jogo. O personagem começará a correr na parte inferior da tela.
Aperte o botão para pular os obstáculos. Se o personagem colidir com um obstáculo, o jogo termina.
Explicação do Código
O jogo usa uma matriz de caracteres para simular o terreno e o personagem. A cada ciclo, o terreno "anda" para a esquerda, e o jogador precisa apertar o botão no momento certo para fazer o personagem pular.

Personagem: Representado por sprites que alternam entre correr e pular.
Terreno: Gera blocos de obstáculos aleatoriamente no topo ou na parte inferior da tela.
Colisão: O jogo detecta colisões quando o personagem encontra um obstáculo e para o jogo.

**Licença**

Este projeto está licenciado sob a licença MIT. Veja o 
arquivo LICENSE para mais detalhes.

**Imagens e Capturas de Tela**

![arduino joguinho](https://github.com/user-attachments/assets/406cd622-e7a7-4d51-8695-4348b3689be3)




