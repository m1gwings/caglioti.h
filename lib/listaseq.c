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

bool EliminaDallaCoda(ListaSequenziale* Lista) {
    if (Lista->Lunghezza == 0) {
        return false;
    }

    Lista->Lunghezza--;
    return true;
}

bool InserisciAdIndice(ListaSequenziale* Lista, int NuovoElemento, int IndiceNuovoElemento) {
    if (Lista->Lunghezza == MAX_LUNGHEZZA || !IndiceValido(Lista, IndiceNuovoElemento)) {
        return false;
    }

    if (ShiftSequenza(Lista, IndiceNuovoElemento, 1)) {
        Lista->Sequenza[IndiceNuovoElemento] = NuovoElemento;
        /* Avendo inserito un elemento è necessario incrementare la
         * lunghezza della lista */
        Lista->Lunghezza++;

        return true;
    }

    return false;
}

bool EliminaAdIndice(ListaSequenziale* Lista, int IndiceElemento) {
    if (!IndiceValido(Lista, IndiceElemento)) {
        return false;
    }

    if (ShiftSequenza(Lista, IndiceElemento, -1)) {
        Lista->Lunghezza--;
    }

    return false;
}

static bool ShiftSequenza(ListaSequenziale* Lista, int Indice, int NumeroPosizioni) {
    int i;

    if (Lista->Lunghezza + NumeroPosizioni >= MAX_LUNGHEZZA || !IndiceValido(Lista, Indice)) {
        return false;
    }

    if (NumeroPosizioni > 0) {
        for (i = Lista->Lunghezza - 1; i >= Indice; i--) {
            Lista->Sequenza[i + NumeroPosizioni] = Lista->Sequenza[i];
        }
    } else if (NumeroPosizioni != 0) {
        NumeroPosizioni = -NumeroPosizioni;

        for (i = Indice; i + NumeroPosizioni < Lista->Lunghezza; i++) {
            Lista->Sequenza[i] = Lista->Sequenza[i + NumeroPosizioni];
        }
    }

    return true;
}

int Elemento(ListaSequenziale* Lista, int i) {
    if (!IndiceValido(Lista, i)) {
        return 0;
    }

    return Lista->Sequenza[i];
}

static bool IndiceValido(ListaSequenziale* Lista, int IndiceNuovoElemento) {
    if (IndiceNuovoElemento < 0 || IndiceNuovoElemento >= Lista->Lunghezza) {
        /* Se IndiceNuovoElemento è negativo o maggiore uguale della lunghezza della lista,
         * allora l'indice è invalido */
        return false;
    }

    return true;
}
