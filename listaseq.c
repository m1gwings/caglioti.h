#include "listaseq.h"

void Inizializza(ListaSequenziale* Lista) {
    Lista->Lunghezza = 0;
}

bool InserisciInCoda(ListaSequenziale* Lista, int NuovoElemento) {
    if (Lista->Lunghezza == MAX_LUNGHEZZA) {
        return false;
    }

    Lista->Sequenza[Lista->Lunghezza++] = NuovoElemento;
    return true;
}

int Elemento(ListaSequenziale* Lista, int i) {
    if (i >= Lista->Lunghezza) {
        return 0;
    }

    return Lista->Sequenza[i]; 
}