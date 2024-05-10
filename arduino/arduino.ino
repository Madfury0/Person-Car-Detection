/*
This will handle audio playing after receiving a trigger from esp32

SoftwareSerial will be used to innitialize the communication between the two controllers.

TMRpcm will handle the audio processing

The sound.h file will hold the data containing the audio files

Power LED will indicate if the device is ON
*/

#include <Arduino.h>
#include "SoftwareSerial.h"
#include "TMRpcm.h"
#include "sound.h"

#define RXpin **
#define TXpin **
#define powerLED 15


void setup(){
	Serial.begin (9600); //serial monitor

	/*
	serial innitialition code goes here
	*/


	pinMode (powerLED, OUTPUT)
	analogWrite (powerLED, 80) //limits brightness

	}

void loop()
	{
	Serial.println ("Awaiting ESP32 message")
	message = Serial2.read()
	if ( message.text == "person" ){
	//play person audio
	delay (200)
	}
	else{
	//play car audio
	delay (200)

	}

	}
