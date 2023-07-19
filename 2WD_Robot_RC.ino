#define in1 8
#define in2 9
#define in3 10
#define in4 11
#define ena 5
#define enb 6
char option;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(in1, OUTPUT );
pinMode(in2, OUTPUT);
pinMode(in3, OUTPUT);
pinMode(in4, OUTPUT);
pinMode(ena, OUTPUT);
pinMode(enb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{
   option = Serial.read();

  switch (option) {
  case 'F':
analogWrite(ena, 255);
analogWrite(enb, 255);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);
  break;
  
  case 'B':
analogWrite(ena, 255);
analogWrite(enb, 255);
digitalWrite(in1, LOW);
digitalWrite(in2, HIGH);
digitalWrite(in3, LOW);
digitalWrite(in4, HIGH);  
  break;
  
  case 'R':
analogWrite(ena, 0);
analogWrite(enb, 255);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, HIGH);
digitalWrite(in4, LOW);  
  break;
  
  case 'L':
analogWrite(ena, 255);
analogWrite(enb, 0);
digitalWrite(in1, HIGH);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);  
  break;
  
  case 'S':
analogWrite(ena, 0);
analogWrite(enb, 0);
digitalWrite(in1, LOW);
digitalWrite(in2, LOW);
digitalWrite(in3, LOW);
digitalWrite(in4, LOW);  
  break;
  
  }
 }
}

