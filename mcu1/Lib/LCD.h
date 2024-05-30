#ifndef lcd_h
#define lcd_h

#include <stdio.h>
#include "../Lib/ili9340.h"
#include "../Lib/fontx.h"
#include "../Lib/decode_png.h"
#include "../Lib/pngle.h"



TickType_t PNGTest(TFT_t * dev, char * file, int width, int height) ;
void ShowPngImage(TFT_t * dev, char * file, int width, int height, int xpos, int ypos) ;
void listSPIFFS(char * path);
esp_err_t mountSPIFFS(char * path, char * label, int max_files);
#endif

