

#define pir 13
#define led1 2
#define led2 7





void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(pir,INPUT);
   pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool x= digitalRead(pir);
  Serial.print("Motion Status= ");
  Serial.print(x);
  

  if(x==1){
  digitalWrite(led1,HIGH);
  }
  else{
  digitalWrite(led2,HIGH);
  } 
}
