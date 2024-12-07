int redPIN = 10;
int whitePIN = 8;
int yellowPIN = 6;
int timeunit = 200;
int arr[2][5] = {{5},{1,0,1,0,1}};

void setup() {
  // put your setup code here, to run once:
  pinMode(redPIN,OUTPUT);
  pinMode(whitePIN,OUTPUT);
  pinMode(yellowPIN, OUTPUT);
  
  Serial.begin(9600);
}

/*char* testFunc(){
  return "test";
}*/

// work on printing values in aarray.
int* letterMorse(char letter){
  switch(letter) 
  {
    case 'a':
      static int aarray[3] = {2,1,0};
      return aarray;
    
    case 'b':
      static int barray[5] = {4,0,1,1,1};
      return barray;
    case 'c':
      static int carray[5] = {4,1,1,0,1};
      return carray;
    case 'd':
      static int darray[4] = {3,0,1,1};
      return darray;
    case 'e':
      static int earray[2] = {1,1};
      return earray;
    case 'f':
      static int farray[5] = {4,1,1,0,1};
      return farray;
    case 'g':
      static int garray[4] = {3,0,0,1};
      return garray;
    case 'h':
      static int harray[5] = {4,1,1,1,1};
      return garray;
    case 'i':
      static int iarray[3] = {2,1,1};
      return iarray;
    case 'j':
      static int jarray[5] = {4,1,0,0,0};
      return jarray;
    case 'k':
      static int karray[4] = {3,0,1,0};
      return karray;
    case 'l':
      static int larray[5] = {4,1,0,1,1};
      return larray;
    case 'm':
      static int marray[3] = {2,0,0};
      return marray;
    case 'n':
      static int narray[3] = {2,0,1};
      return narray;
    case 'o':
      static int oarray[4] = {3,0,0,0};
      return oarray;
    case 'p':
      static int parray[5] = {4,1,0,0,1};
      return parray;
    case 'q':
      static int qarray[5] = {4,0,0,1,0};
      return qarray;
    case 'r':
      static int rarray[4] = {3,1,0,1};
      return rarray;
    case 's':
      static int sarray[4] = {3,1,1,1};
      return sarray;
    case 't':
      static int tarray[2] = {1,0};
      return tarray;
    case 'u':
      static int uarray[4] = {3,1,1,0};
      return uarray;
    case 'v':
      static int varray[5] = {4,1,1,1,0};
      return varray;
    case 'w':
      static int warray[4] = {3,1,0,0};
      return warray; 
    case 'x':
      static int xarray[5] = {4,0,1,1,0};
      return xarray;
    case 'y':
      static int yarray[5] = {4,0,1,0,0};
      return yarray;
    case 'z':
      static int zarray[5] = {4,0,0,1,1};
      return zarray;
    case ' ':
      static int noarray[1] = {0};
      delay (timeunit*7);
      return noarray;
    case '0':
      static int zearray[6] = {5,0,0,0,0,0};
      return zearray;
    case '1':
      static int onearra[6] = {5,1,0,0,0,0};
      return onearra;
    case '2':
      static int two[6] = {5,1,1,0,0,0};
      return two;
    case '3':
      static int tree[6] = {5,1,1,1,0,0};
      return tree;
    case '4':
      static int ruof[6] = {5,1,1,1,1,0};
      return ruof;
    case '5':
      static int lima[6] = {5,1,1,1,1,1};
      return lima;
    case '6':
      static int pito[6] = {5,0,1,1,1,1};
      return pito;
    case '7':
      static int walo[6] = {5,0,0,1,1,1};
      return walo;
    case '8':
      static int ate[6] = {5,0,0,0,1,1};
      return ate;
    case '9':
      static int enin[6] = {5,0,0,0,0,1};
      return enin;
    case '.':
      static int period[7] = {6,1,0,1,0,1,0};
      return period;
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  //onNoff(0);
  //showOFF(arr);
  //Serial.println("loop");
  char array[] = ("string");
  wordDisplay(".", 1);
  delay(400);
  /*int *ptr = letterMorse('u');
  printf("%p\n",ptr);
  //Serial.print((int)sizeof(&ptr));
  for(int i = 1; i <= ptr[0] ; i++){
    Serial.print(ptr[i]);
  }*/
  //Serial.print();
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

void showOFF(int* ptr){
  for(int i = 1; i <= ptr[0];i++){
    onNoff(ptr[i]);
  }
}


void wordDisplay(char* str, int len){
  for(int i = 0;i < len; i++){
    letterMorse(str[i]);
    int *ptr = letterMorse(tolower(str[i]));
    showOFF(ptr);
  }
  //showOFF([{2},{1,0}]);
}

