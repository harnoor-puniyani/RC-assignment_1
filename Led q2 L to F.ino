//LED q2 L to R

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
 
  
}

void loop()
{
  digitalWrite(6, HIGH);
  delay(500);
   digitalWrite(6, LOW);
  delay(500);
 
  
  digitalWrite(7, HIGH);
  delay(500);
   digitalWrite(7, LOW);
  delay(500);
 
  digitalWrite(9, HIGH);delay(500);
   digitalWrite(9, LOW); 
  delay(500);
   digitalWrite(13, HIGH);
  delay(500);
   digitalWrite(13, LOW);
  delay(500);
   digitalWrite(12, HIGH);
  delay(500);
   digitalWrite(12, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  delay(500);
   digitalWrite(11, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(500);
   digitalWrite(10, LOW);
  delay(500);
   digitalWrite(8, HIGH);
    delay(500);
   digitalWrite(8, LOW);
 delay(500);
}