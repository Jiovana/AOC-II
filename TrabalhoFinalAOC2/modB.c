
#include "modB.h"
#include "modA.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



//tamanho total da cache
float tamTotal(float cap, int larg, int bloco){
    int conjuntos = numConj(cap, larg, bloco);
    int offB = offsetByte(larg);
    int offW = offsetWord(bloco);
    int index = tamIndex(conjuntos);
    int tag = tamTag(larg, index, offW, offB);
    float total;
    larg = (int)bytetoBit(larg);
    total = conjuntos * (1 + tag + (larg*bloco));
    total = bittoByte(total);
    total = bytetoKb(total);
    return total;
}
//numero de conjuntos
int numConj(float cap, int larg, int bloco){
    int conjuntos;
    cap = kbtoByte(cap);
    conjuntos = (int)cap/(larg*bloco);
    return conjuntos;
}


int offsetWord(int bloco){
    int offset;
    offset = (int)(log10(bloco)/log10(2));
    return offset;
}

int tamIndex(int conj){
    int index;
    index = (int)((log10(conj))/(log10(2)));
    return index;
}

int tamTag(int larg, int index, int offW, int offB){
    int tag;
    larg = (int)bytetoBit(larg);
    offW = offW + 1;
    tag = larg - index - offW - offB;
    return tag;
}

int tamanhoBloco(int index, int largEnd, int overhead){
    int conj;
    int tag;
    int bitsValidade;
    int offsets; //op + ob
    int tamBloco;

    overhead = (int)bytetoBit(overhead);
    largEnd = (int)bytetoBit(largEnd);

    conj = (int)pow(2, index); //calcula o tamanho do conjunto para determinar o tamanho da tag
    bitsValidade = (int)pow(2, index);

    tag = (overhead - bitsValidade)/conj;
    offsets = (largEnd - index) - tag;

    tamBloco = (int)pow(2, offsets);
    tamBloco = (int)bytetoKb(tamBloco);

    return tamBloco;
}

