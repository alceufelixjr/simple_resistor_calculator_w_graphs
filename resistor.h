#ifndef _RESISTOR_H
#define _RESISTOR_H

#include "band.h"

#define MAX_RESISTOR_BANDS 4

typedef struct Resistor Resistor;

Resistor* createResistor();

void addBandToResistor(Resistor* r, Band* band);

void calculateResistance(Resistor* r);

void printResistor(Resistor* r);

void deallocateResistor(Resistor* r);


#endif