
int led= 2;
int sensor=A0;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(sensor,INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int value= analogRead(sensor);
  if (value <=20){
    digitalWrite(led,HIGH);
    
  }
    else{
    digitalWrite(led,LOW);
    
      }
  // put your main code here, to run repeatedly:

}
