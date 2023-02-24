#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char name[30];
    int age;
    float weight;
    float height;
} person;


int main(){
    int i, n;
    printf("Number of person: ");
    scanf("%d", &n);
    person *homosapiens = (person*) calloc (n, sizeof(person));

    //error handling untuk gagal membuat calloc
    if (homosapiens == NULL){
        printf("Alokasi data gagal, silahkan isi ulang");
        main();
    }
    
    for (i = 0; i < n; i++){
        printf("Nama homosapien ke-%d: ", i + 1);
        scanf(" %[^\n]s", &homosapiens[i].name);
        printf("Umur homosapien: ke-%d: ", i + 1);
        scanf("%d", &homosapiens[i].age);
        //error handling negatif
        if (homosapiens[i].age < 0){
            printf ("angka negatif, silahkan isi ulang\n");
            main();
        }
        printf("Berat homosapien: ke-%d: ", i + 1);
        scanf("%f", &homosapiens[i].weight);
        //error handling negatif
        if (homosapiens[i].weight < 0){
            printf ("angka negatif, silahkan isi ulang\n");
            main();
        }
        printf("Tinggi homosapien: ke-%d: ", i + 1);
        scanf("%f", &homosapiens[i].height);
        //error handling negatif
        if (homosapiens[i].height < 0){
            printf ("angka negatif, silahkan isi ulang\n");
            main();
        }
        printf("\n");
    }
    for (i = 0; i < n; i++) {
        printf("name: %s\t age: %d\t berat: %.1f\t tinggi: %.1f\n", homosapiens[i].name, homosapiens[i].age, homosapiens[i].weight, homosapiens[i].height);
    }

    return 0;
}
