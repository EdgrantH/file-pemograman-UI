#include <stdio.h>
#include <math.h>

int cekganjil(int i){
    if (i %2 == 1) 
        return 1;
    else
        return 0;

}
int cekkubik(int i){
    int anum; 
    float akar;
    akar=cbrt((double)i); 
    anum=akar; 
    if(anum==akar)
        return 1;
    else
        return 0;
}
int main(){
    int i;

    printf("Masukkan nilai input, tekan -1 untuk cancel\n");
    do {
        scanf("%d",  &i);

         if (i != -1){ 
                if(cekganjil(i) && cekkubik(i)){
                printf("\nGanjil Kubik");
                }
                if(cekganjil(i)){
                printf("\nGanjil");
                }
                if(cekkubik(i)){
                printf("\nKubik");
                }
                }else {
                printf("Tidak termasuk ganjil ataupun kubik\n");
                }

        }while (i != -1);
        return 0;}