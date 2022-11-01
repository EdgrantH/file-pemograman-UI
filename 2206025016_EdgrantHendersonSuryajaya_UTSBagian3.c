#include <stdio.h>
#include "2206025016_EdgrantHendersonSuryajaya_UTSBagian3.h"

int main(){
    int jmlh, i;
    float avg, devi;
    int usual = 0, unusual = 0, veryunusual = 0;

    printf("Jumlah angka = ");
    scanf("%d", &jmlh);
    printf("Rata-rata = ");
    scanf("%f", &avg);
    printf("Standard deviasi = ");
    scanf("%f", &devi);
    printf("\n");

    for (i = 0; i < jmlh; i++){
        int x;
        printf("Masukkan angka = ");
        scanf("%d", &x);
        float z = zScore(x, avg, devi);
        cekUsual(z, &usual, &unusual, &veryunusual);
        printf("z-score = %.2f\n", z);
        printf("\n");
    }

    printf("Rekapitulasi per kategori:\n");
    printf("usual = %d\n", usual);
    printf("unusual = %d\n", unusual);
    printf("very usual = %d\n", veryunusual);
    
    return 0;
}

