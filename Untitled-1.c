#include <stdio.h>

void histrogram(int length);

int main(){
    
}

//mengoutput histogram dengan parameter panjang histogram
void histrogram(int length){
	int i;
    for (i = 0; i < length; i++){
        printf("#");
    }
    printf("\n");
}

//mengoutput partai dan suara dengan parameter array suaranya dan ukuran array
void ouputPartai(int suara[], int size){
    int jumlah1 = 0, jumlah2 = 0, jumlah3 = 0, i;
    for (i = 0; i < size; i++){
        switch (suara[i]){
        case 1:
            jumlah1++;
            break;
        case 2:
            jumlah2++;
            break;
        case 3:
            jumlah3++;
            break;
        default:
            break;
        }
    }
    

    printf("Partai  \tSuara  \tHistogram\n");//baris pertama

    printf("1       \t%d     \t", jumlah1);//baris kedua
    histrogram(jumlah1);//baris kedua
    
    printf("2       \t%d     \t", jumlah2);//baris ketiga
    histrogram(jumlah2);//baris ketiga


    printf("3       \t%d     \t", jumlah3);//baris keempat
    histrogram(jumlah3);//baris keempat
}
