 int dada = 0;
 int redled = 1;
 void setup() {
  pinMode(redled,OUTPUT);
  pinMode(0, INPUT);
  // put your setup code here, to run once:

}

void loop() {
   int button = (digitalRead,dada);
 if (button == HIGH){ digitalWrite(redled, HIGH);
 }
 else{digitalWrite(redled, LOW);}
  // put your main code here, to run repeatedly:

}
