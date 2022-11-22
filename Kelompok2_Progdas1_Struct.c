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
    char temp;  
    printf ("Masukan jumlah data mahasiswa: ");
    scanf ("%d", &jumlahMahasiswa);
    mahasiswa* ptr = (mahasiswa*) calloc (jumlahMahasiswa, sizeof(mahasiswa));

    for (i = 0; i < jumlahMahasiswa; i++) {
        printf ("Masukan nama: ");
        getchar();
        gets(ptr[i].nama);
        printf ("Masukan NPM: ");
        scanf ("%s", &ptr[i].npm);
        printf ("Masukan Asal Sekolah: ");
        getchar();
        gets(ptr[i].sma);
        printf ("Masukan nomor telepon: ");
        scanf ("%s", &ptr[i].telp);
        printf ("\n");
    }

    printf ("%-26s %-16s %-16s %-16s \n", "Nama", "NPM", "SMA", "Telp");

    for (i = 0; i < jumlahMahasiswa; i++) {
    printf ("%-26s %-16s %-16s %-16s \n", ptr[i].nama, ptr[i].npm, ptr[i].sma, ptr[i].telp);
    }

    free(ptr);
    return 0;
}
