#include <stdio.h>
#include "ohm.h"
#include "daya.h"

int main() {
    int pilihan;

    do {
        printf("=== MENU UTAMA ===\n");
        printf("1. Kalkulator Hukum Ohm\n");
        printf("2. Kalkulator Daya Listrik\n");
        printf("3. Keluar\n");
        printf("Pilih menu (1-3): ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            ohmCalculator();
        } 
        else if (pilihan == 2) {
            dayaCalculator();
        }
        else if (pilihan == 3) {
            printf("Program selesai.\n");
        }
        else {
            printf("Pilihan tidak valid.\n");
        }

        printf("\n");

    } while (pilihan != 3);

    return 0;
}
