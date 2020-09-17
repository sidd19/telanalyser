volatile int IRQcount;
int pin = A2;
int pin_irq = 0; //IRQ that matches to pin 2
int result = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (9600);
  pinMode(2, INPUT);
  attachInterrupt(pin_irq, IRQcounter, RISING);
}

void IRQcounter() {
  IRQcount++;
}

void loop() {
  // put your main code here, to run repeatedly:

  cli();//disable interrupts
  IRQcount = 0;
  sei();//enable interrupts

  delay(20);

  cli();//disable interrupts
  result = IRQcount;
  sei();//enable interrupts

  Serial.println(F("Counted = "));
  Serial.println(result);
}
