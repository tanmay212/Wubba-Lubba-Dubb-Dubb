
#include<SoftwareSerial.h>

SoftwareSerial bt(8,9);
void setup() {
Serial.begin(9600);
 bt.begin(9600);
}
void loop() {
  pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
      pinMode(4, INPUT_PULLUP);
        pinMode(5, INPUT_PULLUP);
          pinMode(6, INPUT_PULLUP);

   int L1= digitalRead(2);
    //Serial.print("led1=");
      //Serial.println(L1); 
     int L2=digitalRead(3);
      //Serial.print("led2=");
        //Serial.println(L2);
          int L3=digitalRead(4);
           //Serial.print("led3=");
            //Serial.println(L3);
            int L4=digitalRead(5);
           // Serial.print("led4=");
             // Serial.println(L4);
                 int L5=digitalRead(6);
               
  delay(1000); 

  if(digitalRead(2))
  {
    bt.println("LED 1 IS INACTIVE");
  }

    if(digitalRead(3))
  {
    bt.println("LED 2 IS INACTIVE");
  }

    if(digitalRead(4))
  {
    bt.println("LED 3 IS INACTIVE");
  }

    if(digitalRead(5))
  {
    bt.println("LED 4 IS INACTIVE");
  }

    if(digitalRead(6))
  {
    bt.println("LED 5 IS INACTIVE");
  
} 

String str1,str2,str3,str4,str5;
String Totalstr;
str1=L1;
str2=L2;
str3=L3;
str4=L4;
str5=L5;


Serial.println(Totalstr);
delay(200);
}
