
void setup() {
  pinMode(13, INPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  if(digitalRead(13) == HIGH){
    Serial.println("Hello World");
    delay(3000);
  }
  else if(digitalRead(13) == LOW){
    Serial.println("Its 2023");
    delay(3000);
  }
  // put your main code here, to run repeatedly:

}
