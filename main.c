#include <stdio.h>
#include "ohm.h"
#include "daya.h"
#include "seri.h"
#include "paralel.h"
#include "desimal.h"

int main() {
    int pilihan;

    do {
        printf("=== MENU PERHITUNGAN RANGKAIAN LISTRIK DASAR ===\n");
        printf("1. Kalkulator Hukum Ohm\n");
        printf("2. Kalkulator Daya Listrik\n");
        printf("3. Kalkulator Resistor Seri\n");
        printf("4. Kalkulator Resistor Paralel\n");

        printf("=== MENU KONVERSI BILANGAN ===\n");
        printf("5. Konversi Desimal ke Biner/Oktal/Heksadesimal\n");
        
        printf("6. Keluar\n");
        printf("Pilih menu (1-6): ");
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
            desimalConverter();
        }
        else if (pilihan == 6) {
            printf("Program selesai.\n");
        }
        else {
            printf("Pilihan tidak tersedia.\n");
        }

        printf("\n");

    } while (pilihan != 6);

    return 0;
}
