int RED = 9;
int GREEN = 10;
int BLUE = 11;
void setup() {
  // put your setup code here, to run once:
pinMode(RED, OUTPUT);
pinMode(GREEN , OUTPUT);
pinMode(BLUE, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<255; i++){
    analogWrite(RED, i);
    analogWrite(GREEN , 254-i);
    analogWrite(BLUE , i);
    delay(50);
    
  }
//  analogWrite(RED, random(0,100));
//  analogWrite(GREEN, random(0,100));
//  analogWrite(BLUE, random(0,100));
//  delay(1000);
//
//  analogWrite(RED, 50);
//  analogWrite(GREEN, 0);
//  analogWrite(BLUE, 0);
//  delay(1000);
//  
//  analogWrite(RED, 0);
//  analogWrite(GREEN, 50);
//  analogWrite(BLUE, 0);
//  delay(1000);
//
//  analogWrite(RED, 0);
//  analogWrite(GREEN, 0);
//  analogWrite(BLUE, 50);
//  delay(1000);
//
//  analogWrite(RED, 50);
//  analogWrite(GREEN, 50);
//  analogWrite(BLUE, 0);
//  delay(1000);
//
//  analogWrite(RED, 50);
//  analogWrite(GREEN, 0);
//  analogWrite(BLUE, 50);
//  delay(1000);
//
//  analogWrite(RED, 0);
//  analogWrite(GREEN, 50);
//  analogWrite(BLUE, 50);
//  delay(1000);
//
//  analogWrite(RED, 50);
//  analogWrite(GREEN, 50);
//  analogWrite(BLUE, 50);
//  delay(1000);
}
