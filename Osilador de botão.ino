
int valor = 0;
  
 
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  valor = digitalRead(2);
  if(valor == 1)  
    
  {
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(1000); 
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(1000); 
}
  else
{
 digitalWrite(13, HIGH);
 digitalWrite(12, HIGH);
    
    delay(1000);
 }
}