const int ir1=10;
const int ir2=11;
const int ir3=9;
const int buzz1=3;
const int buzz2=4;
const int buzz3=5;
const int led=8;
int flag=1;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir1,INPUT);
 pinMode(ir2, INPUT);
 // pinMode(ir3, INPUT);
  pinMode(buzz1,OUTPUT);
  
 
}
void loop() {
  // put your main code here, to run repeatedly:
  
     room1(ir1,buzz1);
     room2(ir2,buzz1);
    //room3(ir3,buzz2);
  

}
void room1(int ir1,int buzz1)
{
  if(digitalRead(ir1)==0)
  {

    tone1();
    delay(500);
  }
} 
void room2(int ir2,int buzz1)
{
 if(digitalRead(ir2)==0)
  {
    tone1();
  delay(500);
  }
}
/*void room3(int ir3,int buzz1)
{
  if(digitalRead(ir3)==0)
  {

    tone1();
    delay(500);
  }
} */
void tone1()
{
  digitalWrite(buzz1,HIGH);
 
  delay(5000);
 
  digitalWrite(buzz1,LOW);
  delay(500);
 
}
