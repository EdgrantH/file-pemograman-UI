#include <stdio.h>

typedef struct{
    char nama[50];
    int gol, asis, pialaIndiv, pialaTim, total;
}pemain;

int kalkulasiPoin (int gol, int asis, int pialaIndiv, int pialaTim){
    return gol + asis + 5*pialaIndiv + 10*pialaTim;
}

int scan(){
    int input;
    scanf ("%d", &input);
    if (input < 0){
        printf ("******************************************************************\n"
                "| \n"
                "| Input anda negatif, silahkan isi ulang\n"
                "| \n"
                "******************************************************************\n");
        main();
    }
    return input;
}

int main(){
    int i, input;//i sebagai counter
    pemain pemain[6];//pemain[0] sampai pemain[2] untuk input data, pemain[3] sampai [5] untuk hasil sort

    printf ("===================Perhitungan Poin Ballon D'or===================\n"
            "| \n");
    for (i = 0; i < 3; i++) {
        printf ("| Pemain ke-%d\n", i + 1);
        printf("| Nama: ");
        scanf (" %[^\n]s", &pemain[i].nama);
        printf ("| Jumlah gol: ");
        pemain[i].gol = scan();
        printf ("| Jumlah asis: ");
        pemain[i].asis = scan();
        printf ("| Jumlah penghargaan individu: ");
        pemain[i].pialaIndiv = scan();
        printf ("| Jumlah piala untuk tim: ");
        pemain[i].pialaTim = scan();

        pemain[i].total = kalkulasiPoin(pemain[i].gol, pemain[i].asis, pemain[i].pialaIndiv, pemain[i].pialaTim);
        printf ("| \n");

    }

    //sorting
    if (pemain[0].total > pemain[1].total){
        pemain[4] = pemain[0];
        pemain[3] = pemain[1];
    }
    else{
        pemain[4] = pemain[1];
        pemain[3] = pemain[0];
    }
    if (pemain[4].total > pemain[2].total){
        pemain[5] = pemain[4];
        if (pemain[3].total > pemain[2].total){
            pemain[4] = pemain[3];
            pemain[3] = pemain[2];
        }
        else{
            pemain[4] = pemain[2];
        }
    }
    else pemain[5] = pemain[2];
   
    printf ("| \n"
            "==================================================================\n");

    printf ("*********************Hasil Perhitungan Poin***********************\n"
            "| \n");
    for (i = 5; i > 2; i--) {
        printf ("| %s = %d poin\n", pemain[i].nama, pemain[i].total);
    }
    printf ("| \n");
    printf ("|%s Mendapatkan Ballon d'or\n", pemain[5].nama);
    printf( "| \n"
            "******************************************************************\n");
    return 0;
} 