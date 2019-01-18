# Introduction:
This is the firmware for my open source pwm controlled brake module. It's designed with esk8 in mind but can be widely adapted.
Is has an 5V 3A onboard buck converter and an Arduino Nano to controll it all. 
The schematic can be found here:  https://easyeda.com/mich21050/light_controll_basic
It's pretty simple to set up so here we go:

# Setup
1) Download the lastest firmware from the release tab: 
2) Unzip the downloaded archive.Install Arduino IDE and the FASTLED Library (if you don't know how to just do a quick little google search)
3) Connect your arduino to the comupter and upload the pwm_readout programm. Now open up the serial monitor using a baudrate of 11520.
4) Disable autoscroll and note down the value your are given. Now add 5 to your given number.
5) Now you open the vXX file and replace the generic value that is next to "on" (the line is marked) with your own number.
6) Hit upload and you are good to go.


# Troubleshooting
1) My brake light goes on when I hit the gas :)

Solution: Scroll down to the other marked line in the code and replace the ">" with an "<"... Upload and you are good to go. 
