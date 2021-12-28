void setup() {
  Serial.begin(9600);
  pinMode(3,INPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  int tilt = digitalRead(3);

  if(tilt ==HIGH){
    Serial.println("Down");
    if (Serial.read()=='A')
    {
      digitalWrite(5,HIGH);
      //delay(500);
    }
    else
    {
      digitalWrite(5,LOW);
    }
    //delay(100);
  }
  if(tilt == LOW){
    digitalWrite(5,LOW);
    Serial.println("Up");
    //delay(100);
  }

}
