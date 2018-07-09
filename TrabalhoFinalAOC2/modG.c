
#include "modG.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


void delay(int number_of_seconds) {
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
    // Stroing start time
    clock_t start_time = clock();
    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}

void recebeDado(int dado, int *barramento){
    *barramento= dado;
}
void requisitaLeitura1(int lat, int latMem ,int *memoria, int barramento, int *ack, int reqLeit){ // memoria
    if(reqLeit == 1){
        *memoria = barramento;
        *ack = 1;
    }
    delay(lat+latMem);
    printf("\nEndereco no barramento.\n ReqLeit: %d\t", reqLeit);
    printf("Barramento: %d\n", barramento);
}

void enderecoRecebido2(int ack, int *reqLeit, int *barramento, int lat){ //barramento
    if(ack == 1){
        *reqLeit = 0;
        *barramento = 0;
    }
    delay(lat);
    printf("Memoria recebeu endereco.\nAck: %d\n", ack);
    printf("Dispositivo percebeu Ack ativo e liberou ReqLeit e as linhas de dados.\n");
    printf("Barramento: %d", *barramento);
    printf(" ReqLeit: %d\n", *reqLeit);

}

void baixaAckMem3(int lat, int reqLeit, int *ack){
    if(reqLeit == 0){
        *ack = 0;
    }
    delay(lat);
    printf("Memoria percebeu que ReqLeit foi desativado e desativa ack.\n Ack: %d\n", *ack);
}

void poeDado4(int latMem, int *barramento, int memoria, int *dadoPrt){ //memoria só
    *barramento = memoria*5; //funcao de endereco
    *dadoPrt = 1;
    delay(latMem);
    printf("Memoria coloca dados no barramento e ativa dadoPrt.\n");
    printf("Barramento: %d DadoPrt: %d\n", *barramento, *dadoPrt);
}

void enxergaDado5(int dadoPrt, int lat, int *dispositivo, int barramento, int *ack){ //dispositivo
    if(dadoPrt==1){
        *dispositivo = barramento;
        *ack = 1;
    }
    delay(lat);
    printf("Dispositivo percebe dadoPrt ativo e le os dados do barramento, ativando ack\n");
    printf("Dispositivo: %d Ack: %d\n", *dispositivo, *ack);

}

void liberaDado6(int ack, int *dadoPrt, int *barramento, int lat){ //memoria
    if(ack == 1){
        *dadoPrt = 0;
        *barramento = 0;
    }
    delay(lat);
    printf("Memoria percebe ack ativo, libera as linhas de dados e baixa DadoPrt\n");
    printf("Barramento: %d dadoPrt: %d", *barramento, *dadoPrt);
}

void fimComunicacao7(int dadoPrt, int *ack, int lat){
    if(dadoPrt==0){
        *ack = 0;
    }
    delay(lat);
    printf("Dispositivo baixa ack ao perceber dadoPrt = 0, encerrando a comunicacao\n");
}


