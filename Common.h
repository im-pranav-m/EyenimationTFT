#ifndef COMMON_h
#define COMMON_h

#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

static constexpr uint8_t TFT_CS_PIN = 5;
static constexpr uint8_t TFT_DC_PIN = 2;
static constexpr uint8_t TFT_RST_PIN = 4;

extern Adafruit_ST7789 tft;

static constexpr uint16_t DISPLAY_WIDTH = 240;
static constexpr uint16_t DISPLAY_HEIGHT = 320;
static constexpr uint8_t DISPLAY_ROTATION = 0;

static constexpr uint16_t COLOR_BACKGROUND = ST77XX_BLACK;
static constexpr uint16_t COLOR_EYE = ST77XX_WHITE;

#endif
