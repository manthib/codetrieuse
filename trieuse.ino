int aspect=1;

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
int iniPin = A0;

// Angle du premier toboggan (stepper 4)
int currentAngle = 0;
int angle = 0;
float stepPerAngle = 1.8; // full step = 1.8
int   numstep;

// Angle du deuxième toboggan (stepper 6)
int currentAngle2 = 0;
int angle2 = 0;
float stepPerAngle2 = 1.8; // full step = 1.8
int   numstep2;

// Angle du troisième toboggan (stepper 8)
int currentAngle3 = 0;
int angle3 = 0;
float stepPerAngle3 = 1.8; // full step = 1.8
int   numstep3;

void setup(){
 Serial.begin(9600);
 pinMode(iniPin,INPUT);
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
}

void loop() {
     switch(aspect){

      case 1 :
        if (analogRead(iniPin)<200){
        angle=180,4;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 2 :
        if (analogRead(iniPin)<200){
        angle=36,8;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 3 :
        if (analogRead(iniPin)<200){
        angle=55,2;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 4 :
        if (analogRead(iniPin)<200){
        angle=73,6;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 5 :
        if (analogRead(iniPin)<200){
        angle=92;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 6 :
        if (analogRead(iniPin)<200){
        angle=110,4;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 7 :
        if (analogRead(iniPin)<200){
        angle=128,8;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 8 :
        if (analogRead(iniPin)<200){
        angle=147,2;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 9 :
        if (analogRead(iniPin)<200){
        angle=165,6;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 10 :
        if (analogRead(iniPin)<200){
        angle=184;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 11 :
        if (analogRead(iniPin)<200){
        angle=202,4;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 12 :
        if (analogRead(iniPin)<200){
        angle=220,8;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 13 :
        if (analogRead(iniPin)<200){
        angle=239,2;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 14 :
        if (analogRead(iniPin)<200){
        angle=257,6;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 15 :
        if (analogRead(iniPin)<200){
        angle=276;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 16 :
        if (analogRead(iniPin)<200){
        angle=294,4;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 17 :
        if (analogRead(iniPin)<200){
        angle=312,8;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 18 :
        if (analogRead(iniPin)<200){
        angle=331,2;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 19 :
        if (analogRead(iniPin)<200){
        angle=350;
        rot_stepper2open();
        rot_stepper4();
        rot_stepper3();
        rot_stepper2close();
        }
        break;

      case 20 :
        if (analogRead(iniPin)<200){
        angle2=18,4;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 21 :
        if (analogRead(iniPin)<200){
        angle2=36,8;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 22 :
        if (analogRead(iniPin)<200){
        angle2=55,2;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 23 :
        if (analogRead(iniPin)<200){
        angle2=73,6;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 24 :
        if (analogRead(iniPin)<200){
        angle2=92;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 25 :
        if (analogRead(iniPin)<200){
        angle2=110,4;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 26 :
        if (analogRead(iniPin)<200){
        angle2=128,8;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 27 :
        if (analogRead(iniPin)<200){
        angle2=147,2;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 28 :
        if (analogRead(iniPin)<200){
        angle2=165,6;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 29 :
        if (analogRead(iniPin)<200){
        angle2=184;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 30 :
        if (analogRead(iniPin)<200){
        angle2=202,4;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 31 :
        if (analogRead(iniPin)<200){
        angle2=220,8;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 32 :
        if (analogRead(iniPin)<200){
        angle2=239,2;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 33 :
        if (analogRead(iniPin)<200){
        angle2=257,6;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 34 :
        if (analogRead(iniPin)<200){
        angle2=276;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 35 :
        if (analogRead(iniPin)<200){
        angle2=294,4;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 36 :
        if (analogRead(iniPin)<200){
        angle2=312,8;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 37 :
        if (analogRead(iniPin)<200){
        angle2=331,2;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 38 :
        if (analogRead(iniPin)<200){
        angle2=350;
        rot_stepper2open();
        rot_stepper6();
        rot_stepper5();
        rot_stepper2close();
        }
        break;

      case 39 :
        if (analogRead(iniPin)<200){
        angle3=18,4;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 40 :
        if (analogRead(iniPin)<200){
        angle3=36,8;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 41 :
        if (analogRead(iniPin)<200){
        angle3=55,2;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 42 :
        if (analogRead(iniPin)<200){
        angle3=73,6;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 43 :
        if (analogRead(iniPin)<200){
        angle3=92;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 44 :
        if (analogRead(iniPin)<200){
        angle3=110,4;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 45 :
        if (analogRead(iniPin)<200){
        angle3=128,8;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 46 :
        if (analogRead(iniPin)<200){
        angle3=147,2;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 47 :
        if (analogRead(iniPin)<200){
        angle3=165,6;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 48 :
        if (analogRead(iniPin)<200){
        angle3=184;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 49 :
        if (analogRead(iniPin)<200){
        angle3=202,4;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 50 :
        if (analogRead(iniPin)<200){
        angle3=220,8;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 51 :
        if (analogRead(iniPin)<200){
        angle3=239,2;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 52 :
        if (analogRead(iniPin)<200){
        angle3=257,6;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 53 :
        if (analogRead(iniPin)<200){
        angle3=276;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 54 :
        if (analogRead(iniPin)<200){
        angle3=294,4;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 55 :
        if (analogRead(iniPin)<200){
        angle3=312,8;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 56 :
        if (analogRead(iniPin)<200){
        angle3=331,2;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 57 :
        if (analogRead(iniPin)<200){
        angle3=350;
        rot_stepper2open();
        rot_stepper8();
        rot_stepper7();
        rot_stepper2close();
        }
        break;

      case 58 :
        if (analogRead(iniPin)<200){
        rot_stepper2open();
        delay(500);
        rot_stepper2close();
                  }
          }
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

void rot_stepper2open(){

  digitalWrite(dirPin2,HIGH);
  for(int x = 0; x < 250; x++) {
          digitalWrite(stepPin2,HIGH);
          delayMicroseconds(2500);
          digitalWrite(stepPin2,LOW);
          delayMicroseconds(2500);

       }
}

void rot_stepper2close(){

  digitalWrite(dirPin2,LOW);
  for(int x = 0; x < 250; x++) {
          digitalWrite(stepPin2,HIGH);
          delayMicroseconds(2500);
          digitalWrite(stepPin2,LOW);
          delayMicroseconds(2500);

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
        int a;
  if( currentAngle != angle ){

        if( currentAngle < angle){
            digitalWrite(dirPin4,HIGH);
             a = angle - currentAngle;
            numstep = a / stepPerAngle;
        }
        else if( currentAngle > angle){
            digitalWrite(dirPin4,LOW);
            a = currentAngle - angle;
            if( angle == 0){
               a = currentAngle;
            }
            numstep = a / stepPerAngle;
        }

        for(int x = 0; x < numstep; x++) {
           digitalWrite(stepPin4,HIGH);
           delayMicroseconds(4000);
           digitalWrite(stepPin4,LOW);
           delayMicroseconds(4000);
        }

        currentAngle = angle;
    }

}

void rot_stepper5(){
  digitalWrite(dirPin5,LOW);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin5,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin5,LOW);
          delayMicroseconds(4000);

       }

   delay(2000);
   digitalWrite(dirPin5,HIGH);

  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin5,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin5,LOW);
          delayMicroseconds(4000);

       }
delay(2000);

}

void rot_stepper6(){
        int b;
  if( currentAngle2 != angle2 ){

        if( currentAngle2 < angle2){
            digitalWrite(dirPin6,HIGH);
             b = angle2 - currentAngle2;
            numstep2 = b / stepPerAngle2;
        }
        else if( currentAngle2 > angle2){
            digitalWrite(dirPin6,LOW);
            b = currentAngle2 - angle2;
            if( angle2 == 0){
               b = currentAngle2;
            }
            numstep2 = b / stepPerAngle2;
        }

        for(int x = 0; x < numstep2; x++) {
           digitalWrite(stepPin6,HIGH);
           delayMicroseconds(4000);
           digitalWrite(stepPin6,LOW);
           delayMicroseconds(4000);
        }

        currentAngle2 = angle2;
    }
}

void rot_stepper7(){
  digitalWrite(dirPin7,LOW);
  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin7,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin7,LOW);
          delayMicroseconds(4000);

       }

   delay(2000);
   digitalWrite(dirPin7,HIGH);

  for(int x = 0; x < 50; x++) {
          digitalWrite(stepPin7,HIGH);
          delayMicroseconds(4000);
          digitalWrite(stepPin7,LOW);
          delayMicroseconds(4000);

       }
delay(2000);

}

void rot_stepper8(){
        int c;
  if( currentAngle3 != angle3 ){

        if( currentAngle3 < angle3){
            digitalWrite(dirPin8,HIGH);
             c = angle3 - currentAngle3;
            numstep3 = c / stepPerAngle3;
        }
        else if( currentAngle3 > angle3){
            digitalWrite(dirPin8,LOW);
            c = currentAngle3 - angle3;
            if( angle3 == 0){
               c = currentAngle3;
            }
            numstep3 = c / stepPerAngle3;
        }

        for(int x = 0; x < numstep3; x++) {
           digitalWrite(stepPin8,HIGH);
           delayMicroseconds(4000);
           digitalWrite(stepPin8,LOW);
           delayMicroseconds(4000);
        }

        currentAngle3 = angle3;
    }
}
