#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libs/genkidama.h"

int main() {
    //static int acp = 0;
    char Name[20];
    printf("Ingrese el nombre del personaje: ");
    scanf("%s", &Name);
    Genkidama Genk;
    Genk.Character = malloc(strlen(Name) * sizeof(char));
    strcpy(Genk.Character, Name);
    Genk.Energy = 900;
    Genk.Power = 500;
    Genk.AcomulateEnergy = 0;
    InfoGenk(&Genk);

    while(__DIRECTIVE_LOOP__) {
        int p;
        bool val;
        printf("Inserte cuanta energia dese enviar: ");
        scanf("%d", &p);
        Genk.AcomulateEnergy += p;
        val = Send(&Genk);
        if(val == true) {
            break;
        }
    }

    printf("%s has logrado derrotar al enemigo", Genk.Character);

    free(Genk.Character);
    return 0;
}