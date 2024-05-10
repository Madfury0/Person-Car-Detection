This project aims in developing and prototyping a  wearable AI assisted device for the blind that will assist them in navigating crowded areas. It will have a machine learning model running locally. The model will be able to classify and recognize persons and cars and provide useful feedback. The device will also have a proximity alert system.

The machine learning model was developed on Edge impulse.This is a cloud platform that allows training and deployment of machine learning models that can run on edge devices(microcontrollers)

ESP32 will be the naster and arduino will be the slave.

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

Two direcories are required for as each microcontroller will have its own hex file. The sound.h file was placed in the arduino directory as arduino will handle the audio processing.
A power status LED is included which will show the power status of the device.

                

