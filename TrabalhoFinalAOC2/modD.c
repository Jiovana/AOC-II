
#include "modD.h"
#include "modA.h"
#include "modB.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//tamanho total da cache
float tamTotalD(float cap, int larg, int bloco, int vias){
    int conjuntos = numConjD(cap, larg, bloco, vias);
    int offB = offsetByte(larg);
    int offW = offsetWord(bloco);
    int index = tamIndex(conjuntos);
    int tag = tamTag(larg, index, offW, offB);
    float total;
    larg = (int)bytetoBit(larg);
    printf("%i larg\n", larg);
    printf("%i bloco\n", bloco);
    printf("%i vias\n", vias);
    printf("%i conjuntos\n", conjuntos);
    total = conjuntos * (3 + tag + (larg*bloco)) * vias;
    total = bittoByte(total);
    total = bytetoKb(total);
    return total;
}

//numero de conjuntos
int numConjD(float cap, int larg, int bloco, int vias){
    int conjuntos;
    cap = kbtoByte(cap);
    conjuntos = (int)cap/(larg*bloco);
    conjuntos = conjuntos/vias;
    return conjuntos;
}



