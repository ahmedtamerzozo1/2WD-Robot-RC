// C++ code
//
#define ena 10
#define iN1 9
#define iN2 8
#define enb 11
#define iN3 12
#define iN4 13

int reading;

void setup() {

Serial.begin(9600);  
  pinMode(ena, OUTPUT);
  pinMode(iN1, OUTPUT);
  pinMode(iN2, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(iN3, OUTPUT);
  pinMode(iN4, OUTPUT);
  
}

void loop(){
  if(Serial.available()>0){
    reading=Serial.read();
    switch(reading){ 
      case'1':
      analogWrite(ena,150);
      analogWrite(enb,150);
      digitalWrite(iN1,1);
      digitalWrite(iN2,0);
      digitalWrite(iN3,0);
      digitalWrite(iN4,1);
      break;
      case'2':
      analogWrite(ena,150);
      analogWrite(enb,150);
      digitalWrite(iN1,0);
      digitalWrite(iN2,1);
      digitalWrite(iN3,1);
      digitalWrite(iN4,0);
      break;
      case'3':
      analogWrite(ena,150);
      analogWrite(enb,0);
      digitalWrite(iN1,1);
      digitalWrite(iN2,0);
      digitalWrite(iN3,0);
      digitalWrite(iN4,0);
      break;
      case'4':
      analogWrite(ena,0);
      analogWrite(enb,150);
      digitalWrite(iN1,0);
      digitalWrite(iN2,0);
      digitalWrite(iN3,0);
      digitalWrite(iN4,1);
      break;
      case's':
      analogWrite(ena,0);
      analogWrite(enb,0);
      digitalWrite(iN1,0);
      digitalWrite(iN2,0);
      digitalWrite(iN3,0);
      digitalWrite(iN4,0);
      break;
}
  }
}