/* Telephone Analyser
    Version :- 0.1
    Author :- Siddharth Singh
*/

#include <LiquidCrystal.h>  //LCD intialize 
const int rs = 14, en = 19 , d4 = 15, d5 = 16, d6 = 17, d7 = 18;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

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
#define transrelaypos
#define transrelayneg


#define manbut 11
#define dtmfbutton 12
#define ringbutton 13
#define recbutton 14
#define trabutton 15
#define ansbutton 16


#define teltestcalleridswitch
#define inoutcallswitch
#define repeatcallswitch
#define manautoswitch


#define d0  12//output of dtmf module to uC 
#define d1  13// "
#define d2  14// "
#define d3  15// "

//#define calleridrelay 9
//#define calleridbutton 10
//#define nodialrelay 11
//#define dtmfrelay 3


void setup() {
  // put your setup code here, to run once:


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
  pinMode(transrelaypos, OUTPUT);
  pinMode(transrelayneg, OUTPUT);

  pinMode(manbut, INPUT);
  pinMode(dtmfbutton, INPUT);
  pinMode(ringbutton, INPUT);
  pinMode(recbutton, INPUT);
  pinMode(trabutton, INPUT);
  pinMode(ansbutton, INPUT);

  pinMode(teltestcalleridswitch, INPUT);
  pinMode(inoutcallswitch, INPUT);
  pinMode(repeatcallswitch, INPUT);
  pinMode(manautoswitch, INPUT);

  pinMode(d0, INPUT);
  pinMode(d1, INPUT);
  pinMode(d2, INPUT);
  pinMode(d3, INPUT);




  lcd.begin(16, 2);
  lcd.print("TCC-3200-S");
  delay(3000);




}

void loop() {
  // put your main code here, to run repeatedly:

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
      lcd.print("1")//lcd write
    }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 0))
    {
      lcd.print("2") //lcd write
    }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 1))
    {
      lcd.print("3") //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 0))
    {
      lcd.print("4")  //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 1))
    {
      lcd.print("5")  //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 0))
    {
      lcd.print("6") //lcd write
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 1))
    {
      lcd.print("7")  //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 0))
    {
      lcd.print("8") //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 1))
    {
      lcd.print("9") //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 0))
    {
      lcd.print("1") //lcd write
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 1))
    {
      lcd.print("1") //lcd write
    }

    if ((d0 == 1) & (d1 == 1) & (d2 == 0) & (d3 == 0))
    {
      lcd.print("1") //lcd write
    }
    //lcd display
  }

}
int ringbutton()
{
  //for activating ring fuunctions
  ringfunc() //run ringfunc
  //LCD - ringing
  delay(200);
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

int rec()
{
  digitalWrite(dtmfrelayneg, 1);
  digitalWrite(dtmfrelaypos, 1);
  digitalWrite(ringrelaypos, 1);
  digitalWrite(ringrelayneg, 1);

  //activate tone
  digitalWrite(powerneg, 0);  //activate power relay
  digitalWrite(powerpos, 0);  //activate power relay
  digitalWrite(tonerelaypos, 0);  //activate dtmf relay
  digitalWrite(tonerelayneg, 0);  //activate dtmf relay
  //for activating receiver fuunction(??) - receiveer tone
}

int tra()
{
  igitalWrite(dtmfrelayneg, 1);
  digitalWrite(dtmfrelaypos, 1);
  digitalWrite(ringrelaypos, 1);
  digitalWrite(ringrelayneg, 1);

  //activate tone
  digitalWrite(powerneg, 0);  //activate power relay
  digitalWrite(powerpos, 0);  //activate power relay
  digitalWrite(tonerelaypos, 0);  //activate dtmf relay
  digitalWrite(tonerelayneg, 0);  //activate dtmf relay //for activating transmitter function(uA meter - voice from phone - changes in uA meter reading)
  //activate meter relay
}

int ans()
{
  //for activating answer function - for off hook position
}


/*

  int manbbutton()
  {
  //for activating manual mode or digit/dtmf testing mode
  // activate dtmf relay
  }

  int teltestidtest ()
  { // if b low -> tel test; high ->caller id test
  if (b==0) // decides which test to activate - callerid or tel test
  {

  }
  else()
  {
    //enable caller id relay
  }
  //
  }

  int inoutcall
  {
  //for incoming and outgoing calls

  if(c==0)
  {
  // nodialrelay on
  //for
  }

  if(c==1)
  {
  for(i=0;i<10;i++)
  {
  //nodial 1
  //lcd write 1
  }
  }

  }

  int repeatcall()
  {
  //for activating repeat call function
  }

  int manualorauto()
  {
  //for setting manual/auto settings
  }

*/
