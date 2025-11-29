#include <stdio.h>
#include "ohm.h"
#include "daya.h"
#include "seri.h"
#include "paralel.h"

int main() {
    int pilihan;

    do {
        printf("=== MENU UTAMA ===\n");
        printf("1. Kalkulator Hukum Ohm\n");
        printf("2. Kalkulator Daya Listrik\n");
        printf("3. Kalkulator Resistor Seri\n");
        printf("4, Kalkulator Resistor Paralel\n");
        printf("5. Keluar\n");
        printf("Pilih menu (1-5): ");
        scanf("%d", &pilihan);

        if (pilihan == 1) {
            ohmCalculator();
        } 
        else if (pilihan == 2) {
            dayaCalculator();
        }
        else if (pilihan == 3) {
            seriCalculator();
        }
        else if (pilihan == 4) {
            paralelCalculator();
        }
        else if (pilihan == 5) {
            printf("Program selesai.\n");
        }
        else {
            printf("Pilihan tidak valid.\n");
        }

        printf("\n");

    } while (pilihan != 5);

    return 0;
}
