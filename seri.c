#include <stdio.h>
#include "seri.h"

void seriCalculator() {
    int n, i;
    double r_val, total = 0;

    printf("\n=== Kalkulator Resistor Seri ===\n");
    printf("Masukkan jumlah resistor: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Masukkan nilai Resistor %d (Ohm): ", i);
        scanf("%lf", &r_val);
        total += r_val;
    }
    printf("Total Hambatan Seri: %.2f Ohm\n", total);
}
