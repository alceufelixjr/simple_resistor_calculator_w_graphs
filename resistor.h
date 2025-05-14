#ifndef _RESISTOR_H
#define _RESISTOR_H

#include "band.h"



typedef struct Resistor Resistor;

struct Resistor
{
    Band** bands;
    int rValue;
    int nBands;
    int nBandsAlloc;
};

Resistor* createResistor();

void addBandToResistor(Resistor* r, Band* band);




#endif