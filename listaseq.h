#ifndef HEADER_LISTASEQ
#define HEADER_LISTASEQ

#include "utils.h"

#define MAX_LUNGHEZZA 100

typedef struct {
	int Sequenza[MAX_LUNGHEZZA];
	int Lunghezza;
} ListaSequenziale;

void Inizializza(ListaSequenziale*);
bool InserisciInCoda(ListaSequenziale*, int);
int Elemento(ListaSequenziale*, int);

#endif