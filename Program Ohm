#include <stdio.h>
#include "ohm.h"

void ohmCalculator() {
    int pilihan;
    float V, I, R;

    printf("=== KALKULATOR HUKUM OHM ===\n");
    printf("1. Hitung Tegangan (V)\n");
    printf("2. Hitung Arus (I)\n");
    printf("3. Hitung Hambatan (R)\n");
    printf("Pilih (1-3): ");
    scanf("%d", &pilihan);

    if (pilihan == 1) {
        printf("Masukkan Arus (Ampere): ");
        scanf("%f", &I);
        printf("Masukkan Hambatan (Ohm): ");
        scanf("%f", &R);
        V = I * R;
        printf("Tegangan = %.2f Volt\n", V);
    } 
    else if (pilihan == 2) {
        printf("Masukkan Tegangan (Volt): ");
        scanf("%f", &V);
        printf("Masukkan Hambatan (Ohm): ");
        scanf("%f", &R);
        I = V / R;
        printf("Arus = %.2f Ampere\n", I);
    } 
    else if (pilihan == 3) {
        printf("Masukkan Tegangan (Volt): ");
        scanf("%f", &V);
        printf("Masukkan Arus (Ampere): ");
        scanf("%f", &I);
        R = V / I;
        printf("Hambatan = %.2f Ohm\n", R);
    } 
    else {
        printf("Pilihan tidak tersedia.\n");
    }
}
