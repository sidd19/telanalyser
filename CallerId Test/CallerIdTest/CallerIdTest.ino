#include "dtmfgen.h"
  
DTMFGenerator dtmf;
  
void setup()
{
}
  
void loop()
{
 // Generate 100ms long DTMF tone for digit 5. 
 dtmf.generate('5', 100);
}
