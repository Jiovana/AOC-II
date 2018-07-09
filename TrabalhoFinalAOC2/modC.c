#include "modC.h"
#include <stdio.h>
#include <stdlib.h>

float calculaCPI2Caches(float freq, int latMP, int latCD2, int latCI2, float CPI, float taxCD1, float taxCI1, float taxCD2, float taxCI2, float perDados){
    float tempciclo = 1/freq;
    float ram = latMP/tempciclo, cacheD2 = latCD2/tempciclo, cacheI2 = latCI2/tempciclo;

    float ciclosL1I = (taxCI1/100) * cacheI2; //ciclos extras para falhas lvl 1 de instrucoes
    printf("\nCiclos L1 I = %.2f\n", ciclosL1I);

    float ciclosL2I = (taxCI1/100)*(taxCI2/100) * ram; //ciclos extras para falhas lvl 2 de instrucoes
    printf("Ciclos L2 I = %.2f\n", ciclosL2I);

    float ciclosL1D = (perDados/100)*(taxCD1/100)*cacheD2; //ciclos extras para falhas lvl 1 de dados
    printf("Ciclos L1 D = %.2f\n", ciclosL1D);

    float ciclosL2D = (perDados/100)*(taxCD1/100)*(taxCD2/100)*ram; //ciclos extras para falhas lvl 2 de dados
    printf("Ciclos L2 D = %.2f\n", ciclosL2D);

    float final = CPI + ciclosL1I + ciclosL2I + ciclosL1D + ciclosL2D;
    return final;
}


float calculaCPI1Cache(float freq, int latMP, float CPI, float taxCD1, float taxCI1, float perDados){
    float tempciclo = 1/freq;
    float ram = latMP/tempciclo;

    float ciclosI = (taxCI1/100) * ram;
    printf("\nCiclos L1 I = %.2f\n", ciclosI);

    float ciclosD = (perDados/100)*(taxCD1/100)*ram;
    printf("Ciclos L1 D = %.2f\n", ciclosD);


    float final = CPI + ciclosI + ciclosD;
    return final;
}
