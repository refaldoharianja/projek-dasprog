#include <stdio.h>
#include "daya.h"

void dayaCalculator() {
    float V, I, P;

    printf("=== KALKULATOR DAYA LISTRIK ===\n");
    printf("Masukkan Tegangan (Volt): ");
    scanf("%f", &V);
    printf("Masukkan Arus (Ampere): ");
    scanf("%f", &I);

    P = V * I;

    printf("Daya = %.2f Watt\n", P);
}
