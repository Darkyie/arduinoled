void setup() 
{
    pinMode(7, OUTPUT);
    pinMode(10, OUTPUT);
}

void loop() 
{
    digitalWrite(7, HIGH);
    delay(2000);             
    digitalWrite(7, LOW);   
    delay(2000);
    digitalWrite(10, HIGH);
    delay(2000);             
    digitalWrite(10, LOW);   
    delay(2000);                 
    digitalWrite(7, HIGH);           
    digitalWrite(10, HIGH);
    delay(4000);       
    digitalWrite(10, LOW);    
    digitalWrite(7, LOW);
    delay(4000);                  
}
