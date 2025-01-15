const int ledAzul = 4;
const int ledVerde = 3;
const int ledVermelho = 2;
const int botaoAzul = 11;
const int botaoVerde = 12;
const int botaoVermelho = 13;
int estadobotaoAzul;
int estadobotaoVerde;
int estadobotaoVermelho;

void setup() {
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(botaoAzul, INPUT);
  pinMode(botaoVerde, INPUT);
  pinMode(botaoVermelho, INPUT);
}

void loop() {
  estadobotaoAzul = digitalRead(botaoAzul);
  estadobotaoVerde = digitalRead(botaoVerde);
  estadobotaoVermelho = digitalRead(botaoVermelho);

  if (estadobotaoAzul == HIGH) {
    digitalWrite(ledAzul, HIGH);
  } else {
    digitalWrite(ledAzul, LOW);
  }
  if (estadobotaoVerde == HIGH) {
    digitalWrite(ledVerde, HIGH);
  } else {
    digitalWrite(ledVerde, LOW);
  }
  if (estadobotaoVermelho == HIGH) {
    digitalWrite(ledVermelho, HIGH);
  } else {
    digitalWrite(ledVermelho, LOW);
  }
}
