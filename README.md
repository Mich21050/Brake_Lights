# Introduction:
This is the firmware for my open source pwm controlled brake module. It's designed with esk8 in mind but can be widely adapted.
Is has an 5V 3A onboard buck converter and an Arduino Nano to controll it all. 
The schematic can be found here:  https://easyeda.com/mich21050/light_controll_basic
It's pretty simple to set up so here we go:

# Setup
1) Download the latest firmware from the release tab: 
2) Unzip the downloaded archive. Install Arduino IDE and the FASTLED Library (if you don't know how to just do a quick little google search)
3) Connect your arduino nano to the computer and upload the pwm_readout programm. Now open up the serial monitor using a baudrate of 11520.
![Screenshot_1](https://github.com/Mich21050/Brake_Lights/blob/master/Pictures/Screenshot_1.png)
4) Disable autoscroll and note down the lowest value your are given (there might be a bunch). Now subtract 10-15 from your given number.
5) Now you open up the light_control file and open the config.h file.  Now replace the generic value that is next to "threshold" (the line is marked) with your own number.

![1png](https://github.com/Mich21050/Brake_Lights/blob/master/Pictures/1png.png)

5) Replace the number next to "NUM_LEDS_PER_STRIP" with your count of leds per strip. For example I'm using two 5 led strips for the front and two 5 led strips in the back so my number is 10. If you only use one your number would be five and so on.

6) Hit upload and you are good to go.


# Troubleshooting
1) My brake light goes on when I hit the gas :)

Solution: Scroll down to the other marked line in the code and replace the "<" with an ">"... Upload and you are good to go. 

![2png](https://github.com/Mich21050/Brake_Lights/blob/master/Pictures/2.png)



# To-do
1) Add an option to turn on/off aditional led lights underneath your board using the 3rd remote channel.
2) Add horn support :)





<a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/"><img alt="Creative Commons License" style="border-width:0" src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png" /></a><br />This work is licensed under a <a rel="license" href="http://creativecommons.org/licenses/by-nc-sa/4.0/">Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International License</a>.
