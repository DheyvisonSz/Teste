void setup()
{
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
}
void loop()
{
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  delay(5000);// Wait for 3000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
 delay(5000);// Wait for 3000 millisecond(s)
  digitalWrite(4, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(5, HIGH);
  delay(5000);// Wait for 3000 millisecond(s)
  digitalWrite(4, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(5, LOW);
 delay(5000);// Wait for 3000 millisecond(s)
  
  
}