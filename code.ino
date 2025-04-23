int sensor = 4;
int buzzer = 2;
int motor = 3;
void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(sensor,INPUT);
  pinMode(motor,OUTPUT);
  digitalWrite(motor,HIGH);
}
void loop() {
  int Status = digitalRead(sensor);
  Serial.println(Status);  
  if(Status == 0)
  {
   delay(3000);
    digitalWrite(buzzer,LOW);
    digitalWrite(motor,HIGH);
    delay(5000);
  }
  else
  {
    digitalWrite(buzzer,HIGH);
    digitalWrite(motor,LOW);    
    delay(1000);
  }
}
