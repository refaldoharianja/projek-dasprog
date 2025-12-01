#include <stdio.h>
#include "biner.h"

void binerConverter() {
    long long n;
    int desimal = 0, basis = 1, sisa;
    
    printf("\n--- Konversi Biner ke Desimal ---\n");
    printf("Masukkan bilangan biner (contoh: 1011): ");
    scanf("%lld", &n);

    long long n_awal = n;
    while (n != 0) {
        sisa = n % 10; 
        desimal = desimal + sisa * basis;
        n = n / 10;
        basis = basis * 2;
    }

    printf("Bilangan desimal dari %lld adalah: %d\n", n_awal, desimal);

    return 0;
}
