 #include <Servo.h>

 Servo servovertical;

 int servov = 0;
 int servovLimitHigh = 160;
 int servovLimitLow = 20;

 Servo servohorizontal;

 int servohor = 0;
 int servohorLimitHigh = 160;
 int servohorLimitLow = 20;

 int ldrtopright = 0;
 int ldrtopleft = 1;
 int ldrbottomright= 2;
 int ldrbottomleft = 3;

void setup() {
  // put your setup code here, to run once:
  servovertical.attach(9);
  servovertical.write(0);
  servohorizontal.attach(10);
  servohorizontal.write(0);
   pinMode(ldrtopright,INPUT);
pinMode(ldrtopleft,INPUT);
pinMode(ldrbottomright,INPUT);
pinMode(ldrbottomleft,INPUT);

}

void loop() {
  servov = servovertical.read();
  servohor = servohorizontal.read();
  //recording analog values from each ldr
  
int valuetopr =  analogRead(ldrtopright);
 int valuetopl = analogRead(ldrtopleft);
 int valuebotr = analogRead(ldrbottomright);
 int valuebotl = analogRead(ldrbottomleft);

 int avgtop =( valuetopr +  valuetopl )/2;
 int avgbot =( valuebotr +  valuebotl )/2;
 int avgleft =( valuetopl +  valuebotl )/2;
 int avgright =( valuetopr +  valuebotr )/2;

 if (avgtop > avgbot)
 {
  servovertical.write(90);

  if (servov > servovLimitHigh )
  {
    servov = servovLimitHigh ;
    }
  
  } 
 else if (avgbot > avgtop )
 {
  servovertical.write(-90);
  
  if (servov > servovLimitHigh )
  {
    servov = servovLimitHigh ;
    }
  
  }

   if (avgright > avgleft)
 {
  servohorizontal.write(90);

  if (servohor > servovLimitHigh )
  {
    servohor = servohorLimitHigh ;
    }
  } 
 else if (avgright < avgleft )
 {
  servovertical.write(-90);
  
  if (servohor > servohorLimitHigh )
  {
    servohor = servohorLimitHigh ;
    }
  }
  


 
 
 
 
 
 
 

  
  


  
  // put your main code here, to run repeatedly:

}
