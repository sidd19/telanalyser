int pin = 12;
int pulse;
unsigned long duration;
unsigned long starttime;                   
unsigned long endtime;
int var = 0;
unsigned long dur;

unsigned long dur2;
unsigned long pulsewidth = 100000;
unsigned long brratio;

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
  

  while ((endtime - starttime) <=1100)        // do this loop for up to 1000mS
{ 
 
  duration = pulseIn(pin, HIGH);

  if (duration > 2000)
  {
   pulse++ ;
  Serial.println(duration);
  Serial.println(":    ");
  Serial.println(pulse);
  dur = duration;
  dur2 = endtime;
  }
 endtime  = millis(); 
   
}

 Serial.print("last duration: ");
 Serial.println(dur);
 Serial.print("Endtime :  ");
 Serial.println(dur2);
 pulse = 1;
 brratio = (pulsewidth - (dur))/1000;
 
 Serial.print(F (" Break Ratio: "));
 Serial.print(brratio);
 Serial.println(F (" %"));
 
}
}
//}
