#include <stdio.h>
#include <string.h> 
#include <math.h>
#include "heksa.h"

void heksaConverter() {
    char hex[20];
    long long desimal = 0, basis = 1;
    int i, panjang, nilai_digit;

    printf("\n--- Konversi Heksadesimal ke Desimal ---\n");
    printf("Masukkan bilangan heksadesimal (contoh: 1A, FF, 2C): ");
    scanf("%s", hex);

    panjang = strlen(hex);
    for (i = panjang - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            nilai_digit = hex[i] - '0';
        }
        else if (hex[i] >= 'A' && hex[i] <= 'F') {
            nilai_digit = hex[i] - 'A' + 10;
        }
        else if (hex[i] >= 'a' && hex[i] <= 'f') {
            nilai_digit = hex[i] - 'a' + 10;
        }
        else {
            printf("Error: Karakter '%c' bukan heksadesimal yang valid.\n", hex[i]);
            return 1;
        }
        
        desimal = desimal + (nilai_digit * basis);
        basis = basis * 16;
    }

    printf("Bilangan desimal dari heksadesimal %s adalah: %lld\n", hex, desimal);

    return 0;
}
