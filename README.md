This project aims in developing and prototyping a  wearable AI assisted device for the blind that will assist them in navigating crowded areas. It will have a machine learning model running locally. The model will be able to classify and recognize persons and cars and provide useful feedback. The device will also have a proximity alert system.

The machine learning model was developed on google Colqb amd  Edge impulse, a cloud platform that allows training and deployment of machine learning models that can run on edge devices(microcontrollers)

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

Two directories are required for as each microcontroller will have its own hex file. The sound.h file was placed in the arduino directory as arduino will handle the audio processing.
A power status LED is included which will show the power status of the device.


                Machine Learning model
The model has an architecture of:
        • Three convolution layers(128,64 and 64 nodes respectively)
        • A flatten layer
        • Maxpooling layer
        • A single dense layer
    Training has 15 epochs, with a learning rate of 0.0005.
                

