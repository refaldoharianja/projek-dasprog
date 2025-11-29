#include <stdio.h>
#include "desimal.h"

void desimalConverter() {
  int n, sisa, i = 0;
  int biner[32], oktal[32], heksa[32];

  printf("=== KONVERSI DESIMAL KE BINER/OKTAL/HEKSADESIMAL ===\n");
  printf("Masukkan bilangan desimal: ");
  scanf("%d", &n);

  int temp = n;

  i = 0;
  while (temp > 0) {
    biner[i] = temp % 2;
    temp /= 2;
    i++;
  }
  int biner_len = i;

  temp = n;
  i = 0;
  while (temp > 0) {
    oktal[i] = temp % 8;
    temp /= 8;
    i++;
  }
  int oktal_len = i;

  temp = n;
  i = 0;
  while (temp > 0) {
    sisa = temp % 16;
    heksa[i] = sisa;
    temp /= 16;
    i++;
  }
  int heksa_len = i;

  printf("Biner: ");
  for (i = biner_len - 1; i >= 0; i--) {
    printf("%d", biner[i]);
  }
  printf("\n");

  printf("Oktal: ");
  for (i = oktal_len - 1; i >= 0; i--) {
    printf("%d", oktal[i]);
  }
  printf("\n");

  printf("Heksadesimal: ");
  for (i = heksa_len - 1; i >= 0; i--) {
    if (heksa[i] < 10)
      printf("%d", heksa[i]);
    else
      printf("%c", 'A' + (heksa[i] - 10));
  }

  printf("\n");
}
