/**
 * Blinking LED Example
 */
/*
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
*/

/**
 * Serial Printing
 */
/*
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println("Hello World!");
  delay(5000);
}
*/

/**
 * Analogue IO
 */
/*
const int sensorPin = A0;
const int outputPin = 9;

int sensorValue = 0;
int outputValue = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  analogWrite(outputPin, outputValue);
  Serial.println("Sensor: " + String(sensorValue) + " / 1023");
  Serial.println("Output: " + String(outputValue) + " / 255");
  delay(1);
}
*/

/**
 * Tone Generator
 */

#include "lib/pitches.h"

int melody[] = {
  NOTE_DS3, NOTE_FS3, NOTE_AS3, NOTE_AS3, NOTE_AS3, NOTE_B3, 0, 
  NOTE_B3, NOTE_AS3, NOTE_AS3, NOTE_B3, NOTE_B3, NOTE_AS3, NOTE_GS3
};

int noteDurations[] = {
  8, 8, 4, 4, 4, 8, 2, 
  4, 8, 8, 8, 4, 4, 8
};

void setup() {
  for (int thisNote = 0; thisNote < 14; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(9, melody[thisNote], noteDuration);
    
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    noTone(9);
  }
}

void loop() {
  setup();
  delay(5000);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
}
