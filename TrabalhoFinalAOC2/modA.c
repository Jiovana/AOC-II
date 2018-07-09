#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "modA.h"

//funcoes de conversao de unidades

float bytetoBit(float x){
    x = x * 8;
    return x;
}

float bittoByte(float x){
    x = x / 8;
    return x;
}

float kbtoByte(float x){
    x = x * 1024;
    return x;
}

float bytetoKb(float x){
    x = x / 1024;
    return x;
}

//funcoes principais
float tamanhoTotal(float cap, int largura){
    int conjuntos = numConjuntos(cap, largura);
    int offset = offsetByte(largura);
    int index = tamanhoIndex(conjuntos);
    int tag = tamanhoTag(largura, index, offset);
    float total;
    largura = (int)bytetoBit(largura);
    total = conjuntos * (1 + tag + largura);
    total = bittoByte(total);
    total = bytetoKb(total);
    return total;
}

int numConjuntos(float cap, int largura){
    int conjuntos;
    cap = kbtoByte(cap);
    conjuntos = (int)cap/largura;
    return conjuntos;
}

int offsetByte(int largura){
    int offset;
    offset = (int)(log10(largura)/log10(2));
    return offset;
}

int tamanhoIndex(int conjuntos){
    int index;
    index = (int)((log10(conjuntos))/(log10(2)));
    return index;
}

int tamanhoTag(int largura, int index, int offset){
    int tag;
    largura = (int)bytetoBit(largura);
    tag = largura - index - offset;
    return tag;
}




