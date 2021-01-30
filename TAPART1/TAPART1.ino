
#define dialoridp_test 2
#define ringtest 3
#define receivertest 4
#define transmittertest 5
#define answerbutton 6
#define manualbutton 7
#define teleorcall_test 8
#define incomingoroutgoingcalls 9
#define repeatcalls 10
#define manaulorauto 11

#define powerRL 16
#define ringRL 17
#define txRL 15

void setup()
{
  pinMode(dialoridp_test, INPUT);
  pinMode(ringtest, INPUT);
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
  
  Serial.begin(9600);
 
}

void loop()
{
  
}

int power()
{       
      digitalWrite(powerRL, 0);       //de-activate Telephone relay
      
      digitalWrite(ringRL, 1);        //activate ring relay
      digitalWrite(txRL, 1);          //de-activate transmitter relay
      
}


int ring()
{     
      digitalWrite(ringRL, 0);        //activate ring relay
      
      digitalWrite(powerRL, 1);       //de-activate Telephone relay
      digitalWrite(txRL, 1);          //de-activate transmitter relay
      
}

int transmitter()
{
      digitalWrite(powerRL, 0);        //activate ring relay
      digitalWrite(txRL, 0);   
       
      digitalWrite(ringRL, 1);       //de-activate Telephone relay
                                     //de-activate transmitter relay


}
