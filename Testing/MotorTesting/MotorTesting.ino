/* We define front back left and right from the persepective where the motor controllers are farthest away from you
Black wheels are in the back White wheels are in the front*/

//Motor controller Right
#define RFAIN2 9
#define RFAIN1 10
#define RBBIN1 11
#define RBBIN2 12
#define RPWNB 19
#define RPWNA 18
#define RSTBY 17

//Motor Controllers Left
#define LFAIN2 2
#define LFAIN1 1
#define LBBIN1 0
#define LBBIN2 4
#define LPWNB 16
#define LPWNA 15
#define LSTBY 3

 /*A port are for left motor and B pins are for right motor*/
  
void setup() { 
  Serial.begin(9600);
  pinMode(RFAIN2 , OUTPUT);
  pinMode(RFAIN1, OUTPUT);
  pinMode(RBBIN1,OUTPUT);
  pinMode(RBBIN2, OUTPUT);
  pinMode(RPWNB, OUTPUT);
  pinMode(RPWNA,OUTPUT);
  pinMode(RSTBY,OUTPUT);
  pinMode(LFAIN2 , OUTPUT);
  pinMode(LFAIN1, OUTPUT);
  pinMode(LBBIN1,OUTPUT);
  pinMode(LBBIN2, OUTPUT);
  pinMode(LPWNB, OUTPUT);
  pinMode(LPWNA,OUTPUT);
  pinMode(LSTBY,OUTPUT);
  
}

//This method only acts on the left motor controller and left motors (front and back)
void leftCCW(int strength) //method to test left motors for CCW direction
  {
    digitalWrite(LFAIN1,LOW);
    digitalWrite(LFAIN2, HIGH);
    analogWrite(LPWNA ,strength);
    digitalWrite(LBBIN1, LOW);
    digitalWrite(LBBIN2, HIGH);
    digitalWrite(LPWNB,strength);  
    digitalWrite(LSTBY,HIGH);
  }

 //This method only acts on the right motor controller 
 void rightCCW(int strength) //method to test right motors for CCW direction
 {          
    digitalWrite(RFAIN1,LOW);
    digitalWrite(RFAIN2, HIGH);
    analogWrite(RPWNA ,strength);
    digitalWrite(RBBIN1, LOW);
    digitalWrite(RBBIN2, HIGH);
    digitalWrite(RPWNB,strength);  
    digitalWrite(RSTBY,HIGH);
 
 }


void loop() {
  Serial.println("Starting");
  leftCCW(150);
  rightCCW(0);
  delay(2000);
}
