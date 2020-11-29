#ifndef HEADER_ALGORITMI
#define HEADER_ALGORITMI

/**
 * Funzione per trovare il Massimo Comun Divisore tra a e b
 * si tratta di un'implementazione dell'algoritmo di Euclide
 * @param a
 * @param b
 *
 * @return MCD(a, b)
*/
int algoritmi_Mcd(int a, int b);

/**
 * Funzione ricorsiva per trovare il Massimo Comun Divisore tra a e b
 * si tratta di un'implementazione dell'algoritmo di Euclide
 * @param a
 * @param b
 *
 * @return MCD(a, b)
*/
int algoritmi_McdRic(int a, int b);

/**
 * Funzione per ricercare un elemento all'interno di una sequenza ordinata
 * si tratta di un'implementazione dell'algoritmo di ricerca binaria
 * @param Cerc l'elemento cercato
 * @param Seq puntatore alla sequenza ordinata in cui cercare l'elemento
 * @param Dim dimensione della sequenza ordinata
 *
 * @return l'indice dove si trova l'elemnto cercato se è presente, -1 altrimenti
*/
int algoritmi_RicercaBinaria(int Cerc, int* Seq, int Dim);

/**
 * Funzione ricorsiva per ricercare un elemento all'interno di una sequenza ordinata
 * si tratta di un'implementazione dell'algoritmo di ricerca binaria
 * @param Cerc l'elemento cercato
 * @param Seq puntatore alla sequenza ordinata in cui cercare l'elemento
 * @param Dim dimensione della sequenza ordinata
 *
 * @return l'indice dove si trova l'elemnto cercato se è presente, -1 altrimenti
*/
int algoritmi_RicercaBinariaRic(int Cerc, int* Seq, int Dim);

#endif
