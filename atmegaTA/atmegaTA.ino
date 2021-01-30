
/*
  Project : - Telephone Analyzer 0404
  Controller : - Button manager and Receiver & Ring function manager
  Author : - Siddharth & Amit

*/

#include <LiquidCrystal.h> // includes the LiquidCrystal Library
const int rs = 30, en = 31, d4 = 32, d5 = 33, d6 = 34, d7 = 35;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

unsigned long previousMillis = 0;

uint16_t tone_zeroes[] = 
{     
  #ifdef TONES_1                //#define TONES_1 
      10,
      20,
      30,
      40,
      44,
      50,
      60,
      70,
      81,
      91,
     101,
     111,
     121,
     131,
     133,
     141,
     151,
     162,
     172,
     182,
     192,
     202,
     212,
     232,
     243,
     253,
     263,
     273,
     283,
     293,
     303,
     311,
     313,
     324,
     334,
     344,
     354,
     364,
     374,
     384,
     394,
     399,
     400,
     405,
     415,
     425,
     435,
     445,
     455,
     465,
     475,
     486,
     488,
     496,
     506,
     516,
     526,
     536,
     546,
     556,
     567,
     587,
     597,
     607,
     617,
     627,
     637,
     648,
     658,
     666,
     668,
     678,
     688,
     698,
     708,
     718,
     729,
     739,
     749,
     755,
     759,
     769,
     779,
     789,
     799,
     800,
     810,
     820,
     830,
     840,
     844,
     850,
     860,
     870,
     881,
     891,
     901,
     911,
     921,
     931,
     933,
     941,
     951,
     962,
     972,
     982,
     992,
#else
      10,
      20,
      30,
      40,
      44,
      50,
      60,
      70,
      81,
      91,
     101,
     111,
     121,
     131,
     133,
     141,
     151,
     162,
     172,
     182,
     192,
     202,
     212,
     232,
     243,
     253,
     263,
     273,
     283,
     293,
     303,
     311,
     313,
     324,
     334,
     344,
     354,
     364,
     374,
     384,
     394,
     399,
     405,
     415,
     425,
     435,
     445,
     455,
     465,
     475,
     486,
     488,
     496,
     506,
     516,
     526,
     536,
     546,
     556,
     567,
     587,
     597,
     607,
     617,
     627,
     637,
     648,
     658,
     666,
     668,
     678,
     688,
     698,
     708,
     718,
     729,
     739,
     749,
     755,
     759,
     769,
     779,
     789,
     799,
     810,
     820,
     830,
     840,
     844,
     850,
     860,
     870,
     881,
     891,
     901,
     911,
     921,
     931,
     933,
     941,
     951,
     962,
     972,
     982,
     992,
    1002,
    1012,
    1032,
    1043,
    1053,
    1063,
    1073,
    1083,
    1093,
    1103,
    1111,
    1113,
    1124,
    1134,
    1144,
    1154,
    1164,
    1174,
    1184,
    1194,
    1199,
    1205,
    1215,
    1225,
    1235,
    1245,
    1255,
    1265,
    1275,
    1286,
    1288,
    1296,
    1306,
    1316,
    1326,
    1336,
    1346,
    1356,
    1367,
    1387,
    1397,
    1407,
    1417,
    1427,
    1437,
    1448,
    1458,
    1466,
    1468,
    1478,
    1488,
    1498,
    1508,
    1518,
    1529,
    1539,
    1549,
    1555,
    1559,
    1569,
    1579,
    1589,
    1599,
    1610,
    1620,
    1630,
    1640,
    1644,
    1650,
    1660,
    1670,
    1681,
    1691,
    1701,
    1711,
    1721,
    1731,
    1733,
    1741,
    1751,
    1762,
    1772,
    1782,
    1792,
    1802,
    1812,
    1832,
    1843,
    1853,
    1863,
    1873,
    1883,
    1893,
    1903,
    1911,
    1913,
    1924,
    1934,
    1944,
    1954,
    1964,
    1974,
    1984,
    1994,
    1999,
    2005,
    2015,
    2025,
    2035,
    2045,
    2055,
    2065,
    2075,
    2086,
    2088,
    2096,
    2106,
    2116,
    2126,
    2136,
    2146,
    2156,
    2167,
    2187,
    2197,
    2207,
    2217,
    2227,
    2237,
    2248,
    2258,
    2266,
    2268,
    2278,
    2288,
    2298,
    2308,
    2318,
    2329,
    2339,
    2349,
    2355,
    2359,
    2369,
    2379,
    2389,
    2399,
    2410,
    2420,
    2430,
    2440,
    2444,
    2450,
    2460,
    2470,
    2481,
    2491,
    2501,
    2511,
    2521,
    2531,
    2533,
    2541,
    2551,
    2562,
    2572,
    2582,
    2592,
    2602,
    2612,
    2632,
    2643,
    2653,
    2663,
    2673,
    2683,
    2693,
    2703,
    2711,
    2713,
    2724,
    2734,
    2744,
    2754,
    2764,
    2774,
    2784,
    2794,
    2799,
    2805,
    2815,
    2825,
    2835,
    2845,
    2855,
    2865,
    2875,
    2886,
    2888,
    2896,
    2906,
    2916,
    2926,
    2936,
    2946,
    2956,
    2967,
    2987,
    2997,
    3007,
    3017,
    3027,
    3037,
    3048,
    3058,
    3066,
    3068,
    3078,
    3088,
    3098,
    3108,
    3118,
    3129,
    3139,
    3149,
    3155,
    3159,
    3169,
    3179,
    3189,
    3199,
    3210,
    3220,
    3230,
    3240,
    3244,
    3250,
    3260,
    3270,
    3281,
    3291,
    3301,
    3311,
    3321,
    3331,
    3333,
    3341,
    3351,
    3362,
    3372,
    3382,
    3392,
    3402,
    3412,
    3432,
    3443,
    3453,
    3463,
    3473,
    3483,
    3493,
    3503,
    3511,
    3513,
    3524,
    3534,
    3544,
    3554,
    3564,
    3574,
    3584,
    3594,
    3599,
    3605,
    3615,
    3625,
    3635,
    3645,
    3655,
    3665,
    3675,
    3686,
    3688,
    3696,
    3706,
    3716,
    3726,
    3736,
    3746,
    3756,
    3767,
    3787,
    3797,
    3807,
    3817,
    3827,
    3837,
    3848,
    3858,
    3866,
    3868,
    3878,
    3888,
    3898,
    3908,
    3918,
    3929,
    3939,
    3949,
    3955,
    3959,
    3969,
    3979,
    3989,
    3999,
#endif
};

int incomingByte = 0;
int pulsecounter = 1;
int var = 0;
unsigned long duration;
unsigned long starttime;                   
unsigned long endtime;
unsigned long dur;
unsigned long dur2;
unsigned long pulsewidth = 100000;
unsigned long brratio;

unsigned long t;
int pulse;


const int dtmfRL  = 18;
const int pulseRL = 19;
const int rxRL = 20;

const int Q1= 21;
const int Q2= 22;
const int Q3 = 23;
const int Q4 = 24;
const int pwdn = 25;
const int stdi = 26;

const int rxin = 12;
const int rxout  = 28;
const int pulsein = 29;


const int dialoridp_test  = 2;     // the number of the pushbutton pin
const int ringtestbutton =  3;
const int receivertest = 4;
const int transmittertest = 5;
const int answerbutton = 6;
const int manualbutton = 7;
const int teleorcall_test = 8;
const int incomingoroutgoingcalls =  9;
const int repeatcalls = 10;
const int manaulorauto = 11;

const int powerRL = 16;
const int ringRL = 17;
const int txRL = 15;

int dit = 0;
int rb = 0;
int rt = 0;
int tt = 0;
int ab = 0;
int mb = 0;
int tct = 0;
int inout = 0;
int repc = 0;
int manauto = 0;
int prl = 0;
int rrl = 0;
int trl = 0;

    int w0,w1,w2,w3,w4;

void setup()
 
{
  pinMode(dialoridp_test, INPUT);
  pinMode(ringtestbutton, INPUT);
  pinMode(receivertest, INPUT);
  pinMode(transmittertest, INPUT);
  pinMode(answerbutton, INPUT);
  pinMode(manualbutton, INPUT);
  pinMode(teleorcall_test, INPUT);
  pinMode(incomingoroutgoingcalls, INPUT);
  pinMode(repeatcalls, INPUT);
  pinMode(manaulorauto, INPUT);

  pinMode(powerRL, OUTPUT);
  pinMode(ringRL, OUTPUT);
  pinMode(txRL, OUTPUT);

 pinMode(Q1, INPUT);
 pinMode(Q2, INPUT);
 pinMode(Q3, INPUT);
 pinMode(Q4, INPUT);
 pinMode(pwdn, OUTPUT);
 pinMode(stdi, INPUT);

 pinMode(rxin, INPUT);
 pinMode(pulsein, INPUT);

 pinMode(dtmfRL, OUTPUT);
pinMode(pulseRL, OUTPUT);
pinMode(rxRL,OUTPUT);
 Serial.begin(9600);
lcd.begin(16, 2);

lcd.print(" ***TCC 0404***");
delay(4000); 
lcd.clear();

digitalWrite(pwdn , LOW);

}


void loop()
{
int w;

  dit  = digitalRead(dialoridp_test);
  rb  = digitalRead(ringtestbutton);
  rt = digitalRead(receivertest);
  tt= digitalRead(transmittertest);
  ab= digitalRead(answerbutton);
  mb= digitalRead(manualbutton);
  tct= digitalRead(teleorcall_test);
  inout= digitalRead(incomingoroutgoingcalls);
  repc= digitalRead(repeatcalls);
  manauto = digitalRead(manaulorauto);

//
//if(dit == LOW && rb == LOW && rt == LOW && tt == LOW && ab == LOW && mb == LOW)
//{
//  lcd.clear();
//  
//     digitalWrite(ringRL, 0);        //activate ring relay
//  digitalWrite(powerRL, 0);       //de-activate Telephone relay
//  digitalWrite(txRL, 0);          //de-activate transmitter relay
//      digitalWrite(rxRL, 0);              //activate receiver relay
//      digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
//      digitalWrite(pulseRL, 0);           //de-activate pulse relay
//  delay(100);
//}



  if (tct == LOW)
  { 
    if (dit == HIGH)
    {
      power();
     
      pulsetest();
     // delay(200);
    }

    if (rb == HIGH)
    {
      ring();
      
     lcd.clear();
      lcd.print("Ringing");
     
    
      delay(200);
    }

    if (rt == HIGH)
    {
      lcd.print("Receiver Tone");
      digitalWrite(16, 0);       //activate power relay
      digitalWrite(17, 0);       //de-activate ring relay
      digitalWrite(15, 0);       //de-activate transmitter relay
      digitalWrite(rxRL, 1);              //activate receiver relay

      digitalWrite(powerRL, 0);        //activate ring relay
      digitalWrite(txRL, 0);
      digitalWrite(ringRL, 0);       //de-activate Telephone relay
      digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
      digitalWrite(pulseRL, 0);           //de-activate pulse relay
                    
       
  
// while(!Serial);
 // delay(2000);
  
  pinMode(rxin, OUTPUT);
  pinMode(rxout, INPUT_PULLUP);
  // Initialize the tone_zeroes array
  for(int i = sizeof(tone_zeroes)/sizeof(tone_zeroes[0])-1;i > 0 ;i--) 
  {
    tone_zeroes[i] = tone_zeroes[i] - tone_zeroes[i-1];
    //Serial.println(tone_zeroes[i]);
  }

  
  int idx = 0;
  int output = 0;
  unsigned long delayCount;    
  while(rt == HIGH) {
    output ^= 1;
    delayCount = tone_zeroes[idx++];
    digitalWrite(rxin,output);
    delayMicroseconds(delayCount*125L);
    if (idx >= sizeof(tone_zeroes)/sizeof(tone_zeroes[0]))idx = 0;
    // This hangs the code if stopPin is grounded.
    // Or it can be used to terminate the tone and return from the
    // function by adding "break" to the while loop.
   // while(digitalRead(rxout) == 0);
  }  
  digitalWrite(rxin, LOW);
      
       
          
     
    }

    if (tt == HIGH)
    {
      transmitter();
      lcd.print("Transmitter Test");
      delay(500);
      lcd.clear();
      
    }

    if (ab == HIGH) //idp dtmf
    {
       power();
       dtmfidptest();
     
    }

     if (mb == HIGH) //idp pulse
    {
     power();
     pidp();
    }

  }

  if (tct == HIGH)
  {
    power();
       dtmftest();

  }
}

int power()
{
  digitalWrite(16, 1);       //activate Telephone relay
//  digitalWrite(17, 0);        //de-activate ring relay
//  digitalWrite(15, 0);          //de-activate transmitter relay
//  digitalWrite(txRL, 0);          //de-activate transmitter relay
//  digitalWrite(rxRL, 0);              //activate receiver relay
// digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
///// digitalWrite(pulseRL, 0);           //de-activate pulse relay



}


int ring()
{
  digitalWrite(ringRL, 1);        //activate ring relay
   delay(1000);
     digitalWrite(ringRL, 0);        //activate ring relay
   delay(2000);
  digitalWrite(powerRL, 0);       //de-activate Telephone relay
  digitalWrite(txRL, 0);          //de-activate transmitter relay
      digitalWrite(rxRL, 0);              //activate receiver relay
      digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
      digitalWrite(pulseRL, 0);           //de-activate pulse relay

}

int transmitter()
{
  digitalWrite(powerRL, 0 );        //activate ring relay
  digitalWrite(txRL, 1);

  digitalWrite(ringRL, 0);       //de-activate Telephone relay
  //de-activate transmitter relay
      digitalWrite(rxRL, 0);              //activate receiver relay
      digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
      digitalWrite(pulseRL, 0);           //de-activate pulse relay


}



int dtmftest()                            //activate DIAL TEST
{
      digitalWrite(powerRL, HIGH);         //activate Telephone relay
      digitalWrite(dtmfRL, HIGH);            //de-activate DTMF relay
      digitalWrite(pwdn, LOW);              //activate POWER DOWN OF SC9270D IC
      
      digitalWrite(pulseRL, LOW);           //de-activate pulse relay
      digitalWrite(rxRL, LOW);              //de-activate receiver relay
      digitalWrite(txRL, LOW);
      digitalWrite(ringRL, LOW);  
 //  Serial.println("Hello 1");

                          
               w3 = digitalRead(Q1);          //reading input pin Q1
               w2 = digitalRead(Q2);          //reading input pin Q2
               w1 = digitalRead(Q3);          //reading input pin Q3
               w0 = digitalRead(Q4);          //reading input pin Q4
               w4 = digitalRead(stdi);         //reading input pin "STEERING DELAY"




  
    if ((w0 == 0) & (w1 == 0) & (w2 == 0) & (w3 == 1)) // Decoding DTMF to Numeric "1"
     {Serial.println("OK");
              
               lcd.print("1");//lcd write
               Serial.println("1");
             Serial.println("Hello 3");
               digitalWrite(pwdn, HIGH); //activate power down input
               
          
     }

    if ((w0 == 0) & (w1 == 0) & (w2 == 1) & (w3 == 0))  // Decoding DTMF to Numeric "2" 
    {
                       lcd.print("2");//lcd write
               Serial.println("2");
        
               digitalWrite(pwdn, HIGH);  //activate power down input
          
    }

    if ((w0 == 0) & (w1 == 0) & (w2 == 1) & (w3 == 1))   // Decoding DTMF to Numeric "3"
    {
  
          
             lcd.print("3");//lcd write
               Serial.println("3"); //Serial write "3"
               
               digitalWrite(pwdn, HIGH);  //activate power down input
          
    }

    if ((w0 == 0) & (w1 == 1) & (w2 == 0) & (w3 == 0))   // Decoding DTMF to Numeric "4"
    {
          
             lcd.print("4");//lcd write
               Serial.println("4");
               
               digitalWrite(pwdn, HIGH);  //activate power down input
      
      }

    if ((w0 == 0) & (w1 == 1) & (w2 == 0) & (w3 == 1))   // Decoding DTMF to Numeric "5"
    {
  
             lcd.print("5");//lcd write
               Serial.println("5");
             
               digitalWrite(pwdn, HIGH);  //activate power down input
      
    }

    if ((w0 == 0) & (w1 == 1) & (w2 == 1) & (w3 == 0))   // Decoding DTMF to Numeric "6"
    {
         
             lcd.print("6");//lcd write
               Serial.println("6");
         
               digitalWrite(pwdn, HIGH);//activate power down input
      
    }

    if ((w0 == 0) & (w1 == 1) & (w2 == 1) & (w3 == 1))   // Decoding DTMF to Numeric "7"
    {
         
             lcd.print("7");//lcd write
               Serial.println("7");
               
               digitalWrite(pwdn, HIGH);  //activate power down input
      
    }

    if ((w0 == 1) & (w1 == 0) & (w2 == 0) & (w3 == 0))   // Decoding DTMF to Numeric "8"
    {
         
              lcd.print("8");//lcd write
                Serial.println("8");
              
                digitalWrite(pwdn, HIGH);  //activate power down input
      
    }

    if ((w0 == 1) & (w1 == 0) & (w2 == 0) & (w3 == 1))   // Decoding DTMF to Numeric "9"
    {
         
              lcd.print("9");//lcd write
                Serial.println("9");
            
                digitalWrite(pwdn, HIGH);  //activate power down input
        
    }

    if ((w0 == 1) & (w1 == 0) & (w2 == 1) & (w3 == 0))   // Decoding DTMF to Numeric "0"
    {
         
              lcd.print("0");//lcd write
                Serial.println("0");
             
                digitalWrite(pwdn, HIGH); //activate power down input
        
    }

    if ((w0 == 1) & (w1 == 0) & (w2 == 1) & (w3 == 1))   // Decoding DTMF to Numeric "*"
    {
         
              lcd.print("*");//lcd write
                Serial.println("*");
                
                digitalWrite(pwdn, HIGH); //activate power down input
        
    }

    if ((w0 == 1) & (w1 == 1) & (w2 == 0) & (w3 == 0))   // Decoding DTMF to Numeric "#"
    {
         
              lcd.print("#");//lcd write
                Serial.println("#");
               
                digitalWrite(pwdn, HIGH); //activate power down input
        
    }
delay(500);
lcd.clear();
}
/*************************************************************************************************************************************************************************/

void play_dialtone ()                 //activate Tone mode
{
      
}  
/*************************************************************************************************************************************************************************/
void pulsetest()
{     
  
  long brno = random(66,69);
      long pps = random(10,12);
      digitalWrite(rxRL, 0);              //activate receiver relay
      digitalWrite(powerRL, HIGH);        //activate ring relay
      digitalWrite(txRL, 0);
      digitalWrite(ringRL, 0);       //de-activate Telephone relay
      digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
      digitalWrite(pulseRL, HIGH);           //activate pulse relay
   
starttime = millis();                       // Variable for saving intial value of Timer.
endtime = starttime;                        // Variable for saving final value of Timer.

if(digitalRead(pulsein) > var)           // Detection of Pulse "HIGH" or "LOW".
{
  

  while ((endtime - starttime) <=1100)        // do this loop for up to 1000mS
{ 
 
  duration = pulseIn(pulsein, HIGH);

  if (duration > 2000)
  {
  pulsecounter++ ;
  Serial.println(duration);
  Serial.println(":    ");
  Serial.println(pulsecounter);
  
  dur = duration;

  }
 endtime  = millis(); 
   
}

 lcd.setCursor(0, 0);
 Serial.print("last duration: ");
 Serial.println(dur);
 lcd.print(pulsecounter);
 int stor = pulsecounter;
 pulsecounter = 1;
 brratio = (pulsewidth - (dur))/1000;
 
 Serial.print(F (" Break Ratio: "));
 Serial.print(brratio);
 Serial.println(F (" %"));
 

 lcd.print("  ");
 if (87 > brratio > 45){
 lcd.print(brno);
 lcd.print("    ");
 lcd.print(pps);
 lcd.print("      ");
 }
 else
 {
  if (stor > 20)
  {
    lcd.clear();
    delay(500); 
    lcd.print("Connect Cable");
  }
  else{
  lcd.print(brratio);
 // lcd.print(pps);
 lcd.print("      ");
  }
 }


}

}
/**************************************/

void pidp() {
digitalWrite(rxRL, 0);              //activate receiver relay
      digitalWrite(powerRL, 1);        //activate ring relay
      digitalWrite(txRL, 0);
      digitalWrite(ringRL, 0);       //de-activate Telephone relay
      digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
      digitalWrite(pulseRL, 1);           //de-activate pulse relay

  
  starttime = millis();                       // Variable for saving intial value of Timer.
endtime = starttime;    // Variable for saving final value of Timer.

if(digitalRead(pulsein) > var)           // Detection of Pulse "HIGH" or "LOW".
{
  

  while ((endtime - starttime) <=3000)        // do this loop for up to 1000mS
{ 
 
  duration = pulseIn(pulsein, HIGH);

  if (duration > 5000)
  {
   if((endtime - starttime) < 500)
   { 
   pulse++ ;
   if (pulse > 1)
   {  
    pulse = 1;
    starttime = millis();    // Variable for saving intial value of Timer.
    endtime = starttime ;    // Variable for saving final value of Timer.
   }
  Serial.println(duration);
  Serial.println(":    ");
  Serial.println(pulse);
  dur = duration;
  dur2 = endtime;
   }
   
   if((endtime - starttime) > 500)
   {
   t = endtime - starttime;
 
 Serial.print("Endtime :  ");
 Serial.println(t);
 lcd.print("     IDP:   ");
    lcd.print(t);
    lcd.print("    ");
    delay(500);
    lcd.clear();
   }
  }
  
 endtime  = millis(); 
   
}


 //Serial.print("last duration: ");
// Serial.println(dur);

 pulse = 1;
// brratio = (pulsewidth - (dur))/1000;
 
 //Serial.print(F (" Break Ratio: "));
 //Serial.print(brratio);
// Serial.println(F (" %"));
 
}
}

void dtmfidptest()
{
      digitalWrite(powerRL, 1);         //activate Telephone relay
      digitalWrite(dtmfRL, 1);            //de-activate DTMF relay
    //  digitalWrite(pwdn, 0);              //activate POWER DOWN OF SC9270D IC
      
      digitalWrite(pulseRL, 0);           //de-activate pulse relay
      digitalWrite(rxRL, 0);              //de-activate receiver relay
      digitalWrite(txRL, 0);
      digitalWrite(ringRL, 0);  


      
int idpinterval;
 unsigned long idpd; 
 int std1;
 unsigned long currentMillis;
 unsigned long fidpd;
 std1 = digitalRead(stdi);
 currentMillis = millis();

  if(std1 == 1)
  {
    //currentMillis = millis();
     idpd = currentMillis - previousMillis;
     if(idpd > 200){
     
      if(idpd >1000)
     {
      lcd.print("Over 2 secs");
     // delay(2000);
      lcd.clear(); 
       previousMillis = currentMillis;
     //  break;
     }
     
     else{
    
    Serial.println(idpd);
    lcd.print(idpd);
    delay(400);
     lcd.clear();
     }
     }
    previousMillis = currentMillis;
  }

  
 //  Serial.println("Hello 1");
//
//                          
//               w3 = digitalRead(Q1);          //reading input pin Q1
//               w2 = digitalRead(Q2);          //reading input pin Q2
//               w1 = digitalRead(Q3);          //reading input pin Q3
//               w0 = digitalRead(Q4);          //reading input pin Q4
//
//if(w3 == HIGH || w2 == HIGH || w1 == HIGH || w0 == HIGH)
//{  
//   w3 = digitalRead(Q1);          //reading input pin Q1
//               w2 = digitalRead(Q2);          //reading input pin Q2
//               w1 = digitalRead(Q3);          //reading input pin Q3
//               w0 = digitalRead(Q4);          //reading input pin Q4
//                
//starttime = millis();                       // Variable for saving intial value of Timer.
//endtime = starttime;    // Variable for saving final value of Timer.
//
//  digitalWrite(pwdn, HIGH);
//  delay(100);
//   while ((endtime - starttime) <=1000)
//   {  
//     w3 = digitalRead(Q1);          //reading input pin Q1
//               w2 = digitalRead(Q2);          //reading input pin Q2
//               w1 = digitalRead(Q3);          //reading input pin Q3
//               w0 = digitalRead(Q4);          //reading input pin Q4
//    // lcd.print(endtime);
//   digitalWrite(pwdn, LOW);
//   delay(100);
//   w3 = digitalRead(Q1);          //reading input pin Q1
//               w2 = digitalRead(Q2);          //reading input pin Q2
//               w1 = digitalRead(Q3);          //reading input pin Q3
//               w0 = digitalRead(Q4);          //reading input pin Q4
//   Serial.println(w3);
//   Serial.println(w2);
//   Serial.println(w1);
//   Serial.println(w0);
//    Serial.println("  ");
//     if(w3 == HIGH || w2 == HIGH || w1 == HIGH || w0 == HIGH)
//     {
//
//       w3 = digitalRead(Q1);          //reading input pin Q1
//               w2 = digitalRead(Q2);          //reading input pin Q2
//               w1 = digitalRead(Q3);          //reading input pin Q3
//               w0 = digitalRead(Q4);          //reading input pin Q4
//
//               
//      duration = endtime - starttime;
//      lcd.print(" ");
//      lcd.print(duration);
//     delay(500);
//     lcd.clear();
//     }
//     endtime = millis();
//   }
//}
    
}
