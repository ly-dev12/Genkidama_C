#include <stdio.h>
#include <stdbool.h>

#include "genkidama.h"

void InfoGenk(Genkidama *Genki) {
    printf("Character Name -> %s \n", Genki->Character);
    printf("Energi -> %d \n", Genki->Energy);
    printf("Power -> %d \n", Genki->Power);
}

bool Send(Genkidama *Genki) {
    if(Genki->AcomulateEnergy > Genki->Energy) {
        printf("Has logrado completar la genkidama %d/%d \n", Genki->AcomulateEnergy, Genki->Energy);
        return true;
    }else {
        return false;
    }
}