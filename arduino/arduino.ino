/*
This will handle audio playing after receiving a trigger from esp32

SoftwareSerial will be used to innitialize the communication between the two controllers.

TMRpcm will handle the audio processing

The sound.h file will hold the data containing the audio files

Power LED will indicate if the device is ON
*/

#include <Arduino.h>
#include <SoftwareSerial.h>
#include "TMRpcm.h"
#include "sound.h"

#define RX **
#define TX **
#define powerLED 15

SoftwareSerial mySerial(RX, TX);


void setup(){
	mySerial.begin (9600);
	pinMode (powerLED, OUTPUT);
	analogWrite (powerLED, 80); //limits brightness

	}

void loop()
	{
	if (mySerial.available()) {
    String message = mySerial.readStringUntil('\n');
    if (message == "Person detected") {
      //play person audio logic
    }
    else if (message == "Car detected") {
    //play car audio logic

    }
  }
	}

void PlayAudio (){
//Use TMRpcm to play the audio file

}
