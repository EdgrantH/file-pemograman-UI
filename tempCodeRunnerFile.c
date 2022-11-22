#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nama[50];
    char npm[20];
    char sma[50];
    char telp[50];
} mahasiswa;

int main(){
    int i;//i sebagai counter
    int jumlahMahasiswa;
    printf ("Masukan jumlah data mahasiswa: ");
    scanf ("%d", &jumlahMahasiswa);
    mahasiswa* ptr = (mahasiswa*) calloc (jumlahMahasiswa, sizeof(mahasiswa));

    for (i = 0; i < jumlahMahasiswa; i++) {
        printf ("Masukan nama: ");
        scanf ("%s", &ptr[i].nama);
        printf ("Masukan NPM: ");
        scanf ("%s", &ptr[i].npm);
        printf ("Masukan Asal Sekolah: ");
        scanf ("%s", &ptr[i].sma);
        printf ("Masukan nomor telepon: ");
        scanf ("%s", &ptr[i].telp);
        printf ("\n");
    }

    printf ("%-12s %-12s %-12s %-12s \n", "Nama", "NPM", "SMA", "Telp");

    for (i = 0; i < jumlahMahasiswa; i++) {
    printf ("%-12s %-12s %-12s %-12s \n", ptr[i].nama, ptr[i].npm, ptr[i].sma, ptr[i].telp);
    }

    return 0;
}