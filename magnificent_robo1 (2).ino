const int button1 = 2;
const int button2 = 3;
const int button3 = 4;

const int led1 = 10;
const int led2 = 11;
const int led3 = 12;

void setup() {
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  digitalWrite(led1, digitalRead(button1));
  digitalWrite(led2, digitalRead(button2));
  digitalWrite(led3, digitalRead(button3));
}
