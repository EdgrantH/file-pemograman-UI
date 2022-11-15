#include <stdio.h>

void histrogram(int length);
void ouputPartai(int suara[]);

int main(){
    int n;//jumlah partai
    int suara[1001];//array suara pemilu dengan ukuran n
    int i;//counter untuk for loop
    int jumlahSuara[3] = {0, 0, 0};//jumlah suara partai

    printf("Jumlah Pemilih: ");
    scanf("%d", &n);
    
    //meminta input sebanyak n mengenai suara pemilu
    for (i = 0; i < n; i++){
        scanf("%d", &suara[i]);
        jumlahSuara[suara[i]-1]++;
    }
    
    //mengoutput partai dan suara dengan parameter array suaranya dan ukuran array
    ouputPartai(jumlahSuara);

    return 0;
    
}

void ouputPartai(int jumlahSuara[]){
    printf("Partai  \tSuara  \tHistogram\n");//baris pertama

    printf("1       \t%d     \t", jumlahSuara[0]);//baris kedua
    histrogram(jumlahSuara[0]);//baris kedua
    
    printf("2       \t%d     \t", jumlahSuara[1]);//baris ketiga
    histrogram(jumlahSuara[1]);//baris ketiga

    printf("3       \t%d     \t", jumlahSuara[2]);//baris keempat
    histrogram(jumlahSuara[2]);//baris keempat
}

//mengoutput histogram dengan parameter panjang histogram
void histrogram(int length){
    int i;
    for (i = 0; i < length; i++){
        printf("#");
    }
    printf("\n");
}