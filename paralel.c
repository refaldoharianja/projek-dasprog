#include <stdio.h>
#include "paralel.h"

void paralelCalculator() {
  int jumlah, i;
  float R, total = 0, hasil;

  printf("=== KALKULATOR RESISTOR PARALEL ===\n");
  printf("Masukkan jumlah resistor: ");
  scanf("%d", &jumlah);

  for (i = 1; i <= jumlah; i++) {
  printf("Masukkan nilai Resistor %d (Ohm): ",i);
  scanf("%f", &R);
  total += 1.0 / R;
  }

  hasil = 1.0 / total;

  printf("Hambatan Total Paralel = %.2f ohm\n", hasil);
}
