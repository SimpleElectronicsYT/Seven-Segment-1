/*
 * This code is written by SimpleElectronics (www.YouTube.com/SimpleElectronics) 
 * and is free to use, modify, distribute etc... 
 * This is not likely to be amazing code form, style or fomality, but it does
 * work and that's what I was aiming for.
 * 
 * Always remeber: having fun and learning are the two most important aspects of life.
 */
 
const int periodSeg = 13;
const int lowerRSeg = 12;
const int middleSeg = 11;
const int upperRSeg = 10;
const int topSeg = 9;
const int upperLSeg = 8;
const int lowerLSeg = 7;
const int bottomSeg = 6;
//giving each segment a name and assigning a pin

const int waitOne = 250;
const int waitTwo = 125;
const int waitThree = 1000;
//setting up a delay time in mS for each different delay we want

void setup() {

pinMode(periodSeg, OUTPUT);
digitalWrite(periodSeg, HIGH);

pinMode(lowerRSeg, OUTPUT);
digitalWrite(lowerRSeg, HIGH);

pinMode(middleSeg, OUTPUT);
digitalWrite(middleSeg, HIGH);

pinMode(upperRSeg, OUTPUT);
digitalWrite(upperRSeg, HIGH);

pinMode(topSeg, OUTPUT);
digitalWrite(topSeg, HIGH);

pinMode(upperLSeg, OUTPUT);
digitalWrite(upperLSeg, HIGH);

pinMode(lowerLSeg, OUTPUT);
digitalWrite(lowerLSeg, HIGH);

pinMode(bottomSeg, OUTPUT);
digitalWrite(bottomSeg, HIGH);
//setting up each segment pin as an output and
//setting them HIGH to ensure they are off (if common power)

}

void loop() {
 
digitalWrite(periodSeg, LOW);
delay(waitOne);
digitalWrite(periodSeg, HIGH);
delay(waitOne);
digitalWrite(periodSeg, LOW);
delay(waitOne);
digitalWrite(periodSeg, HIGH);
delay(waitOne);
digitalWrite(periodSeg, LOW);
delay(waitOne);
digitalWrite(periodSeg, HIGH);
delay(waitOne);
//making a quick three flashes of the period

digitalWrite(lowerRSeg, LOW);
delay(waitTwo);
digitalWrite(lowerRSeg, HIGH);

digitalWrite(upperRSeg, LOW);
delay(waitTwo);
digitalWrite(upperRSeg, HIGH);

digitalWrite(topSeg, LOW);
delay(waitTwo);
digitalWrite(topSeg, HIGH);

digitalWrite(upperLSeg, LOW);
delay(waitTwo);
digitalWrite(upperLSeg, HIGH);

digitalWrite(lowerLSeg, LOW);
delay(waitTwo);
digitalWrite(lowerLSeg, HIGH);

digitalWrite(bottomSeg, LOW);
delay(waitTwo);
digitalWrite(bottomSeg, HIGH);
//making the segments go around in a circle

digitalWrite(lowerRSeg, LOW);
delay(waitTwo);
digitalWrite(lowerRSeg, HIGH);

digitalWrite(upperRSeg, LOW);
delay(waitTwo);
digitalWrite(upperRSeg, HIGH);

digitalWrite(topSeg, LOW);
delay(waitTwo);
digitalWrite(topSeg, HIGH);

digitalWrite(upperLSeg, LOW);
delay(waitTwo);
digitalWrite(upperLSeg, HIGH);

digitalWrite(lowerLSeg, LOW);
delay(waitTwo);
digitalWrite(lowerLSeg, HIGH);

digitalWrite(bottomSeg, LOW);
delay(waitTwo);
digitalWrite(bottomSeg, HIGH);
//making the segments go around in a circle

digitalWrite(lowerRSeg, LOW);
delay(waitTwo);
digitalWrite(lowerRSeg, HIGH);

digitalWrite(upperRSeg, LOW);
delay(waitTwo);
digitalWrite(upperRSeg, HIGH);

digitalWrite(topSeg, LOW);
delay(waitTwo);
digitalWrite(topSeg, HIGH);

digitalWrite(upperLSeg, LOW);
delay(waitTwo);
digitalWrite(upperLSeg, HIGH);

digitalWrite(lowerLSeg, LOW);
delay(waitTwo);
digitalWrite(lowerLSeg, HIGH);

digitalWrite(bottomSeg, LOW);
delay(waitTwo);
digitalWrite(bottomSeg, HIGH);

delay(waitThree);

}
