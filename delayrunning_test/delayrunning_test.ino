int led = 13;
unsigned long delayStart = 0; // the time the delay started
bool delayRunning = false; // true if still waiting for delay to finish

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);   // initialize the digital pin as an output.
  digitalWrite(led, HIGH); // turn led on

  delayStart = millis();   // start delay
 
}

void loop() {
digitalWrite(led, HIGH); // turn led on
   delayRunning = true; // not finished yet

   
  // check if delay has timed out after 10sec == 10000mS
  if (delayRunning && ((millis() - delayStart) >= 1000)) {
    delayRunning = false; // // prevent this code being run more then once
    digitalWrite(led, LOW); // turn led off
    Serial.println("Turned LED Off");
  }
//  Other loop code here . . .
 // Serial.println("Run Other Code");
  Serial.println(delayStart);
}
