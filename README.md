# Introduction

This project aims in developing and prototyping a  wearable AI assisted device for the blind that will assist them in navigating crowded areas. It will have a machine learning model running locally. The model will be able to classify and recognize persons and cars and provide useful feedback. The device will also have a proximity alert system.

The machine learning model was developed on google Colab(proof of concept) and  Edge impulse(running model), a cloud platform that allows training and deployment of machine learning models that can run on edge devices(microcontrollers)

## Controller communication

ESP32 will be the master and arduino will be the slave.
UART was used to handle exchange of data between thetwo microcontrollers. This was achieved by use of RX and TX pins on both microcontrollers

ESP32 was used to handle:
                >> Image recognition and processing.
                >> Proximity system
                >> proximity alert mechanism
Arduino was used to handle:
                >> Audio processing
                >> Power indicator


    +++++++++++     +++++++++++     +++++++++++
    +  ESP32  +---->+ ARDUINO +---->+ SPEAKER +
    + master  +     + slave   +     +         +
    +++++++++++     +++++++++++     +++++++++++

[Level shifter](https://electronics.stackexchange.com/questions/81580/step-up-3-3v-to-5v-for-digital-i-o) allows communication between esp32 and Arduino.

HardwareSerial is used to initilize esp32 as the master and SoftwareSerial initializes arduino as the slave.

Two directories are required for as each microcontroller will have its own hex file. 
The sound.h file was placed in the arduino directory as arduino will handle the audio processing.
Progmem ensures that the audio array was stored in program memory of the arduino.
strcpy_P copies the audio file from program memory to RAM
A power status LED is included which will show the power status of the device.

## Machine Learning model

The model has an architecture of:
- Three convolution layers(128,64 and 64 nodes respectively)
- A flatten layer
- Maxpooling layer
- A single dense layer
- Training has 15 epochs, with a learning rate of 0.0005

---

                3/6/2024

            COMPONENTS REQUIRED:
                - Esp32cam
                - Arduino UNO
                - Amplifier IC
                - Ultrasonic sensor
                - Vibration motor
                - Speaker
                - Resistors
                - Capacitors
                - Wires
                - Leds

---

## Circuit connection

- RX pin of ESP32CAM was connected to TX pin of the arduino and the TX pin of the ESP32CAM was connected to RX pin of the arduino.
- The amplifier IC input pin was interfaced with arduino's pin A9. 
- The output pin of the amplifier was connected to the speaker positive pin. 
- Ultrasonic sensor pins were interfaced to the esp32cam as follows:
        Echo pin 
        Trig pin 
        Positive pin 
        Ground pin  
- The motor was interfaced to pin {} of the esp32cam

                

