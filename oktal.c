#include <stdio.h>
#include "oktal.h"

void oktalConverter() {
    long long n;
    int desimal = 0, basis = 1, digit_terakhir;

    printf("\n--- Konversi Oktal ke Desimal ---\n");
    printf("Masukkan bilangan oktal (contoh: 157): ");
    scanf("%lld", &n);

    long long n_awal = n;
    while (n != 0) {
        digit_terakhir = n % 10;
        if (digit_terakhir >= 8) {
            printf("Error: %lld bukan bilangan oktal yang valid.\n", n_awal);
        }

        desimal = desimal + digit_terakhir * basis;
        n = n / 10;
        basis = basis * 8;
    }
    
    printf("Bilangan desimal dari oktal %lld adalah: %d\n", n_awal, desimal);
}
