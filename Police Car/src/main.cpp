#include <Arduino.h>

// Definire pini pentru motoare
#define ENA 6   // Viteză Motor A
#define IN1 8   // Direcție Motor A
#define IN2 9   // Direcție Motor A

#define ENB 5   // Viteză Motor B
#define IN3 3   // Direcție Motor B
#define IN4 4   // Direcție Motor B

void setup() {
  // Setare pini ca OUTPUT
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // Pornire motoare în direcția înainte
  digitalWrite(IN1, LOW); // Motor A înainte
  digitalWrite(IN2, HIGH);

  digitalWrite(IN3, HIGH); // Motor B înainte
  digitalWrite(IN4, LOW);

  // Setare viteză maximă pentru ambele motoare
analogWrite(ENA, 255); // Motor A viteză redusă
analogWrite(ENB, 255); // Motor B viteză redusă

}

void loop() {
  // Motoarele funcționează constant înainte
}