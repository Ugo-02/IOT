# Projeto LEDs Piscantes

# Descrição
Este projeto controla dois LEDs que piscam em um padrão alternado. É uma boa introdução ao uso de LEDs e à programação básica com Arduino.

# Componentes Necessários
2x LEDs (qualquer cor)
2x resistores de 220Ω
1x placa Arduino (por exemplo, Arduino Uno)
Fios de conexão
Placa de protótipo (breadboard)

# Esquema de Ligação
Conecte o LED 1 ao pino 8 do Arduino, usando um resistor de 220Ω em série.
Conecte o LED 2 ao pino 9 do Arduino, usando um resistor de 220Ω em série.
Conecte o GND do Arduino à placa de protótipo.

# Código 

// Definindo os pinos dos LEDs
const int led1 = 8;
const int led2 = 9;

void setup() {
  // Configurando os pinos como saída
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Acende o LED 1 e apaga o LED 2
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(500); // Espera 500 milissegundos

  // Apaga o LED 1 e acende o LED 2
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(500); // Espera 500 milissegundos
}

# Como usar

Monte o circuito conforme o esquema de ligação.
Carregue o código no seu Arduino usando o Arduino IDE.
Execute o programa. Os LEDs começarão a piscar em um padrão alternado.

# Licença
Este projeto está licenciado sob a Licença MIT. Sinta-se à vontade para modificar e redistribuir, desde que mantenha a atribuição ao autor original.

# Contribuições
Contribuições são bem-vindas! Sinta-se à vontade para abrir issues ou pull requests.