#ifndef HEADER_LISTASEQ
#define HEADER_LISTASEQ

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
void Inizializza(ListaSequenziale*);

/**
 * Funzione per l'inserimento di un nuovo elemento in coda
 * @param Lista la lista sequenziale in cui inserire l'elemento
 * @param NuovoElemento il nuovo elemento da inserire
 *
 * @return true se l'inseriemnto è andato a buon fine, false altrimenti
*/
bool InserisciInCoda(ListaSequenziale*, int);

/**
 * Funzione per eliminare l'ultimo elemento dalla coda
 * @param Lista la lista sequenziale da cui rimuovere l'elemento
 *
 * @return true se l'eliminazione è andata a buon fine, false altrimenti
*/
bool EliminaDallaCoda(ListaSequenziale*);

/**
 * Funzione per l'inserimento di un elemento ad un certo indice
 * @param Lista la lista sequenziale in cui inserire l'elemento
 * @param NuovoElemento il nuovo elemento da inserire (TODO: suggerirei una generalizzazione)
 * @param IndiceNuovoElemento l'indice in cui verrà inserito il nuovo elemento
 *
 * @return true se l'inserimento è andato a buon fine, false altrimenti
*/
bool InserisciAdIndice(ListaSequenziale*, int, int);

/**
 * Funzione per eliminare l'elemento ad un certo indice
 * @param IndiceElemento indice dell'elemento da eliminare
 *
 * @return true se l'eliminazione è andata a buon fine, false altrimenti
*/
bool EliminaAdIndice(ListaSequenziale*, int);

/**
 * Funzione per lo spostamento degli elementi in una sequenza
 * Attenzione! La funzione non modifica ListaSequenziale.Lunghezza
 * @param Lista la lista sequenziale dove effettuare lo spostamento
 * @param Indice l'indice da cui far partire lo spostamento
 * @param NumeroPosizioni il numero di celle di cui "shiftare"
 *
 * @return true se lo spostamento è andato a buon fine, false altrimenti
*/
static bool ShiftSequenza(ListaSequenziale*, int, int);

/**
 * Funzione per l'accesso all'i-esimo elemento
 * @param Lista la lista sequenziale da cui leggere l'elemento
 * @param i l'indice dell'elemento da leggere
 *
 * @return valore dell'i-esimo elemento se esiste, 0 altrimenti
*/
int Elemento(ListaSequenziale*, int);

/**
 * Funzione per verificare se esiste l'i-esimo elemento all'interno di una lista sequenziale
 * @param Lista rispetto alla quale si verifica l'esistenza dell'i-esimo elemento
 * @param IndiceNuovoElemento l'indice da verificare
 *
 * @return true se esiste l'i-esimo elemento, false altrimenti
*/
static bool IndiceValido(ListaSequenziale*, int);

#endif
