#define led 2
#define pb 8
#define led2 7
#define pb2 9
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pb,INPUT);
  pinMode(led2,OUTPUT);
  pinMode(pb2,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   bool x = digitalRead(pb);
   if(x==1){
     digitalWrite(led,HIGH);
      Serial.println("LED1 is ON");
   }
   else{
    digitalWrite(led,LOW);
      Serial.println("LED1 is OFF");
   }


  // put your main code here, to run repeatedly:
   bool y = digitalRead(pb2);
   if(y==1){
     digitalWrite(led2,HIGH);
      Serial.println("LED2 is ON"); 
     
   }
   else{
    digitalWrite(led2,LOW);
     Serial.println("LED2 is OFF");
   }
   
}
