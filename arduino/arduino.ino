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
#define speakerPin 9

SoftwareSerial mySerial(RX, TX);
TMRpcm tmrpcm; //creates an object name tmrpcm

static const char car_wav[] PROGMEM = car_wav []; //car audio wav file stored locally
static const char person_wav [] PROGMEM = person_wav []; // person audio wav file stored locally


// audio files table
const char *wav_table []{
	person_wav[],
	car_wav[]

	}


void setup() {
	mySerial.begin (9600);
	tmrpcm.speakerPin = speakerPin;

	pinMode (powerLED, OUTPUT);
	analogWrite (powerLED, 80); //limits brightness

	}

void loop() {
	if (mySerial.available()) {
		String message = mySerial.readStringUntil('\n');
		char wavFile[];

		if (message == "Person detected") {
			//play person audio logic
			strcpy_P(wavFile, wav_table[0]);
			tmrpcm.play(wavFile);
			}

		else if (message == "Car detected") {
			//play car audio logic
			strcpy_P(wavFile, wav_table[1];
			tmrpcm.play(wavFile);
			}
		}
	}
