//Módulo E

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "fila.h"


int *AbrirArquivo(int *count);

void Cache16(int *vet, int count);

void Cache4x4(int *vet, int count);

void Cache4vias(int *vet, int count);

int decToBinary(int nend, int nconj, int *tag);

int main() {
    int count, *vet, opt;
    vet = AbrirArquivo(&count);
    do {
        printf("\nEscolha 1 opcao:\n1- Cache 16 x 1\n2- Cache 4 x 4\n3- Cache 4 vias\n4- Sair\n");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                Cache16(vet, count);
                break;
            case 2:
                Cache4x4(vet, count);
                break;
            case 3:
                Cache4vias(vet, count);
                break;
            case 4:
                exit(0);
        }
    } while (opt != 4);
    return 0;
}


int *AbrirArquivo(int *count) {
    FILE *fp;
    char linha[50], *res;
    int *vet = NULL, i = 0, aux;
    if ((fp = fopen("enderecos.txt", "rt")) == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        exit(0);
    }
    (*count) = 0;
    while (!feof(fp)) {
        fgets(linha, 50, fp);
        (*count)++;
    }
    vet = (int *) malloc(sizeof(int) * (*count));
    rewind(fp);
    while (!feof(fp)) {
        res = fgets(linha, 50, fp);
        vet[i] = atoi(res);
        i++;
    }
    fclose(fp);
    return vet;
}

int decToBinary(int nend, int nconj, int *tag) { //nend - numero do endereco de bloco (sem offsets) / nconj - numero de conjuntos
    // array to store binary number
    int binaryNum[32], nindex, decNum = 0, tamtag;
    //calcula numero de bits necessarios para o indice
    nindex = (int) ((log10(nconj)) / (log10(2)));
    int *indice = (int *) malloc(sizeof(int) * nindex); //vetor que armazena valor do indice em binario extraido de binaryNum
    //calcular e alocar vetor para tag em binario com o que sobra do endereco
    tamtag = 32 - nindex;
    int *tagBin = (int*)malloc(sizeof(int)*tamtag);

    int i = 0;// counter for binary array
    while (i < 32) { // storing remainder in binary array
        binaryNum[i] = nend % 2;
        nend = nend / 2;
        i++;
    }

    int k = 0;
    while (k < nindex) { // vai passar os bits certos para o vetor indice
        indice[k] = binaryNum[k];
        k++;
    }

    int x = 0;
    while(k < 32){ //passa os bits restantes para o vetor tag
        tagBin[x] = binaryNum[k];
        k++;
        x++;
    }

    for (int j = 0; j < 32; ++j) {//converte novamente para decimal o valor do indice e da tag
        if (j < nindex && indice[j] == 1) {
            decNum = decNum + (int) pow(2, j);
        }
        if(j >= nindex && tagBin[j] == 1){
            (*tag) = (*tag) + (int) pow(2,j);
        }
    }

    return decNum;
}

void Cache16(int *vet, int count) {
    printf("Cache diretamente mapeada 16 blocos x 1 palavra:\n");
    int acerto = 0, falha = 0, x = 0;
    int cache[16];
    int tags[16];
    int tag = 0;
    for (int i = 0; i < 16; i++) {
        cache[i] = 0;
        tags[i] = 0;
    }
    for (int j = 0; j < count; j++) {
        x = 0;
        printf("---->Vet - %d:\n", vet[j]);
        for (int i = 0; i < 16; i++) {
            printf("Cache [%d]- %d\t\tTag [%d]- %d\n", i, cache[i],i, tags[i]);
            if (vet[j] == cache[i]) {
                printf("-->Acerto!! Encontrado em %d \n", i);
                acerto++;
                x++;
            }
        }
        if (x == 0) {
            falha++;
            printf("Falha!! Armazenado na posicao %d da cache\n", decToBinary(vet[j], 16, &tag));
            cache[decToBinary(vet[j], 16, &tag)] = vet[j];
            tags[j] = tag;
        }
    }
    printf("Num de acertos: %d\n", acerto);
    printf("Num de falhas: %d\n", falha);
}

void Cache4x4(int *vet, int count) {
    printf("Cache diretamente mapeada 4 blocos x 4 palavras:\n");
    int acerto = 0, falha = 0, x = 0;
    int cache[4];
    int tags[4];
    int tag = 0;
    for (int i = 0; i < 4; i++) {
        cache[i] = 0;
        tags[i] = 0;
    }
    for (int j = 0; j < count; j++) {
        x = 0;
        printf("---->Vet - %d:\n", vet[j]);
        for (int i = 0; i < 4; i++) {
            printf("Cache [%d]- %d\t\tTag [%d]- %d\n", i, cache[i],i, tags[i]);
            if (vet[j] == cache[i]) {
                printf("-->Acerto!! Encontrado em %d \n", i);
                acerto++;
                x++;
            }
        }
        if (x == 0) {
            falha++;
            printf("Falha!! Armazenado na posicao %d da cache\n", decToBinary(vet[j], 4, &tag));
            cache[decToBinary(vet[j], 4, &tag)] = vet[j];
            tags[j] = tag;
        }
    }
    printf("Num de acertos: %d\n", acerto);
    printf("Num de falhas: %d\n", falha);;
}

void Cache4vias(int *vet, int count) {
    printf("Cache associativa 4 vias:\n");
    int acerto = 0, falha = 0, z = 0;
    int cache[4][4];
    int tags[4][4];
    int tag = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; ++j) {
            cache[i][j] = 0;
            tags[i][j] = 0;
        }
    }
    int cnj;
    int c1, c2, c3, c4;
    c1 = c2 = c3 = c4 = 0;
    FilaV *fila1 = criarV(4);
    FilaV *fila2 = criarV(4);
    FilaV *fila3 = criarV(4);
    FilaV *fila4 = criarV(4);
    for (int k = 0; k < count; k++) {
        printf("---->Vet - %d:\n", vet[k]);
        z = 0;
        for (int x = 0; x < 4; x++) {
            for (int y = 0; y < 4; y++) {
                printf("Cache[%d][%d]- %d\t\tTag [%d][%d]- %d\n", x, y, cache[x][y],x,y,tags[x][y]);
                if (vet[k] == cache[x][y]) {
                    printf("-->Acerto!! Encontrado no conjunto[%d] via[%d] \n", x, y);
                    acerto++;
                    z++;
                }
            }
        }
        if (z == 0) {
            falha++;
            int f;
            cnj = decToBinary(vet[k], 4, &tag);
            switch (cnj) {
                case 0:
                    printf("Falha!! Armazenado no conjunto [%d] via[%d]\n", cnj, c1);
                    cache[cnj][c1++] = vet[k];
                    if (c1 > 3) { //ocupado
                        f = retirarV(fila1, 4);
                        for (int y = 0; y < 4; y++) { //percorre a via até achar o local correto para inserir
                            if (f == cache[cnj][y]) {
                                cache[cnj][y] = vet[k];
                                tags[cnj][y] = tag;
                                break;
                            }
                        }

                    }
                    inserirV(fila1, vet[k], 4);
                    imprimirV(fila1, 4);
                    break;
                case 1:
                    printf("Falha!! Armazenado no conjunto [%d] via[%d]\n", cnj, c2);
                    cache[cnj][c2++] = vet[k];
                    if (c1 > 3) { //ocupado
                        f = retirarV(fila2, 4);
                        for (int y = 0; y < 4; y++) { //percorre a via até achar o local correto para inserir
                            if (f == cache[cnj][y]) {
                                cache[cnj][y] = vet[k];
                                tags[cnj][y] = tag;
                                break;
                            }
                        }

                    }
                    inserirV(fila2, vet[k], 4);
                    imprimirV(fila2, 4);
                    break;
                case 2:
                    printf("Falha!! Armazenado no conjunto [%d] via[%d]\n", cnj, c3);
                    cache[cnj][c3++] = vet[k];
                    if (c1 > 3) { //ocupado
                        f = retirarV(fila3, 4);
                        for (int y = 0; y < 4; y++) { //percorre a via até achar o local correto para inserir
                            if (f == cache[cnj][y]) {
                                cache[cnj][y] = vet[k];
                                tags[cnj][y] = tag;
                                break;
                            }
                        }

                    }
                    inserirV(fila3, vet[k], 4);
                    imprimirV(fila3, 4);
                    break;
                case 3:
                    printf("Falha!! Armazenado no conjunto [%d] via[%d]\n", cnj, c4);
                    cache[cnj][c4++] = vet[k];
                    if (c1 > 3) { //ocupado
                        f = retirarV(fila4, 4);
                        for (int y = 0; y < 4; y++) { //percorre a via até achar o local correto para inserir
                            if (f == cache[cnj][y]) {
                                cache[cnj][y] = vet[k];
                                tags[cnj][y] = tag;
                                break;
                            }
                        }

                    }
                    inserirV(fila4, vet[k], 4);
                    imprimirV(fila4, 4);
                    break;
            }
        }
        printf("Num de acertos: %d\n", acerto);
        printf("Num de falhas: %d\n", falha);
    }
}
