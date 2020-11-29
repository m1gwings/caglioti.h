#include "algoritmi.h"

int algoritmi_Mcd(int a, int b) {
    int Resto;
    while (a % b > 0) {
        Resto = a % b;
        a = b;
        b = Resto;
    }

    return b;
}

int algoritmi_McdRic(int a, int b) {
    if (a % b == 0) {
        return b;
    }

    return algoritmi_McdRic(b, a % b);
}

int algoritmi_RicercaBinaria(int Cerc, int* Seq, int Dim) {
    /* Indice dell'elemento centrale della sequenza */
    int Centr;

    /* Offset di Seq rispetto all'inizio della sequenza iniziale */
    int Offset;

    Offset = 0;
    while (Dim > 0) {
        Centr = Dim / 2;

        if (*(Seq + Centr) == Cerc) {
            /* Ho trovato l'elemento cercato */
            return Offset + Centr;
        }

        if (*(Seq + Centr) > Cerc) {
            /* Lavoro nella metà sinistra */

            /* Ricordando che l'elemento finale ha indice Dim-1
             * ora l'elemento finale è quello prima di Centr */
            Dim = Centr;
        } else {
            /* Lavoro nella metà destra */

            /* Incremento Seq e Offset in modo che partano dall'elemento
             * successivo a quello centra */
            Seq += Centr + 1;
            Offset += Centr + 1;

            /* Aggiorno la posizione in modo da non sforare i limiti della sequenza */
            Dim -= Centr + 1;
        }
    }

    /* L'elemento cercato non è presente nella ricerca */
    return -1;
}

int algoritmi_RicercaBinariaRic(int Cerc, int* Seq, int Dim) {
    /* Indice dell'elemento centrale della sequenza */
    int Centr;

    /* Indice dell'elemento trovato dalla chiamata ricorsiva */
    int Trov;

    if (Dim == 0) {
        /* Non ho trovato l'elemento cercato */
        return -1;
    }

    Centr = Dim / 2;

    if (*(Seq + Centr) == Cerc) {
        return Centr;
    }

    if (*(Seq + Centr) > Cerc) {
        /* Lavoro nella metà sinistra */

        /* Ricordando che l'elemento finale ha indice Dim-1
         * ora l'elemento finale è quello prima di Centr */
        Trov = algoritmi_RicercaBinariaRic(Cerc, Seq, Centr);
        return Trov;
    } else {
        /* Lavoro nella metà destra */

        Trov = algoritmi_RicercaBinariaRic(Cerc, Seq + Centr + 1, Dim - Centr - 1);

        if (Trov == -1) {
            /* Non ho trovato l'elemento */
            return Trov;
        }

        /* Sommo Centr + 1 perchè la chiamata ricorsiva
         * restituirà l'indice dell'elemento trovato,
         * contando come elemento di indice 0, quello che in realtà
         * è di indice Centr + 1 */
        return  Centr + 1 + Trov;
    }
}
