//Program mencari panjang sebuah vektor
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void panjang_vektor(int *vektor, int dimensi_vektor);//mencari panjang vektor

int main(){
    int dimensi_vektor, i;//jumlah dimensi sebuah vektor dan i sebagai counter

    printf ("==================================================================\n"
            "| \n"
            "| Program mencari panjang sebuah vektor\n"
            "| \n"
            "==================================================================\n");

    //meminta dimensi vektor
    printf ("************************Please Enter Input************************\n"
            "| \n"
            "| masukan dimensi vektor  : ");
    scanf ("%d", &dimensi_vektor);
    int *vektor = (int*) calloc (dimensi_vektor, sizeof(int));
    //error handling dynamic list gak kebuat
    if(vektor == NULL){
        printf ("list tidak berhasil dibuat");
        main();
    }

    //meminta nilai vektor
    printf("| Vektor a:\n");
    for (i = 0; i < dimensi_vektor; i++) {
        printf ("| masukkan dimensi ke-%d: ", i+1);
        scanf ("%d", &vektor[i]);
    }
    printf ("| \n"
            "******************************************************************\n");
	
    printf ("========================Hasil Penghitungan========================\n"
            "| \n");
    printf ("| hasil = ");
    panjang_vektor(vektor, dimensi_vektor);
    printf ("| \n"
            "==================================================================\n");

    free(vektor);
	return 0;
}

//mencari panjang vektor
void panjang_vektor(int *vektor, int dimensi_vektor){
    int hasil = 0, i;

    printf("a.a = ");

    for (i = 0; i < dimensi_vektor; i++) {
        hasil += pow(vektor[i], 2);
        printf("%d.%d", vektor[i], vektor[i]);
        if(i == dimensi_vektor-1) continue; //tidak mengoutput tanda tambah di akhir
        printf(" + ");
    }
    printf (" = %d\n", hasil);
    printf ("| ||a|| = %.2f\n", sqrt((float)hasil));
}