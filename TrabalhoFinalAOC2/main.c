#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "modA.h"
#include "modB.h"
#include "modC.h"
#include "modD.h"
#include "modE.h"
#include "modF.h"
#include "modG.h"

int main() {
    ////////////// VARIAVEIS
    int opt;
    //modulo A
    float capacidadeDoUsuario; //kb
    int larguraDaPalavra; //bytes
    int offset;
    int conjuntos;
    int indice;
    int tag;
    float total;
    int opc1;
    //modulo B
    float capUser = 0.0; //kb
    int largWord = 0; //bytes
    int tamBloco = 0; //words
    int largEnd; //bytes
    float overhead; //bytes
    int offB;
    int offW;
    int conj;
    int index;
    int tag2;
    float total2;
    int opc2, opt2;
    // modulo C
    float freq, CPI, final, taxCD1, taxCI1, taxCD2, taxCI2, perDados;
    int latMP, latCD2, latCI2;
    int opc3;
    // modulo D
    float capUser4 = 0.0; //kb
    int largWord4 = 0; //bytes
    int tamBloco4 = 0; //words
    int largEnd4; //bytes
    float overhead4; //bytes
    int offB4;
    int offW4;
    int conj4;
    int index4;
    int tag4;
    int vias;
    float total4;
    int opc4, opt4;
    //modulo E
    int count, *vet, opt5;
    vet = AbrirArquivo(&count);
    //modulo F
    int *discos, *vetor;
    int n_disco = 0, dado = 0, tam = 0, opt6 = 0, opc6 = 0, x = 0, disco_falha = 0;
    discos = (int *) malloc(sizeof(int) * 5);
    vetor = (int *) malloc(sizeof(int) * 4);
    for (x = 0; x < 4; x++) {
        vetor[x] = 0;
        discos[x] = 0;
    }
    //modulo G
    int barramento, memoria, dispositivo = 0;
    int dado7, tempo, lat, latMem;
    int ack, dadoPrt, reqLeit;
    ack = dadoPrt = 0;

    do {
        printf("\n==MENU PRINCIPAL==\n");
        printf("0-Sair\n1 - Modulo A\n2 - Modulo B\n3 - Modulo C\n4 - Modulo D \n5 - Modulo E\n6 - Modulo F\n7 - Modulo G\n>>OPCAO:");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                do {
                    printf("\n==MODULO A==\n");
                    printf(" 0-Voltar\n 1 - Inserir informacoes da cache\n 2 - Calcular tamanho total da cache\n 3 - Mostrar outros dados da cache \n>>OPCAO:");
                    scanf("%d", &opc1);
                    switch (opc1) {
                        case 1:
                            printf("Informe a capacidade da cache para armazenamento de informações do usuário (KB):");
                            scanf("%f", &capacidadeDoUsuario);
                            printf("Informe a largura da palavra (bytes):");
                            scanf("%i", &larguraDaPalavra);
                            break;
                        case 2:
                            total = tamanhoTotal(capacidadeDoUsuario, larguraDaPalavra);
                            printf(" O tamanho total da cache e %.2f ! \n", total);
                            break;
                        case 3:
                            offset = offsetByte(larguraDaPalavra);
                            conjuntos = numConjuntos(capacidadeDoUsuario, larguraDaPalavra);
                            indice = tamanhoIndex(conjuntos);
                            tag = tamanhoTag(larguraDaPalavra, indice, offset);

                            printf(" A capacidade da cache para armazenamento de informações do usuário e %.2f ! \n",
                                   capacidadeDoUsuario);
                            printf(" A largura da palavra e %i!\n", larguraDaPalavra);
                            printf(" O tamanho do offset de byte e: %i! \n", offset);
                            printf(" O numero de conjuntos da cache: %i! \n", conjuntos);
                            printf(" O tamanho do indice e: %i! \n", indice);
                            printf(" O tamanho da tag e: %i! \n", tag);
                            break;
                    }
                } while (opc1 != 0);
                break;
            case 2:
                do {
                    printf("\n==MENU==\n");
                    printf("1- Parte 1\n2- Parte 2\n3- Voltar\n>>OPCAO:");
                    scanf("%d", &opc2);
                    switch (opc2) {
                        case 1:
                            do {
                                printf("1 - Inserir informacoes da cache\n2 - Calcular tamanho total da cache\n3 - Mostrar outros dados da cache\n4 - Voltar \n>>OPCAO:");
                                scanf("%d", &opt2);
                                switch (opt2) {
                                    case 1:
                                        printf("Informe a capacidade da cache para armazenamento de informacoes do usuario (KB): ");
                                        scanf("%f", &capUser);
                                        printf("Informe a largura da palavra (bytes): ");
                                        scanf("%d", &largWord);
                                        printf("Informe o tamanho do bloco (em palavras) : ");
                                        scanf("%d", &tamBloco);
                                        break;
                                    case 2:
                                        total2 = tamTotal(capUser, largWord, tamBloco);
                                        printf(" O tamanho total da cache e %.2f ! \n", total2);
                                        break;
                                    case 3:
                                        offB = offsetByte(largWord);
                                        offW = offsetWord(tamBloco);
                                        conj = numConj(capUser, largWord, tamBloco);
                                        index = tamIndex(conj);
                                        tag2 = tamTag(largWord, index, offW, offB);

                                        printf(" A capacidade da cache para armazenamento de informacoes do usuario eh %.2f KB! \n",
                                               capUser);
                                        printf(" A largura da palavra eh %i bytes!\n", largWord);
                                        printf(" O tamanho do bloco eh de %i palavras\n", tamBloco);
                                        printf(" O tamanho do offset de byte eh: %i bits! \n", offB);
                                        printf(" O tamanho do offset de palavra eh: %i bits! \n", offB);
                                        printf(" O numero de conjuntos da cache: %i! \n", conj);
                                        printf(" O tamanho do indice eh: %i bits! \n", index);
                                        printf(" O tamanho da tag eh: %i bits! \n", tag2);
                                        break;
                                }
                            } while (opt2 != 4);
                            break;
                        case 2:
                            do {
                                printf("1 - Inserir informacoes da cache\n2 - Calcular tamanho do bloco de memoria da cache\n3 - Mostrar outros dados da cache\n4 - Voltar \n>>OPCAO:");
                                scanf("%d", &opt2);
                                switch (opt2) {
                                    case 1:
                                        printf("Informe o numero de bits do campo de indice do endereco: ");
                                        scanf("%i", &index);
                                        printf("Informe a largura do endereco (bytes): ");
                                        scanf("%i", &largEnd);
                                        printf("Informe overhead da cache (bytes) : ");
                                        scanf("%f", &overhead);
                                        break;
                                    case 2:
                                        tamBloco = tamanhoBloco(index, largEnd, overhead);
                                        printf("\n O tamanho do bloco de memoria da cache e %i bytes por endereco! \n\n",
                                               tamBloco);
                                        break;
                                    case 3:
                                        conj = (int) pow(2, index);
                                        offW = offsetWord((tamBloco / 4));
                                        printf("offw %i \n", offW);
                                        offB = offsetByte(largEnd);
                                        tag2 = tamTag(largEnd, index, offW, offB);

                                        printf("\n A largura da palavra eh %i bytes!\n", largEnd);
                                        printf(" O tamanho do offset de byte eh: %i bits! \n", offB);
                                        printf(" O tamanho do offset de palavra eh: %i bits! \n", offB);
                                        printf(" O numero de conjuntos da cache: %i! \n", conj);
                                        printf(" O tamanho do indice eh: %i bits! \n", index);
                                        printf(" O tamanho da tag eh: %i bits! \n\n", tag2);
                                        break;
                                }
                            } while (opt2 != 4);
                            break;
                    }
                } while (opc2 != 3);
                break;
            case 3:
                do {
                    printf("\n==MENU==\n");
                    printf("1- Calcular CPI 2 Caches: \n2- Calcular CPI 1 Cache \n3- Voltar\n>>OPCAO:");
                    scanf("%d", &opc3);
                    switch (opc3) {
                        case 1:
                            printf("\nInforme a frequencia de operacao do processador (GHz): ");
                            scanf("%f", &freq);
                            printf("\nInforme a latencia para acesso a memoria principal (ns): ");
                            scanf("%d", &latMP);
                            printf("\nInforme a latencia para acesso a cache de dados nivel 2 (ns): ");
                            scanf("%d", &latCD2);
                            printf("\nInforme a latencia para acesso a cache de instrucoes nivel 2 (ns): ");
                            scanf("%d", &latCI2);
                            printf("\nInforme o CPI basico do processador (sem falhas): ");
                            scanf("%f", &CPI);
                            printf("\nInforme o percentual de falhas na cache nivel 1 de dados : ");
                            scanf("%f", &taxCD1);
                            printf("\nInforme o percentual de falhas na cache nivel 1 de instrucoes: ");
                            scanf("%f", &taxCI1);
                            printf("\nInforme o percentual de falhas na cache nivel 2 de dados : ");
                            scanf("%f", &taxCD2);
                            printf("\nInforme o percentual de falhas na cache nivel 2 de instrucoes : ");
                            scanf("%f", &taxCI2);
                            printf("\nInforme o percentual de instrucoes do tipo load/store: ");
                            scanf("%f", &perDados);

                            final = calculaCPI2Caches(freq, latMP, latCD2, latCI2, CPI, taxCD1, taxCI1, taxCD2, taxCI2,
                                                      perDados);
                            printf("\n\n<<Resultados>>");
                            printf("\nFrequencia de operacao do processador (GHz): %.2f ", freq);
                            printf("\nLatencia para acesso a memoria principal (ns): %d", latMP);
                            printf("\nLatencia para acesso a cache de dados nivel 2 (ns): %d ", latCD2);
                            printf("\nLatencia para acesso a cache de instrucoes nivel 2 (ns): %d ", latCI2);
                            printf("\nCPI basico do processador (sem falhas): %.2f", CPI);
                            printf("\nPercentual de falhas na cache nivel 1 de dados : %.2f", taxCD1);
                            printf("\nPercentual de falhas na cache nivel 1 de instrucoes: %.2f ", taxCI1);
                            printf("\nPercentual de falhas na cache nivel 2 de dados : %.2f ", taxCD2);
                            printf("\nPercentual de falhas na cache nivel 2 de instrucoes : %.2f", taxCI2);
                            printf("\nPercentual de instrucoes do tipo load/store: %.2f", perDados);
                            printf("\n\nCPI final: %.2f \n", final);

                            break;
                        case 2:
                            printf("\nInforme a frequencia de operacao do processador (GHz): ");
                            scanf("%f", &freq);
                            printf("\nInforme a latencia para acesso a memoria principal (ns): ");
                            scanf("%d", &latMP);
                            printf("\nInforme o CPI basico do processador (sem falhas): ");
                            scanf("%f", &CPI);
                            printf("\nInforme o percentual de falhas na cache nivel 1 de dados : ");
                            scanf("%f", &taxCD1);
                            printf("\nInforme o percentual de falhas na cache nivel 1 de instrucoes: ");
                            scanf("%f", &taxCI1);
                            printf("\nInforme o percentual de instrucoes do tipo load/store: ");
                            scanf("%f", &perDados);

                            final = calculaCPI1Cache(freq, latMP, CPI, taxCD1, taxCI1, perDados);

                            printf("\n\n<<Resultados>>");
                            printf("\nFrequencia de operacao do processador (GHz): %.2f ", freq);
                            printf("\nLatencia para acesso a memoria principal (ns): %d", latMP);
                            printf("\nCPI basico do processador (sem falhas): %.2f", CPI);
                            printf("\nPercentual de falhas na cache nivel 1 de dados : %.2f", taxCD1);
                            printf("\nPercentual de falhas na cache nivel 1 de instrucoes: %.2f ", taxCI1);
                            printf("\nPercentual de instrucoes do tipo load/store: %.2f", perDados);
                            printf("\n\nCPI final: %.2f \n", final);

                            break;
                        default:
                            printf("Opcao errada!\n");
                            break;
                    }
                } while (opc3 != 3);
                break;
            case 4:
                do {
                    printf("\n==MENU==\n");
                    printf("1 - Inserir informacoes da cache\n2 - Calcular tamanho total da cache\n3 - Mostrar outros dados da cache\n4 - Voltar \n>>OPCAO:");
                    scanf("%d", &opt4);
                    switch (opt4) {
                        case 1:
                            printf("Informe a capacidade da cache para armazenamento de informacoes do usuario (KB): ");
                            scanf("%f", &capUser4);
                            printf("Informe a largura da palavra (bytes): ");
                            scanf("%d", &largWord4);
                            printf("Informe o tamanho do bloco (em palavras) : ");
                            scanf("%d", &tamBloco4);
                            printf("Informe o numero de vias : ");
                            scanf("%d", &vias);
                            break;
                        case 2:
                            total4 = tamTotalD(capUser4, largWord4, tamBloco4, vias);
                            printf(" O tamanho total da cache e %.2f ! \n", total4);
                            break;
                        case 3:
                            offB4 = offsetByte(largWord4);
                            offW4 = offsetWord(tamBloco4);
                            conj4 = numConjD(capUser4, largWord4, tamBloco4, vias);
                            index4 = tamIndex(conj4);
                            tag4 = tamTag(largWord4, index4, offW4, offB4);

                            printf(" A capacidade da cache para armazenamento de informacoes do usuario eh %.2f KB! \n",
                                   capUser4);
                            printf(" A largura da palavra eh %i bytes!\n", largWord4);
                            printf(" O tamanho do bloco eh de %i palavras\n", tamBloco4);
                            printf(" O tamanho do offset de byte eh: %i bits! \n", offB4);
                            printf(" O tamanho do offset de palavra eh: %i bits! \n", offB4);
                            printf(" O numero de conjuntos da cache: %i! \n", conj4);
                            printf(" O tamanho do indice eh: %i bits! \n", index4);
                            printf(" O tamanho da tag eh: %i bits! \n", tag4);
                            printf(" O numero de vias eh: %i! \n", vias);
                            break;
                    }
                } while (opt != 4);
                break;
            case 5:
                do {
                    printf("\nEscolha 1 opcao:\n1- Cache 16 x 1\n2- Cache 4 x 4\n3- Cache 4 vias\n4- Voltar\n");
                    scanf("%d", &opt5);
                    switch (opt5) {
                        case 1:
                            Cache16(vet, count);
                            break;
                        case 2:
                            Cache4x4(vet, count);
                            break;
                        case 3:
                            Cache4vias(vet, count);
                            break;
                    }
                } while (opt5 != 4);
                break;
            case 6:
                do {
                    printf("\nEscolha 1 opcao:\n1- RAID 3\n2- RAID 4\n3- Voltar\n");
                    scanf("%d", &opt6);
                    switch (opt6) {
                        case 1: //raid 3
                            do {
                                printf("\nEscolha 1 opcao:\n1- Escrever\n2- Simular falha\n3- voltar\n");
                                scanf("%d", &opc6);
                                switch (opc6) {
                                    case 1:
                                        printf("Informe o tamanho do dado: 4 bytes ou 16 bytes:\n");
                                        scanf("%d", &tam);
                                        if (tam == 4) {
                                            printf("Informe o dado que deseja escrever:\n");
                                            scanf("%d", &dado);
                                            printf("Informe em qual disco deseja escrever:\n");
                                            scanf("%d", &n_disco);
                                        } else {
                                            x = 0;
                                            do {
                                                printf("Informe o dado para o disco %i:\n", x + 1);
                                                scanf("%i", &dado);
                                                vetor[x] = dado;
                                                x++;
                                            } while (x < 4);
                                        }
                                        discos = escrita3(dado, vetor, discos, n_disco, tam);
                                        break;

                                    case 2:
                                        printf("Informe o disco onde ocorreu a falha:\n");
                                        scanf("%d", &disco_falha);
                                        discos[disco_falha] = 0;
                                        imprimir(discos);
                                        falha(discos, disco_falha);
                                        break;
                                }
                            } while (opc6 != 3);

                            break;
                        case 2: //raid 4
                            do {
                                printf("\nEscolha 1 opcao:\n1- Escrever\n2- Simular falha\n3- voltar\n");
                                scanf("%d", &opc6);
                                switch (opc6) {
                                    case 1:
                                        printf("Informe o tamanho do dado: 4 bytes ou 16 bytes:\n");
                                        scanf("%d", &tam);
                                        if (tam == 4) {
                                            printf("Informe o dado que deseja escrever:\n");
                                            scanf("%d", &dado);
                                            printf("Informe em qual disco deseja escrever:\n");
                                            scanf("%d", &n_disco);
                                        } else {
                                            x = 0;
                                            do {
                                                printf("Informe o dado para o disco %i:\n", x + 1);
                                                scanf("%i", &dado);
                                                vetor[x] = dado;
                                                x++;
                                            } while (x < 4);
                                        }
                                        discos = escrita4(dado, vetor, discos, n_disco, tam);
                                        break;
                                    case 2:
                                        printf("Informe o disco onde ocorreu a falha:\n");
                                        scanf("%d", &disco_falha);
                                        discos[disco_falha] = 0;
                                        imprimir(discos);
                                        falha(discos, disco_falha);
                                        break;
                                }
                            } while (opc6 != 3);
                            break;
                    }
                } while (opt6 != 3);
                break;
            case 7:
                printf("Informe o endereco do dado (int):\n");
                scanf("%d", &dado7);
                printf("Informe a latencia da memoria (segundos): \n");
                scanf("%d", &latMem);
                printf("Informe a latencia do barramento (segundos):\n");
                scanf("%d", &lat);

                clock_t t = clock();

                printf("Dispositivo solicita leitura ativando ReqLeit\n");
                reqLeit = 1;//comecao a transmissao de dados
                recebeDado(dado7, &barramento); // dispositivo coloca "endereço" no barramento.
                requisitaLeitura1(lat,latMem,&memoria,barramento,&ack,reqLeit);

                enderecoRecebido2(ack,&reqLeit,&barramento,lat);
                baixaAckMem3(lat,reqLeit,&ack);
                poeDado4(latMem,&barramento,memoria,&dadoPrt);
                enxergaDado5(dadoPrt,lat,&dispositivo,barramento,&ack);
                liberaDado6(ack,&dadoPrt,&barramento,lat);
                fimComunicacao7(dadoPrt,&ack,lat);

                t = clock() - t;

                printf("Tempo total para realizar a leitura: %.2lf segundos", ((double)t/(CLOCKS_PER_SEC)));
                break;
        }
    } while (opt != 0);
}