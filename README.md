# esp32Screen

This project will be to use a TZT 1.14 Inch IPS OLED Display Module with an esp32

The project uses the TFT_eSPI graphics library

## Pin Connections

This is the pin configuration I used for this project.

| ST7789V Pin | ESP32 Pin |
|-------------|-----------|
| GND         | GND       |
| VCC         | 3.3V      |
| SCL (CLK)   | GPIO18    |
| SDA (MOSI)  | GPIO 23   |
| RES (RST)   | GPIO 4    |
| DC (D/C)    | GPIO 2    |
| CS          | GPIO 5    |
| BLK         | GPIO 16   |

## Configuring your User_Setup.h

So it seems we need to use the User_Setup.h file for configuration of our device. 

There have been a few different attempts to make it so that it can be configured project side but it seems to hit a bit of a brick wall.

The settings needed can be found within the TFT_Setup.h file.

Open this file up, copy the contents and find the User_Setup.h file

For me, this was found at
```
C:\Users\{USER_NAME}\Documents\Arduino\libraries\TFT_eSPI\User_Setup.h
```

You can either configure your setup by following the instructions, or comment out the whole file and paste at the end.