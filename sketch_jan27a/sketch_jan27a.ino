#include <Servo.h> // Chama a biblioteca servo

// Definição dos pinos
const int TRIG_PIN = 9;
const int ECHO_PIN = 10;
const int SERVO_PIN = 6;

// Configurações de distância e ângulos
const int DISTANCIA_GATILHO = 10; // Distância em cm para ativar
const int ANGULO_REPOUSO = 0;      // Posição inicial
const int ANGULO_ATIVADO = 90;     // Posição quando detecta algo

Servo meuServo; // Nome do servo

void setup() {
  Serial.begin(9600); // Liga a conexão serial
  
  pinMode(TRIG_PIN, OUTPUT); // Define o pino como saída
  pinMode(ECHO_PIN, INPUT); // Define o pino como entrada
  
  meuServo.attach(SERVO_PIN); // Define o pino do servo para ser usado
  meuServo.write(ANGULO_REPOUSO); // Começa na posição inicial
}

void loop() {
  // Para ler o sensor
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Calcula a distância
  long duracao = pulseIn(ECHO_PIN, HIGH);
  int distancia = duracao * 0.034 / 2;

  // Mostra a distância no Monitor Serial 
  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.println(" cm");

  // Lógica do movimento
  if (distancia > 0 && distancia < DISTANCIA_GATILHO) {
    // Se algo estiver perto, move o servo
    meuServo.write(ANGULO_ATIVADO);
  } else {
    // Se não tiver nada, volta para o repouso
    meuServo.write(ANGULO_REPOUSO);
  }

  delay(100); // Pequena pausa para estabilidade
}