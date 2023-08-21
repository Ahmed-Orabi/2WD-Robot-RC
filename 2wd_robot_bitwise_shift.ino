#define ena 10
#define enb 9
#define in1 5
#define in2 6
#define in3 7
#define in4 8
byte pins[] = {10,9,6,5,7,8};
byte FSB[] = {
  0b110110,
  0b000000,
  0b111001,
};
void setup()
{
  for(byte i = 5;i<=10;i++)
  {
  pinMode(pins[i], OUTPUT);
  }
}
void loop()
{
  for(byte i = 0;i<=2;i++)
  {
    for(byte j = 0;j<=5;j++)
    {
      digitalWrite(pins[j], FSB[i]&32>>j);
    }
    if(i == 0 ||i == 2)delay(1000);
    if(i == 1)delay(500);
  }
}