#define LIGHT 2
#define FAN 4

void setup() {
  pinMode(LIGHT, OUTPUT);
  pinMode(FAN, OUTPUT);

  digitalWrite(LIGHT, LOW);
  digitalWrite(FAN, LOW);

  Serial.begin(115200);

  Serial.println("Smart Room Automation Started");
  Serial.println("Commands:");
  Serial.println("1 - Light ON");
  Serial.println("2 - Light OFF");
  Serial.println("3 - Fan ON");
  Serial.println("4 - Fan OFF");
}

void loop() {

  if (Serial.available()) {

    char c = Serial.read();

    if (c == '1') {
      digitalWrite(LIGHT, HIGH);
      Serial.println("Light ON");
    }

    else if (c == '2') {
      digitalWrite(LIGHT, LOW);
      Serial.println("Light OFF");
    }

    else if (c == '3') {
      digitalWrite(FAN, HIGH);
      Serial.println("Fan ON");
    }

    else if (c == '4') {
      digitalWrite(FAN, LOW);
      Serial.println("Fan OFF");
    }
  }
}