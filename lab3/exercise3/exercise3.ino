void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if (digitalRead(12) == HIGH) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
  delay(50);
}
