// === User_Setup.h / Custom Profile for GUITION ESP32-2432S028 ===

#define ILI9341_DRIVER       // Generic driver works best for CYD
#define TFT_WIDTH  320
#define TFT_HEIGHT 240

// --- CORRECT PINS FOR CYD ---
#define TFT_MISO 12
#define TFT_MOSI 13
#define TFT_SCLK 14
#define TFT_CS   15
#define TFT_DC   2
#define TFT_RST  -1          // Tied to EN on this board
#define TFT_BL   21          // Backlight pin

#define TFT_BACKLIGHT_ON HIGH

#define SPI_FREQUENCY      55000000
#define SPI_READ_FREQUENCY 20000000
#define SPI_TOUCH_FREQUENCY 2500000

// Depending on the specific batch of the screen, you might need
// to comment/uncomment the inversion line.
#define TFT_INVERSION_OFF 
// #define TFT_INVERSION_ON

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_GFXFF
