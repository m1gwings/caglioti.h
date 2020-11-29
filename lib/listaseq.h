#ifndef HEADER_LISTASEQ
#define HEADER_LISTASEQ

#define listaseq listaseq

#include "utils.h"

#define MAX_LUNGHEZZA 100

typedef struct {
	int Sequenza[MAX_LUNGHEZZA];
	int Lunghezza;
} ListaSequenziale;

/**
 * Funzione per l'inizializzazione della lista con lunghezza zero
 * @param Lista la lista sequenziale da inizializzare
*/
void listaseq_Inizializza(ListaSequenziale*);

/**
 * Funzione per l'inserimento di un nuovo elemento in coda
 * @param Lista la lista sequenziale in cui inserire l'elemento
 * @param NuovoElemento il nuovo elemento da inserire
 *
 * @return true se l'inseriemnto è andato a buon fine, false altrimenti
*/
bool listaseq_InserisciInCoda(ListaSequenziale*, int);

/**
 * Funzione per eliminare l'ultimo elemento dalla coda
 * @param Lista la lista sequenziale da cui rimuovere l'elemento
 *
 * @return true se l'eliminazione è andata a buon fine, false altrimenti
*/
bool listaseq_EliminaDallaCoda(ListaSequenziale*);

/**
 * Funzione per l'inserimento di un elemento ad un certo indice
 * @param Lista la lista sequenziale in cui inserire l'elemento
 * @param NuovoElemento il nuovo elemento da inserire (TODO: suggerirei una generalizzazione)
 * @param IndiceNuovoElemento l'indice in cui verrà inserito il nuovo elemento
 *
 * @return true se l'inserimento è andato a buon fine, false altrimenti
*/
bool listaseq_InserisciAdIndice(ListaSequenziale*, int, int);

/**
 * Funzione per eliminare l'elemento ad un certo indice
 * @param IndiceElemento indice dell'elemento da eliminare
 *
 * @return true se l'eliminazione è andata a buon fine, false altrimenti
*/
bool listaseq_EliminaAdIndice(ListaSequenziale*, int);

/**
 * Funzione per l'accesso all'i-esimo elemento
 * @param Lista la lista sequenziale da cui leggere l'elemento
 * @param i l'indice dell'elemento da leggere
 *
 * @return valore dell'i-esimo elemento se esiste, 0 altrimenti
*/
int listaseq_Elemento(ListaSequenziale*, int);

#endif
