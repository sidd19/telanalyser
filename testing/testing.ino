#define linerelaypos 1
#define linerelayneg 2
#define powerpos 3
#define powerneg 4
#define ringrelaypos 5
#define ringrelayneg 6
#define dtmfrelaypos 7
#define dtmfrelayneg 8
#define tonerelaypos 9
#define tonerelayneg 10


#define dtmfbutton 12
#define ringbutton 13
#define recbutton 14

#define d0  12//output of dtmf module to uC 
#define d1  13// "
#define d2  14// "
#define d3  15// "


void setup() {
  pinMode(linerelaypos, OUTPUT);
  pinMode(linerelayneg, OUTPUT);
  pinMode(powerpos, OUTPUT);
  pinMode(powerneg, OUTPUT);
  pinMode(ringrelaypos, OUTPUT);
  pinMode(ringrelayneg, OUTPUT);
  pinMode(dtmfrelaypos, OUTPUT);
  pinMode(dtmfrelayneg, OUTPUT);
  pinMode(tonerelaypos, OUTPUT);
  pinMode(tonerelayneg, OUTPUT);
}

void loop() {
  pinMode(dtmfbutton, INPUT);
  pinMode(ringbutton, INPUT);
  pinMode(recbutton, INPUT);


  pinMode(d0, INPUT);
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
  pinMode(d3, INPUT);

  Serial.begin(9600);
  
}





int dialidbtest
{
  //for setting dial test or idp test
  int a = 1;
  if (a == 0)
  {
    //activate idp mode
  }
  if (a == 1)
  {

    digitalWrite(ringrelaypos, 1);
    digitalWrite(ringrelayneg, 1);
    digitalWrite(tonerelaypos, 1);
    digitalWrite(tonerelayneg, 1);


    //activate dial mode
    digitalWrite(dtmfrelaypos, 0);  //activate dtmf relay
    digitalWrite(dtmfrelayneg, 0);  //activate dtmf relay
    digitalWrite(powerneg, 0);  //activate power relay
    digitalWrite(powerpos, 0);  //activate power relay

    if ((d0 == 0) & (d1 == 0) & (d2 == 0) & (d3 == 1))
    {
      Serial.print("1"); //lcd write
    }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 0))
    {
      Serial.print("2"); //lcd write
    }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 1))
    {
      Serial.print("3"); //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 0))
    {
      Serial.print("4");  //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 1))
    {
      Serial.print("5");  //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 0))
    {
      Serial.print("6"); //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 1))
    {
      Serial.print("7");  //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 0))
    {
      Serial.print("8"); //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 1))
    {
      Serial.print("9"); //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 0))
    {
      Serial.print("1"); //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 1))
    {
      Serial.print("1"); //lcd write
    }

    if ((d0 == 1) & (d1 == 1) & (d2 == 0) & (d3 == 0))
    {
      Serial.print("1"); //lcd write
    }
    //lcd display
  }

int ringfunc()
{

  digitalWrite(dtmfrelayneg, 1);
  digitalWrite(dtmfrelaypos, 1);
  digitalWrite(tonerelaypos, 1);
  digitalWrite(tonerelayneg, 1);
  // digitalWrite(powerpos,1);
  //  digitalWrite(powerpos,1);

  //activate dial mode
  digitalWrite(ringrelaypos, 0);  //activate dtmf relay
  digitalWrite(ringrelayneg, 0);  //activate dtmf relay
  delay(100);
  digitalWrite(ringrelaypos, 1);  //activate dtmf relay
  digitalWrite(ringrelayneg, 1);  //activate dtmf relay
  delay(100);
  //activate ring relay for few milli-seconds and then disable and then again repeat it
}


  int ringbutton()
{
  //for activating ring fuunctions
  ringfunc() //run ringfunc
  //LCD - ringing
  delay(200);
}

int rec()
{
  digitalWrite(dtmfrelayneg, 1);
  digitalWrite(dtmfrelaypos, 1);
  digitalWrite(ringrelaypos, 1);
  digitalWrite(ringrelayneg, 1);

  //activate tone
  //digitalWrite(powerneg, 0);  //activate power relay
 // digitalWrite(powerpos, 0);  //activate power relay
  digitalWrite(tonerelaypos, 0);  //activate dtmf relay
  digitalWrite(tonerelayneg, 0);  //activate dtmf relay
  //for activating receiver fuunction(??) - receiveer tone
}
