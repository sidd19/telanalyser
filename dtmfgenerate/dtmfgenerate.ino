#include <Tone.h>
const long TONE_DURATION = 250;   // Milliseconds
const long TEST_DURATION = 4000;  // For tweaking waveform


Tone rowPlayer;
Tone colPlayer;

const int ROW_TONE_DIO = 12;
const int COL_TONE_DIO = 11;


void setup(){

Serial.begin(9600);

 rowPlayer.begin(ROW_TONE_DIO);
  colPlayer.begin(COL_TONE_DIO);

}


void loop(){


dtmfON(1);
 /// delay(TONE_DURATION);
  dtmfOFF();
  
  
}



void dtmfOFF() {
  rowPlayer.stop();
  colPlayer.stop();
  return;
}

void dtmfON(char c) {

  Serial.println();
  Serial.println("In dtmfON() - c = '" + String(c) + "'");

 // Serial.print(" Row tone: " + String(dtmfRow[row]));
 // Serial.println("Hz,  Col tone: " + String(dtmfCol[col]) + "Hz");


  rowPlayer.play(941);
  colPlayer.play(1633);
  delay(150);
  dtmfOFF();
 delay(250);

 rowPlayer.play(697);
  colPlayer.play(1477);
  delay(150);
  dtmfOFF();
 delay(250);

 rowPlayer.play(697);
  colPlayer.play(1477);
  delay(150);
  dtmfOFF();
 delay(200);

 rowPlayer.play(697);
  colPlayer.play(1477);
  delay(150);
  dtmfOFF();
 delay(200);

 rowPlayer.play(852);
  colPlayer.play(1633);
  delay(100);
  dtmfOFF();
 delay(1000);
 // rowPlayer.play(697);
  //colPlayer.play(1209);
  //delay(70);
  //dtmfOFF();
//  delay(30);
//  rowPlayer.play(697);
//  colPlayer.play(1336);
//  delay(50);
//  dtmfOFF();
//  delay(30);
//  rowPlayer.play(697);
//  colPlayer.play(1477);
//  delay(50);
//  dtmfOFF();
//  delay(30);
//  rowPlayer.play(770);
//  colPlayer.play(1209);
//  delay(50);
//  dtmfOFF();
//  delay(30);
//  rowPlayer.play(770);
//  colPlayer.play(1336);
//  delay(50);
//  dtmfOFF();
//  delay(30);
//  rowPlayer.play(852);
//  colPlayer.play(1633);
//  delay(50);
//  dtmfOFF();
//  delay(30);
}
