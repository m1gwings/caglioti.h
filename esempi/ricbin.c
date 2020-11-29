#include <stdio.h>
#include "../caglioti.h"

#define DIM 10

int main(void) {
    int Seq[DIM] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", algoritmi_RicercaBinaria(1, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(2, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(3, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(4, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(5, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(6, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(7, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(8, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(9, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(10, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinaria(11, Seq, DIM));

    printf("%d\n", algoritmi_RicercaBinariaRic(1, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(2, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(3, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(4, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(5, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(6, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(7, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(8, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(9, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(10, Seq, DIM));
    printf("%d\n", algoritmi_RicercaBinariaRic(11, Seq, DIM));
}
