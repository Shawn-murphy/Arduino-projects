int red= 13;
int green= 11;
int blue= 9;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  
  // put your setup code here, to run once:

}
void loop() { 
  // put your main code here, to run repeatedly:
digitalWrite(red,HIGH);
   digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
 delay(4000);

   digitalWrite(red,HIGH);
   digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
 delay(1000);

   digitalWrite(red,LOW);
   digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
 delay(7000);

}
