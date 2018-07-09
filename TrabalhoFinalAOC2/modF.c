#include "modF.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int* escrita3(int dado, int* vetor, int* discos, int n_disco, int tam){
    int x;
    if(tam == 4){
        switch (n_disco) {
            case 1:
                discos[0] = dado ^ discos[2] ^ discos[3] ^ discos[4];
                discos[1] = dado;
                break;
            case 2:
                discos[0] = dado ^ discos[1] ^ discos[3] ^ discos[4];
                discos[2] = dado;
                break;
            case 3:
                discos[0] = dado ^ discos[2] ^ discos[1] ^ discos[4];
                discos[3] = dado;
                break;
            case 4:
                discos[0] = dado ^ discos[2] ^ discos[3] ^ discos[1];
                discos[4] = dado;
                break;
        }
    }else{
        discos[0] = vetor[0] ^ vetor[1] ^ vetor[2] ^ vetor[3];
        for(x=0;x<4;x++){
            discos[x+1] = vetor[x];
        }
    }

    imprimir(discos);
    return discos;
}

int* escrita4(int dado, int* vetor, int* discos, int n_disco, int tam){
    int x;
    if(tam == 4){
        switch (n_disco) {
            case 1:
                discos[0] = (discos[1] ^ dado) ^ discos[0];
                discos[1] = dado;
                break;
            case 2:
                discos[0] = (discos[2] ^ dado) ^ discos[0];
                discos[2] = dado;
                break;
            case 3:
                discos[0] = (discos[3] ^ dado) ^ discos[0];
                discos[3] = dado;
                break;
            case 4:
                discos[0] = (discos[4] ^ dado) ^ discos[0];
                discos[4] = dado;
                break;
        }
    }else{
        discos[0] = (discos[1] ^ vetor[0]) ^ (discos[2] ^ vetor[1]) ^ (discos[3] ^ vetor[2]) ^ (discos[4] ^ vetor[3]) ^ discos[0];
        for(x=0;x<4;x++){
            discos[x+1] = vetor[x];
        }

    }
    imprimir(discos);
    return discos;
}

void imprimir(int* discos){
    int x=1;
    printf("\n");
    printf("Backup: %i \n", discos[0]);
    do{
        printf("Disco %i: %i\n", x, discos[x]);
        x++;
    }while(x<=4);
    printf("\n");
}

int falha(int* discos, int falha){
    switch (falha) {
        case 1:
            discos[1] = discos[0] ^ (discos[2] ^ discos[3] ^ discos[4]);
            imprimir(discos);
            break;
        case 2:
            discos[2] = discos[0] ^ (discos[1] ^ discos[3] ^ discos[4]);
            imprimir(discos);
            break;
        case 3:
            discos[3] = discos[0] ^ (discos[2] ^ discos[1] ^ discos[4]);
            imprimir(discos);
            break;
        case 4:
            discos[4] = discos[0] ^ (discos[2] ^ discos[3] ^ discos[1]);
            imprimir(discos);
            break;
    }
}

