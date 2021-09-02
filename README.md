### BT LED Dimmer ###
Project with firmware for Arduino UNO and applications for controlling it via bluetooth.

You can manage your LED on PWM using app which connects to HC-06 module. 
A slider and fade-in and fade-off buttons are available for control.
## Components ##
* **Board** - Arduino Uno
* **BT Module** - HC-06


## Connection ##
Connect RX and TX **only** after uploading the firmware and shutdown. Otherwise, you won't be able to upload it.

| Component's pin | Arduino pin |
|-----------------|-------------|
| HC-06's VCC     | 5v          |
| HC-06's GND     | GND         |
| HC-06's RX      | TX          |
| HC-06's TX      | RX          |
| LED +           | ~11         |
| LED -           | GND         |

## App ##
The dimmer project includes a Bluetooth connection and control application for Android. 
The app was created using AppInventor.

_Before proceeding, make sure installation from unknown sources is enabled on Android in Settings -> Security_
1. Download PWM_LED App.apk from 
[Releases](https://github.com/artm04/bt-led-dimmer/releases/download/v1.0/PWM_LED01.apk).
2. Open file from your phone.
3. Click "Install" and then "Open" to launch it.

## Instructions ##
1. When you install the app, make sure that everything is properly connected.
2. Open the Bluetooth settings.
3. Select HC-06 device in list and connect to it.
4. Go to the PWM_LED application.
5. Click Search Devices. The HC-06 device will be shown. Click on it to select.
6. As soon as the State under the slider says "Connected", you can control the brightness using the slider.

## AppInventor ##
You can also check out app on 
[AppInventor Gallery](https://gallery.appinventor.mit.edu/?galleryid=847a7e4b-ad58-449a-a7a8-52a7ec9c2327). 
If you want to see code of app and change it - please click "Load App Into MIT App Inventor". You can also contribute by
exporting your project.
