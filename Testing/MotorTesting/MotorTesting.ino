#define AIN2 2
#define AIN1 1
#define BIN1 0
#define BIN2 4
#define PWNB 15
#define PWNA 16
#define STBY 3

 /*A port are for left motor and B pins are for right motor*/
  
void setup() { 
  Serial.begin(9600);
  pinMode(AIN2 , OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWNB, OUTPUT);
  pinMode(PWNA,OUTPUT);
  pinMode(STBY,OUTPUT);
  
}


void leftCCW(int strength) //method to test left motor for CCW direction
  {
    digitalWrite(AIN1,LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWNA ,strength);
  digitalWrite(STBY,HIGH);
  }
  
 void rightCCW(int strength) //method to test right motor for CCW direction
 {            
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWNB,strength);
  digitalWrite(STBY,HIGH);
 }
 
 void short_Brake()  //method to test short brake of both motors
 { 
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2, HIGH);
  digitalWrite(STBY,HIGH);
 }


void loop() {
  Serial.println("Starting");
  leftCCW(150);
  rightCCW(0);
  delay(2000);
}
