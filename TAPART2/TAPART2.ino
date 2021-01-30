#include <LiquidCrystal.h> // includes the LiquidCrystal Library
#define dtmfRL 13
#define pulseRL 14
#define rxRL 15

#define Q1 11
#define Q2 10
#define Q3 21
#define Q4 20
#define pwdn 12
#define std 9

#define rxin 16
#define rxout 18
#define pulsein 17

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


int pulsecounter = 1;
int var = 0;
unsigned long duration;
unsigned long starttime;                   
unsigned long endtime;
unsigned long dur;
unsigned long dur2;
unsigned long pulsewidth = 100000;
unsigned long brratio;


void setup()
{
  
 pinMode(Q1, INPUT);
 pinMode(Q2, INPUT);
 pinMode(Q3, INPUT);
 pinMode(Q4, INPUT);
 pinMode(pwdn, INPUT);
 pinMode(std, INPUT);

 pinMode(rxin, INPUT);
 pinMode(pulsein, INPUT);

 pinMode(dtmfRL, INPUT);
 pinMode(rxin, INPUT);
 pinMode(pulsein, INPUT);
 
}

void loop()
{
 Serial.begin(9600);
}


int dtmftest()                            //activate DIAL TEST
{
      //digitalWrite(powerRL, 0);         //activate Telephone relay
      digitalWrite(dtmfRL, 0);            //de-activate DTMF relay
      digitalWrite(pwdn, 0);              //activate POWER DOWN OF SC9270D IC
      
      digitalWrite(pulseRL, 1);           //de-activate pulse relay
      digitalWrite(rxRL, 1);              //de-activate receiver relay
     
      
   
      int d0,d1,d2,d3,d4;
                          
               d0 = digitalRead(Q1);          //reading input pin Q1
               d1 = digitalRead(Q2);          //reading input pin Q2
               d2 = digitalRead(Q3);          //reading input pin Q3
               d3 = digitalRead(Q4);          //reading input pin Q4
               d4 = digitalRead(std);         //reading input pin "STEERING DELAY"



  
    if ((d0 == 0) & (d1 == 0) & (d2 == 0) & (d3 == 1)) // Decoding DTMF to Numeric "1"
     {
               if(d4 == 1) //reading std input
          {
               //lcd.print("1");//lcd write
               Serial.println("1");
               delay(200);
               digitalWrite(pwdn, 1); //activate power down input
          } 
     }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 0))  // Decoding DTMF to Numeric "2" 
    {
               if(d4 == 1) //reading std input
          {
//             lcd.print("2");//lcd write
               Serial.println("2");
               delay(200);
               digitalWrite(pwdn, 1);  //activate power down input
          } 
    }

    if ((d0 == 0) & (d1 == 0) & (d2 == 1) & (d3 == 1))   // Decoding DTMF to Numeric "3"
    {
  
               if(d4 == 1) //reading std input
          {
//             lcd.print("3");//lcd write
               Serial.println("3"); //Serial write "3"
               delay(200);
               digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 0))   // Decoding DTMF to Numeric "4"
    {
               if(d4 == 1) //reading std input
          {
//             lcd.print("4");//lcd write
               Serial.println("4");
               delay(200);
               digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 0) & (d3 == 1))   // Decoding DTMF to Numeric "5"
    {
               if(d4 == 1) //reading std input
          {
//             lcd.print("5");//lcd write
               Serial.println("5");
               delay(200);
               digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 0))   // Decoding DTMF to Numeric "6"
    {
               if(d4 == 1) //reading std input
          {
//             lcd.print("6");//lcd write
               Serial.println("6");
               delay(200);
               digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 0) & (d1 == 1) & (d2 == 1) & (d3 == 1))   // Decoding DTMF to Numeric "7"
    {
               if(d4 == 1) //reading std input
          {
//             lcd.print("7");//lcd write
               Serial.println("7");
               delay(200);
               digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 0))   // Decoding DTMF to Numeric "8"
    {
                if(d4 == 1) //reading std input
          {
//              lcd.print("8");//lcd write
                Serial.println("8");
                delay(200);
                digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 0) & (d3 == 1))   // Decoding DTMF to Numeric "9"
    {
                if(d4 == 1) //reading std input
          {
//              lcd.print("9");//lcd write
                Serial.println("9");
                delay(200);
                digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 0))   // Decoding DTMF to Numeric "0"
    {
                if(d4 == 1) //reading std input
          {
//              lcd.print("0");//lcd write
                Serial.println("0");
                delay(200);
                digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 1) & (d1 == 0) & (d2 == 1) & (d3 == 1))   // Decoding DTMF to Numeric "*"
    {
                if(d4 == 1) //reading std input
          {
//              lcd.print("*");//lcd write
                Serial.println("*");
                delay(200);
                digitalWrite(pwdn, 1);  //activate power down input
          }
    }

    if ((d0 == 1) & (d1 == 1) & (d2 == 0) & (d3 == 0))   // Decoding DTMF to Numeric "#"
    {
                if(d4 == 1) //reading std input
          {
//              lcd.print("#");//lcd write
                Serial.println("#");
                delay(200);
                digitalWrite(pwdn, 1);  //activate power down input
          }
    }


}
/*************************************************************************************************************************************************************************/

void play_dialtone (void)                 //activate Tone mode
{
      digitalWrite(rxRL, 0);              //activate receiver relay
      
        
      digitalWrite(dtmfRL, 1);            //de-activate DTMF relay
      digitalWrite(pulseRL, 1);           //de-activate pulse relay
            
       
  
  while(!Serial);
  delay(2000);
  
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
  while(1) {
    output ^= 1;
    delayCount = tone_zeroes[idx++];
    digitalWrite(rxin,output);
    delayMicroseconds(delayCount*125L);
    if (idx >= sizeof(tone_zeroes)/sizeof(tone_zeroes[0]))idx = 0;
    // This hangs the code if stopPin is grounded.
    // Or it can be used to terminate the tone and return from the
    // function by adding "break" to the while loop.
    while(digitalRead(rxout) == 0);
  }  
  digitalWrite(rxin, LOW);
}  
/*************************************************************************************************************************************************************************/
void pulse()
{
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

 Serial.print("last duration: ");
 Serial.println(dur);

 pulsecounter = 1;
 brratio = (pulsewidth - (dur))/1000;
 
 Serial.print(F (" Break Ratio: "));
 Serial.print(brratio);
 Serial.println(F (" %"));
 
}
}
/************************************************************************************************************************************************************************/

int pin = 12;
int pulse;
unsigned long duration;
unsigned long starttime;                   
unsigned long endtime;
unsigned long t;
int var = 0;
unsigned long dur;

unsigned long dur2;

void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
pulse = 1;

                    
}

void loop() {
  starttime = millis();                       // Variable for saving intial value of Timer.
endtime = starttime;    // Variable for saving final value of Timer.

if(digitalRead(pin) > var)           // Detection of Pulse "HIGH" or "LOW".
{
  

  while ((endtime - starttime) <=3000)        // do this loop for up to 1000mS
{ 
 
  duration = pulseIn(pin, HIGH);

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
