
#define pot A0
#define led 2
#define led2 8
#define led3 4
#define led4 7

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(pot,INPUT);
  pinMode(led,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int  x = analogRead(pot);
Serial.print("Pot Reading= ");
Serial.println(x);
  if(x==0){
    digitalWrite(led,HIGH);
  Serial.println("LED is ON");
  }
  else if(x>=1&&x<=250)
  {
    digitalWrite(led2,HIGH);
   Serial.println("LED2 is ON");
  }
  else if(x>=251&&x<=500)
  {
    digitalWrite(led3,HIGH);
   Serial.println("LED3 is ON");
  }
  else 
  {
    digitalWrite(led4,HIGH);
   Serial.println("LED4 is ON");
  }

}
