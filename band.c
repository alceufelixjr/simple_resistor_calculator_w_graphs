#include "band.h"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct Band
{
    char* color;
    int value;
};

Band* createBand(char* color, int value)
{
    Band* band = (Band*) malloc (sizeof(Band));
    band->color = color;
    band->value = value;

    return band;
}

int calculateBand(char* color)
{
    if(strcmp(color,"BLACK") == 0) return BLACK;
    else if (strcmp(color,"BROWN") == 0) return BROWN;
    else if (strcmp(color,"RED") == 0) return RED;
    else if (strcmp(color,"ORANGE") == 0) return ORANGE;
    else if (strcmp(color,"YELLOW") == 0) return YELLOW;
    else if (strcmp(color,"GREEN") == 0) return GREEN;
    else if (strcmp(color,"BLUE") == 0) return BLUE;
    else if (strcmp(color,"PURPLE") == 0 || strcmp(color,"VIOLET") == 0) return PURPLE;
    else if (strcmp(color,"GRAY") == 0) return GRAY;
    else if (strcmp(color,"WHITE") == 0) return WHITE;
    else return -1;
}

Band* readBand()
{
    char* color = readString1();
    int value = calculateBand(color);

    return createBand(color,value);
}

int getValueBand(Band* band)
{
    return band->value;
}

char* getColorBand(Band* band)
{
    return band->color;
}

void deallocateBand(Band* band)
{
    free(band->color);
    free(band);
}



