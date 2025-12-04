# ESP32-Flight-Tracker
ESP32-2432s028 Flight Tracker Using OpenSky

# Map Generation:
Maps were created using QGIS Desktop 3.40.13 with the QuickOSM and QuickMapServices plugins.

QGIS is avalible here - https://qgis.org/download/

# Custom TFT_eSPI User Set up
The version of TFT_eSPI used did not offer support for the esp32-2432s028, a custom user setup file is included here.

# Arduino IDE 2.3.6 Libraries
Arduino_JSON 0.2.0

Arduinojson 7.4.2

TFT_eSPI 2.5.43

XPT2046_Touchscreen 1.4

# Case 
A case has been made for the ESP32 Board.

This is avalible here:

# RGB565
https://marlinfw.org/tools/rgb565/converter.html was used to convert the map png from QGIS to rgb565

The header should be modified so that it reads:

#include <pgmspace.h> 

// Define the array once, with PROGMEM, so it ONLY goes to Flash memory.
// 320 * 240 = 76800
const uint16_t map_data[320*240] PROGMEM = {

and the footer should only contain: 

};


