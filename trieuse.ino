// Pins du stepper
const int dirPin1  = 2;
const int stepPin1 = 3;
const int dirPin2  = 4;
const int stepPin2 = 5;
const int dirPin3  = 6;
const int stepPin3 = 7;
const int dirPin4  = 8;
const int stepPin4 = 9;
const int dirPin5  = 10;
const int stepPin5 = 11;
const int dirPin6  = 12;
const int stepPin6 = 13;
const int dirPin7  = 14;
const int stepPin7 = 15;
const int dirPin8  = 16;
const int stepPin8 = 17;

const int iniPin = A0;


// Boutons


int currentAngle = 0;
int angle = 0;
float stepPerAngle = 1.8; // full step = 1.8
int   numstep;

void setup() {
 Serial.begin(9600);
 pinMode(iniPin,INPUT);
 pinMode(A2,OUTPUT);
 pinMode(A3,OUTPUT);
 pinMode(21,OUTPUT);
 pinMode(stepPin1,OUTPUT);
 pinMode(dirPin1,OUTPUT);
 pinMode(stepPin2,OUTPUT);
 pinMode(dirPin2,OUTPUT);
 pinMode(stepPin3,OUTPUT);
 pinMode(dirPin3,OUTPUT);
 pinMode(stepPin4,OUTPUT);
 pinMode(dirPin4,OUTPUT);
 pinMode(stepPin5,OUTPUT);
 pinMode(dirPin5,OUTPUT);
 pinMode(stepPin6,OUTPUT);
 pinMode(dirPin6,OUTPUT);
 pinMode(stepPin7,OUTPUT);
 pinMode(dirPin7,OUTPUT);
 pinMode(stepPin8,OUTPUT);
 pinMode(dirPin8,OUTPUT);

digitalWrite(A2,LOW);
digitalWrite(A3,HIGH);
}
void loop() {
      Serial.println(analogRead(iniPin));
      if (analogRead(iniPin)<200){
        delay(1000);
        rot_stepper2();
        delay(1000);
        rot_stepper3();}
   
//
//   if( currentAngle != angle ){
//
//       if( currentAngle < angle){
//           digitalWrite(dirPin,HIGH);
//            n = angle - currentAngle;
//           numstep = n / stepPerAngle;
//       }
//       else if( currentAngle > angle){
//           digitalWrite(dirPin,LOW);
//           n = currentAngle - angle;
//           if( angle == 0){
//              n =currentAngle;
//           }
//           numstep = n / stepPerAngle;
//       }
//
//       for(int x = 0; x < numstep; x++) {
//          digitalWrite(stepPin,HIGH);
//          delayMicroseconds(1000);
//          digitalWrite(stepPin,LOW);
//          delayMicroseconds(1000);
//       }
//
//       currentAngle = angle;
//   }

  

}

void rot_stepper1(){
  digitalWrite(dirPin1,HIGH);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin1,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin1,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin1,LOW);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin1,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin1,LOW);
          delayMicroseconds(4000);
          
       }
  
}

void rot_stepper2(){
  digitalWrite(dirPin2,LOW);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin2,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin2,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin2,HIGH);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin2,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin2,LOW);
          delayMicroseconds(4000);
          
       }
  
}

void rot_stepper3(){
  digitalWrite(dirPin3,LOW);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin3,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin3,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin3,HIGH);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin3,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin3,LOW);
          delayMicroseconds(4000);
          
       }
  
}

void rot_stepper4(){
  digitalWrite(dirPin4,HIGH);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin4,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin4,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin4,LOW);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin4,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin4,LOW);
          delayMicroseconds(4000);
          
       }
  
}

void rot_stepper5(){
  digitalWrite(dirPin5,HIGH);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin5,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin5,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin5,LOW);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin5,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin5,LOW);
          delayMicroseconds(4000);
          
       }
  
}

void rot_stepper6(){
  digitalWrite(dirPin6,HIGH);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin6,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin6,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin6,LOW);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin6,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin6,LOW);
          delayMicroseconds(4000);
          
       }
  
}

void rot_stepper7(){
  digitalWrite(dirPin7,HIGH);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin7,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin7,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin7,LOW);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin7,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin7,LOW);
          delayMicroseconds(4000);
          
       }
  
}

void rot_stepper8(){
  digitalWrite(dirPin8,HIGH);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin8,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin8,LOW);
          delayMicroseconds(4000);
          
       }
       
   delay(2000);
   digitalWrite(dirPin8,LOW);
       
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin8,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin8,LOW);
          delayMicroseconds(4000);
          
       }
  
}
