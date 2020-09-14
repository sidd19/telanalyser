/* Telephone Analyser
    Version :- 0.1
    Author :- Siddharth Singh & Amit Raj
*/

#include <LiquidCrystal.h>  //LCD intialize 
const int rs = 14, en = 19 , d4 = 15, d5 = 16, d6 = 17, d7 = 18;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
 unsigned long previousMillis = 0;
//#define linerelaypos 6
//#define linerelayneg 5
#define powerpos 3
#define powerneg 4
#define dtmfrelaypos 7
#define dtmfrelayneg 8
#define pwdn 29
#define std  28
#define teltestcalleridswitch 24
/*#define ringrelaypos 5
#define ringrelayneg 6

#define tonerelaypos 9
#define tonerelayneg 10
*/



//#define manbut 11
//#define dtmfbutton 12
//#define ringbutton 13
//#define recbutton 14
//#define trabutton 15
//#define ansbutton 16


//#define teltestcalleridswitch
//#define inoutcallswitch
//#define repeatcallswitch
//#define manautoswitch


//#define d0  30//output of dtmf module to uC 
//#define d1  31// "
//#define d2  32// "
//#define d3  33// "

//#define calleridrelay 9
//#define calleridbutton 10
//#define nodialrelay 11
//#define dtmfrelay 3


void setup() {
  // put your setup code here, to run once:


//  pinMode(linerelaypos, OUTPUT);
  //pinMode(linerelayneg, OUTPUT);
  pinMode(powerpos, OUTPUT);
  pinMode(powerneg, OUTPUT);
  pinMode(dtmfrelaypos, OUTPUT);
  pinMode(dtmfrelayneg, OUTPUT);
  pinMode(teltestcalleridswitch, INPUT);
  pinMode(pwdn, OUTPUT);
  pinMode(std, INPUT);
  pinMode(30, INPUT);
  pinMode(31, INPUT);
  pinMode(32, INPUT);
  pinMode(33, INPUT);
  //pinMode(ringrelayneg, OUTPUT);
  /*pinMode(tonerelaypos, OUTPUT);
   pinMode(ringrelaypos, OUTPUT);
  pinMode(tonerelayneg, OUTPUT);
  pinMode(transrelaypos, OUTPUT);
  pinMode(transrelayneg, OUTPUT);
  pinMode(manbut, INPUT);
  pinMode(dtmfbutton, INPUT);
  pinMode(ringbutton, INPUT);
  pinMode(recbutton, INPUT);
  pinMode(trabutton, INPUT);
  pinMode(ansbutton, INPUT);

  
  pinMode(inoutcallswitch, INPUT);
  pinMode(repeatcallswitch, INPUT);
  pinMode(manautoswitch, INPUT);
*/
  



  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("TCC-3200-S");
  //delay(3000);
  



}

void loop() {
  // put your main code here, to run repeatedly:

dialidbtest();
idp();
}


int dialidbtest()
{


   /* digitalWrite(ringrelaypos, 1);
      digitalWrite(ringrelayneg, 1);
      digitalWrite(tonerelaypos, 1);
      digitalWrite(tonerelayneg, 1); 
   */


    //activate dial mode
    digitalWrite(dtmfrelaypos, 0);  //activate dtmf relay
    digitalWrite(dtmfrelayneg, 0);  //activate dtmf relay
    digitalWrite(powerneg, 0);      //activate power relay
    digitalWrite(powerpos, 0);      //activate power relay
    digitalWrite(pwdn, 0);          //deactivate power down pin

 int d0,d1,d2,d3,d4;
     d0 = digitalRead(30);          //reading input pin Q1
     d1 = digitalRead(31);          //reading input pin Q2
     d2 = digitalRead(32);          //reading input pin Q3
     d3 = digitalRead(33);          //reading input pin Q4
     d4 = digitalRead(std);         //reading input pin "std"


int idpinterval;
 unsigned long idpd; 
 int std1;
 unsigned long currentMillis;
 std1 = digitalRead(std);
 currentMillis = millis();

  if(std1 == 1)
  {
    //currentMillis = millis();
     idpd = currentMillis - previousMillis;
    Serial.println(idpd);
    previousMillis = currentMillis;
  }
  if(std1 == 0)
  {
//    if(currentMillis >1280);
//    {
//      currentMillis = 0;
//    }
  }
  
  
    if ((d0 == 0) & (d1 == 0) & (d2 == 0) & (d3 == 1)) // Decoding DTMF to Numeric "1"
     {
      
        if(d4 == 1) //reading std input
      {
      lcd.print("1");//lcd write
      Serial.println("1");
      delay(200);
      digitalWrite(pwdn, 1); //activate power down input
      } 
     }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 0))  // Decoding DTMF to Numeric "2" 
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("2");//lcd write
      Serial.println("2");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      } 
    }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 1))   // Decoding DTMF to Numeric "3"
    {
  
      if(d4 == 1) //reading std input
      {
      lcd.print("3");//lcd write
      Serial.println("3");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 0))   // Decoding DTMF to Numeric "4"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("4");//lcd write
      Serial.println("4");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 1))   // Decoding DTMF to Numeric "5"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("5");//lcd write
      Serial.println("5");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 0))   // Decoding DTMF to Numeric "6"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("6");//lcd write
      Serial.println("6");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 1))   // Decoding DTMF to Numeric "7"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("7");//lcd write
      Serial.println("7");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 0))   // Decoding DTMF to Numeric "8"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("8");//lcd write
      Serial.println("8");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 1))   // Decoding DTMF to Numeric "9"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("9");//lcd write
      Serial.println("9");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 0))   // Decoding DTMF to Numeric "0"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("0");//lcd write
      Serial.println("0");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 1))   // Decoding DTMF to Numeric "*"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("*");//lcd write
      Serial.println("*");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }

    if ((d0 == 1) & (d1 == 1) & (d2 == 0) & (d3 == 0))   // Decoding DTMF to Numeric "#"
    {
      if(d4 == 1) //reading std input
      {
      lcd.print("#");//lcd write
      Serial.println("#");
      delay(200);
      digitalWrite(pwdn, 1);  //activate power down input
      }
    }


}
int idp()
{
// int idpinterval;
// unsigned long idpd; 
// int std1;
// unsigned long currentMillis;
// std1 = digitalRead(std);
//  if(std1 == 1)
//  {
//    currentMillis = millis();
//  }
//  if(std1 == 0)
//  {
//    idpinterval = currentMillis - previousMillis;
//    Serial.println(idpinterval);
//    previousMillis = currentMillis;
//  }
//  
  
  
}

/*
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
