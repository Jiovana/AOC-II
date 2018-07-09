typedef struct filav{
    int *vet;
    int n, ini;
}FilaV;

FilaV* criarV(int tam);
void inserirV(FilaV *f, int v, int tam);
int retirarV (FilaV *f, int tam);
void imprimirV (FilaV *f, int tam);
void liberarV (FilaV *f);