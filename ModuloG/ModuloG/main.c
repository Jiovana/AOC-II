#include <stdio.h>
#include <time.h>
#include "handshake.h"

int main() {
    int barramento, memoria, dispositivo = 0;
    int dado, tempo, lat, latMem;
    int ack, dadoPrt, reqLeit;
    ack = dadoPrt = 0;

    printf("Informe o endereco do dado (int):\n");
    scanf("%d", &dado);
    printf("Informe a latencia da memoria (segundos): \n");
    scanf("%d", &latMem);
    printf("Informe a latencia do barramento (segundos):\n");
    scanf("%d", &lat);

    clock_t t = clock();

    printf("Dispositivo solicita leitura ativando ReqLeit\n");
    reqLeit = 1;//comecao a transmissao de dados
    recebeDado(dado, &barramento); // dispositivo coloca "endereço" no barramento.
    requisitaLeitura1(lat,latMem,&memoria,barramento,&ack,reqLeit);

    enderecoRecebido2(ack,&reqLeit,&barramento,lat);
    baixaAckMem3(lat,reqLeit,&ack);
    poeDado4(latMem,&barramento,memoria,&dadoPrt);
    enxergaDado5(dadoPrt,lat,&dispositivo,barramento,&ack);
    liberaDado6(ack,&dadoPrt,&barramento,lat);
    fimComunicacao7(dadoPrt,&ack,lat);

    t = clock() - t;

    printf("Tempo total para realizar a leitura: %.2lf segundos", ((double)t/(CLOCKS_PER_SEC)));

    return 0;
}