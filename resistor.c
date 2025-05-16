#include "resistor.h"

#include <stdlib.h>

struct Resistor
{
    Band** bands;
    int rValue;
    int nBands;
};

Resistor* createResistor()
{
    Resistor* r = (Resistor*) malloc (sizeof(Resistor)*MAX_RESISTOR_BANDS);
    r->rValue = 0;
    r->nBands = 0;

    return r;
}

void addBandToResistor(Resistor* r, Band* band)
{
    if(r->nBands <= MAX_RESISTOR_BANDS)
    {
        r->bands[r->nBands++] = band;
    }
    else 
        deallocateBand(band);
}

int calculateResistance(int nBands);

void setResistance(Resistor* r)
{
    r->rValue += calculateResistance(r->nBands);
}

void printResistor(Resistor* r);

void deallocateResistor(Resistor* r);
