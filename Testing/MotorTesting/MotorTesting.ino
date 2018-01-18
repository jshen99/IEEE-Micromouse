#define AIN2 13
#define AIN1 12
#define BIN1 8
#define BIN2 7
#define PWNB 9
#define PWNA 10
#define STBY 9
  
void setup() { 
  pinMode(AIN2 , OUTPUT);
  pinMode(AIN1, OUTPUT);
  pinMode(BIN1,OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWNB, OUTPUT);
  pinMode(PWNA,OUTPUT);
  pinMode(STBY,OUTPUT);
  
}
void leftCCW(int strength){
  digitalWrite(AIN1,LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWNA ,strength);
  digitalWrite(STBY,HIGH);
  }
 void rightCCW(int strength){
  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWNB,strength);
  digitalWrite(STBY,HIGH);
 }
 void short_Brake(){
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, HIGH);
  digitalWrite(BIN1,HIGH);
  digitalWrite(BIN2, HIGH);
  digitalWrite(STBY,HIGH);
 }


void loop() {
  leftCCW(15);
  rightCCW(255);
}
