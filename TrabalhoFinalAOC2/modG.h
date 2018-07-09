//
// Created by gomes on 26/06/2018.
//

#ifndef MODULOG_HANDSHAKE_H
#define MODULOG_HANDSHAKE_H

void delay(int number_of_seconds);
void recebeDado(int dado, int *barramento);
void requisitaLeitura1(int lat, int latMem ,int *memoria, int barramento, int *ack, int reqLeit); // memoria
void enderecoRecebido2(int ack, int *reqLeit, int *barramento, int lat); //barramento
void baixaAckMem3(int lat, int reqLeit, int *ack);
void poeDado4(int latMem, int *barramento, int memoria, int *dadoPrt);
void enxergaDado5(int dadoPrt, int lat, int *dispositivo, int barramento, int *ack);
void liberaDado6(int ack, int *dadoPrt, int *barramento, int lat);
void fimComunicacao7(int dadoPrt, int *ack, int lat);


#endif //MODULOG_HANDSHAKE_H
