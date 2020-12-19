
#ifndef __GENKIDAMA_H
#define __GENKIDAMA_H

#include <stdbool.h>

#define InitialPower 100
#define __DIRECTIVE_LOOP__ 1

typedef struct {
    char *Character;
    int Power;
    int Energy;
    int AcomulateEnergy;
} Genkidama;

void InfoGenk(Genkidama *Genki);

bool Send(Genkidama *Genki);


#endif