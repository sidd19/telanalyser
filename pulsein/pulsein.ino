int pin = 7;
unsigned long a1;
unsigned long br;
unsigned long duration;
int pulse = 0; // Variable for saving pulses count.
int var = 0;


void setup() {
  Serial.begin(9600);
  pinMode(pin, INPUT);
  Serial.println(F("No pulses yet..."));
}

void loop() {

//if(digitalRead(pin) > var)
//  {
//    var = 1;
//    pulse++;
//   
//    Serial.print(pulse);
//    Serial.print(F(" pulse"));
//
//    // Put an "s" if the amount of pulses is greater than 1.
//    if(pulse > 1) {Serial.print(F("s"));}
//   
//    Serial.println(F(" detected."));
//  }
// 
//  if(digitalRead(pin) == 0) {var = 0;}
// 
//  delay(1); // Delay for stability.
 
  duration = pulseIn(pin, HIGH);
 if(duration > 0)
 {
  Serial.println("duration detected");
  Serial.println(duration/1000);
   {
   a1 = duration;
   br = (100-a1)*100;
   Serial.println("BR %");
   Serial.println(br);
   }
 }
  
 }
