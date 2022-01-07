// code to run Hunter - Soft Robot

#include <SoftwareSerial.h>
SoftwareSerial BT(0, 1); 
// BT(RX,TX)
// creates a "virtual" serial port/UART
// connect BT module TX to 0
// connect BT module RX to 1
// connect BT Vcc to 5V, GND to GND

void setup()
{
  // set digital pin to control as an output
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);

  // set the data rate for the SoftwareSerial port
  BT.begin(9600);

  // set the data rate for the Serial monitor
  Serial.begin(9600);
}

char a; // stores incoming character from other device
char b; // stores incoming character from other device
char c; // stores incoming character from other device
char d; // stores incoming character from other device

void loop()
{
  if (BT.available() || Serial.available())
  // if text arrived in from BT serial...
  // if text arrived in from arduino serial...
  {
    a=(BT.read());
    b = (Serial.read()); 
    if(a=='1' || b == '1')
    {
      limb1();
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);    
    }
    if(a=='2' || b == '2')
    {
      limb2();
    }
    if(a=='3' || b == '3')
    {
      limb3();
    }
    if(a=='4' || b == '4')
    {
      limb4();
    }
  }
}

void limb1()
{
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      delay(1000);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH); 
}

void limb2()
{
      digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
      delay(1000);
      digitalWrite(5,LOW);
      digitalWrite(6,HIGH); 
}

void limb3()
{
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      delay(1000);
      digitalWrite(7,LOW);
      digitalWrite(8,HIGH); 
}

void limb4()
{
      digitalWrite(9,HIGH);
      digitalWrite(10,LOW);
      delay(1000);
      digitalWrite(9,LOW);
      digitalWrite(10,HIGH); 
}

