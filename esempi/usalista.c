#include <stdio.h>
#include "../caglioti.h"

void Stampa(ListaSequenziale*);

int main(void) {
    ListaSequenziale Lista;
    int i;

    Inizializza(&Lista);

    for (i = 0;i < 10;i++) {
        if (!InserisciInCoda(&Lista, i)) {
            fprintf(stderr, "Errore durante l'inserimento in coda!\n");
            return 1;
        }
    }
    Stampa(&Lista);

    if (!InserisciAdIndice(&Lista, 15, 2)) {
        fprintf(stderr, "Errore durante l'inserimento all'indice %d!\n", 2);
        return 1;
    }
    Stampa(&Lista);

    for (i = 0;i < 4;i++) {
        if (!EliminaDallaCoda(&Lista)) {
            fprintf(stderr, "Errore durante l'eliminazione dalla coda\n");
            return 1;
        }
    }
    Stampa(&Lista);

    if (!EliminaAdIndice(&Lista, 2)) {
        fprintf(stderr, "Errore durante l'eliminazione all'indice %d\n", 2);
        return 1;
    }
    Stampa(&Lista);

    return 0;
}

void Stampa(ListaSequenziale* Lista) {
    int i;

    for (i = 0;i < Lista->Lunghezza;i++) {
        printf("%d ", Elemento(Lista, i));
    }
    printf("\n");
}
