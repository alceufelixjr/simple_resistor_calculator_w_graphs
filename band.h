#ifndef _BAND_H
#define _BAND_H

#include "readString.h"

#define BLACK 0
#define BROWN 1
#define RED 2
#define ORANGE 3
#define YELLOW 4
#define GREEN 5
#define BLUE 6
#define PURPLE 7
#define GRAY 8
#define WHITE 9

typedef struct Band Band;

Band* createBand(char* color, int value);

int calculateBand(char* color);

Band* readBand();

int getValueBand(Band* band);

char* getColorBand(Band* band);

void deallocateBand(Band* band);

#endif