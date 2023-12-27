const int dpin = 8;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
    pinMode(dpin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(dpin) == LOW){
    Serial.println("0");
  }
  else if(digitalRead(dpin) == HIGH){
    Serial.println("1");
  }
}
