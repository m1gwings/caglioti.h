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

bool InserisciAdIndice(ListaSequenziale* Lista, int NuovoElemento, int IndiceNuovoElemento) {
    if (Lista->Lunghezza == MAX_LUNGHEZZA || IndiceNuovoElemento > Lista->Lunghezza) {
        return false;
    }

    if (ShiftSequenza(Lista, IndiceNuovoElemento, 1)) {
        Lista->Sequenza[IndiceNuovoElemento] = NuovoElemento;

        return true;
    }

    return false;
}

bool ShiftSequenza(ListaSequenziale* Lista, int Indice, int NumeroPosizioni) {
    if (Lista->Lunghezza + NumeroPosizioni >= MAX_LUNGHEZZA || Indice < 0 || Indice >= Lista->Lunghezza) {
        return false;
    }

    int i;
    for (i = Lista->Lunghezza - 1; i >= Indice; i--) {
        Lista->Sequenza[i + NumeroPosizioni] = Lista->Sequenza[i];
    }

    return true;
}

int Elemento(ListaSequenziale* Lista, int i) {
    if (i >= Lista->Lunghezza) {
        return 0;
    }

    return Lista->Sequenza[i]; 
}