
#include <stdlib.h>
#include <stdio.h>
#include "fila.h"


FilaV* criarV(int tam){
    FilaV *f = (FilaV*)malloc(sizeof(FilaV));
    f->vet = (int*)malloc(sizeof(int)*tam);
    f->n = 0;
    f->ini = 0;
    printf("Fila criada!\n");
    return f;
}

void inserirV(FilaV *f, int v, int tam){
    int fim;
    if(f->n != tam){
        fim = (f->ini +f->n)%tam;
        f->vet[fim] = v;
        f->n++;
        printf("Elemento inserido!\n");
    } else {
        printf("Fila cheia!\n");
    }
}

int retirarV (FilaV *f, int tam){
    int v;
    if(f->n != 0){
        v= f->vet[f->ini];
        f->n--;
        f->ini = (f->ini +1)%tam;
        return v;
    } else {
        printf("Fila vazia!\n");
    }
}

void imprimirV (FilaV *f, int tam){
    printf("Imprimindo fila: \n");
    for (int i = 0; i < f->n ; i++) {
        printf("%d\t", f->vet[(f->ini + i)%tam]);
    }
    printf("\n");
}

void liberarV (FilaV *f){
    free(f->vet);
    free(f);
}

