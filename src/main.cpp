#include <Arduino.h>

#include "pitches.h"

const int buzzerPin = 2; // for ESP32 Microcontroller
// setting PWM properties
const int freq = 5000;
const int ledChannel = 0;
const int resolution = 8;

void beep(int note, int duration)
{
  ledcWriteTone(ledChannel, note);
  delay(duration);
}

void setup()
{
  // configure LED PWM functionalitites
  ledcSetup(ledChannel, freq, resolution);

  // attach the channel to the GPIO to be controlled
  ledcAttachPin(buzzerPin, ledChannel);
}

void loop()
{
  for (int i = 0; i < 4; i++)
  {
    beep(NOTE_G4, 500);
    // noTone(speakerPin);
    beep(NOTE_C4, 500);
    // noTone(speakerPin);
    beep(NOTE_DS4, 250);
    // noTone(speakerPin);
    beep(NOTE_F4, 250);
    // noTone(speakerPin);
  }
  for (int i = 0; i < 4; i++)
  {
    beep(NOTE_G4, 500);
    // noTone(speakerPin);
    beep(NOTE_C4, 500);
    // noTone(speakerPin);
    beep(NOTE_E4, 250);
    // noTone(speakerPin);
    beep(NOTE_F4, 250);
    // noTone(speakerPin);
  }
  beep(NOTE_G4, 500);
  // noTone(speakerPin);
  beep(NOTE_C4, 500);
  beep(NOTE_DS4, 250);
  // noTone(speakerPin);
  beep(NOTE_F4, 250);
  // noTone(speakerPin);
  beep(NOTE_D4, 500);
  // noTone(speakerPin);
  for (int i = 0; i < 3; i++)
  {
    beep(NOTE_G3, 500);
    // noTone(speakerPin);
    beep(NOTE_AS3, 250);
    // noTone(speakerPin);
    beep(NOTE_C4, 250);
    // noTone(speakerPin);
    beep(NOTE_D4, 500);
    // noTone(speakerPin);
  }
  beep(NOTE_G3, 500);
  // noTone(speakerPin);
  beep(NOTE_AS3, 250);
  // noTone(speakerPin);
  beep(NOTE_C4, 250);
  // noTone(speakerPin);
  beep(NOTE_D4, 1000);
  // noTone(speakerPin);

  beep(NOTE_F4, 1000);
  // noTone(speakerPin);
  beep(NOTE_AS3, 1000);
  // noTone(speakerPin);
  beep(NOTE_DS4, 250);
  // noTone(speakerPin);
  beep(NOTE_D4, 250);
  // noTone(speakerPin);
  beep(NOTE_F4, 1000);
  // noTone(speakerPin);
  beep(NOTE_AS3, 1000);
  // noTone(speakerPin);
  beep(NOTE_DS4, 250);
  // noTone(speakerPin);
  beep(NOTE_D4, 250);
  // noTone(speakerPin);
  beep(NOTE_C4, 500);
  // noTone(speakerPin);
  for (int i = 0; i < 3; i++)
  {
    beep(NOTE_GS3, 250);
    // noTone(speakerPin);
    beep(NOTE_AS3, 250);
    // noTone(speakerPin);
    beep(NOTE_C4, 500);
    // noTone(speakerPin);
    beep(NOTE_F3, 500);
    // noTone(speakerPin);
  }
  beep(NOTE_G4, 1000);
  // noTone(speakerPin);
  beep(NOTE_C4, 1000);
  // noTone(speakerPin);
  beep(NOTE_DS4, 250);
  // noTone(speakerPin);
  beep(NOTE_F4, 250);
  // noTone(speakerPin);
  beep(NOTE_G4, 1000);
  // noTone(speakerPin);
  beep(NOTE_C4, 1000);
  // noTone(speakerPin);
  beep(NOTE_DS4, 250);
  // noTone(speakerPin);
  beep(NOTE_F4, 250);
  // noTone(speakerPin);
  beep(NOTE_D4, 500);
  // noTone(speakerPin);
  for (int i = 0; i < 4; i++)
  {
    beep(NOTE_G3, 500);
    //    noTone(speakerPin);
    beep(NOTE_AS3, 250);
    //  noTone(speakerPin);
    beep(NOTE_C4, 250);
    // noTone(speakerPin);
    beep(NOTE_D4, 500);
    //  noTone(speakerPin);
  }
}
