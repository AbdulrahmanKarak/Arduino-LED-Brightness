// C++ code
//
void setup()
{
  
}

void loop()
{
  for(int x =0 ; x<=255 ; x+=64)
  {
  analogWrite(3,x);
  delay(500);
  }
  for(int x =255 ; x>=0 ; x-=64)
  {
  analogWrite(3,x);
  delay(500);
  }
}