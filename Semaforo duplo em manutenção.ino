
int valordoterminaldois = 0;

void setup(){
 pinMode(8, OUTPUT);
 pinMode(2, OUTPUT);
 pinMode(13, OUTPUT);
 pinMode(4, OUTPUT);
 pinMode(1, OUTPUT);
 pinMode(7, OUTPUT);
 
  pinMode(9, INPUT);
}




void loop(){
 
  valordoterminaldois = digitalRead(2);
 
  if(valordoterminaldois == 0 ) {
    digitalWrite(2, HIGH);
    digitalWrite(1, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
    digitalWrite(1, LOW);
    delay(1000);
  }
  else{
digitalWrite(8, HIGH);
digitalWrite(2,LOW);
digitalWrite(2, LOW); 
digitalWrite(4, HIGH);
digitalWrite(1,LOW);
digitalWrite(1, LOW); 
 
digitalWrite(13, LOW);
digitalWrite(7, LOW);
 delay(1000);
digitalWrite(8, LOW);
digitalWrite(2, LOW);  
digitalWrite(13, HIGH); 
digitalWrite(4, LOW);
digitalWrite(1, LOW);  
digitalWrite(7, HIGH);  
  delay(1000);
digitalWrite(8, LOW);
digitalWrite(2, HIGH);  
digitalWrite(13, LOW);
digitalWrite(4, LOW);
digitalWrite(1, HIGH);  
digitalWrite(7, LOW);
  delay(1000);
 
  }
 
 
 
}