# Projeto Semáforo LED

# Descrição

Este projeto simula um semáforo utilizando LEDs. O semáforo possui as três luzes principais: vermelho, amarelo e verde, que alternam em um ciclo, imitando o funcionamento de um semáforo real.

# Descrição
Este projeto simula um semáforo utilizando LEDs. O semáforo possui as três luzes principais: vermelho, amarelo e verde, que alternam em um ciclo, imitando o funcionamento de um semáforo real.

# Componentes Necessários
° 1x LED vermelho
° 1x LED amarelo
° 1x LED verde
° 3x resistores de 220Ω
° 1x placa Arduino (por exemplo, Arduino Uno)
° Fios de conexão
° Placa de protótipo (breadboard)

# Esquema de Ligação

Conecte o LED vermelho ao pino 2 do Arduino, usando um resistor de 220Ω em série.
Conecte o LED amarelo ao pino 3 do Arduino, usando um resistor de 220Ω em série.
Conecte o LED verde ao pino 4 do Arduino, usando um resistor de 220Ω em série.
Conecte o GND do Arduino à placa de protótipo.

# Código

// Definindo os pinos dos LEDs
const int ledVermelho = 2;
const int ledAmarelo = 3;
const int ledVerde = 4;

void setup() {
  // Configurando os pinos como saída
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop() {
  // Luz vermelha
  digitalWrite(ledVermelho, HIGH);
  delay(5000); // Espera 5 segundos
  digitalWrite(ledVermelho, LOW);

  // Luz verde
  digitalWrite(ledVerde, HIGH);
  delay(5000); // Espera 5 segundos
  digitalWrite(ledVerde, LOW);

  // Luz amarela
  digitalWrite(ledAmarelo, HIGH);
  delay(2000); // Espera 2 segundos
  digitalWrite(ledAmarelo, LOW);
}

# Como Usar
Monte o circuito conforme o esquema de ligação.
Carregue o código no seu Arduino usando o Arduino IDE.
Execute o programa. O semáforo começará a alternar entre as luzes.

# Licença
Este projeto está licenciado sob a Licença MIT. Sinta-se à vontade para modificar e redistribuir, desde que mantenha a atribuição ao autor original.

# Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests.