int redPIN = 10;
int whitePIN = 8;
int yellowPIN = 6;
int timeunit = 200;
int arr[2][5] = {{4},{1,0,1,0,1}};

void setup() {
  // put your setup code here, to run once:
pinMode(redPIN,OUTPUT);
pinMode(whitePIN,OUTPUT);
pinMode(yellowPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//onNoff(0);
showOFF(arr);
}
void onNoff(int x)
{
digitalWrite(redPIN,HIGH);
digitalWrite(whitePIN,HIGH);
digitalWrite(yellowPIN,HIGH);
delay(x>0?timeunit:timeunit*3);
digitalWrite(redPIN,LOW);
digitalWrite(whitePIN,LOW);
digitalWrite(yellowPIN,LOW);
delay(timeunit);
}
void showOFF(int arr[2][5]){
for(int i = 0; i < arr[0][0];i++){
  onNoff(arr[1][i]);
}
}

int *letterMorse(char letter){
switch(letter) 
{
  case 'a':
  return {{2},{1,0}};
  case 'b':
  return {{4}, {0,1,1,1}};
  case 'c':
  return{{4}, {0,1,0,1}};
  case ' d':
  return{{3}, {0,1,1}};
  case 'e':
  return{{1}, {1}};
  case 'f':
  return{{4}, {1,1,0,1}};
  case 'g':
  return{{3}, {0,0,1}};
  case 'h':
  return{{4}, {1,1,1,1}};
  case 'i':
  return{{2}, {1,1}};
  case 'j':
  return{{4}, {1,0,0,0}};
  case 'k':
  return{{3}, {0,1,0}};
  case 'l':
  return{{4}, {1,0,1,1}};
  case 'm':
  return{{2}, {0,0}};
  case 'n':
  return{{2}, {0,1}};
  case 'o':
  return{{3}, {0,0,0}};
  case 'p':
  return{{4}, {1,0,0,1}};
  case 'q':
  return{{4}, {0,0,1,0}};
  case 'r':
  return{{3}, {1,0,1}};
  case 's':
  return{{3}, {1,1,1}};
  case 't':
  return{{1}, {0}};
  case 'u':
  return{{3}, {1,1,0}};
  case 'v':
  return{{4}, {1,1,1,0}};
  case 'w':
  return{{3}, {1,0,0}};
}
}

void wordDisplay(char* str, int len){
for(int i = 0;i < len; i++){
showOFF(letterMorse(str[i]));
}
}