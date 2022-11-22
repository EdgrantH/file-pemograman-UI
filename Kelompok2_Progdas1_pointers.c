#include <stdio.h>
#include <stdlib.h>

//bagian 1 + pembuka
void histrogram(int n);

//bagian 2
void print_suara(int suara[], int *total);

int main(){
	
	//bagian 3
    int i = 1, input, total = 0;//i sebagai counter
    int* suara = (int*) calloc(3, sizeof(int));//list untuk menyimpan jumlah suara
    if(suara == NULL){
        printf ("Pembuatan list salah\n");
        main();
    }
    
    //loop untuk mengoutput
    while(1){
        printf ("************************Please Enter Input************************\n"
                "| \n"
                "| ketik -1 untuk berhenti\n"
                "| masukan suara %d: ", i);
        scanf ("%d", &input);
        printf ("| \n");
        
        //jika inputan diluar range, diminta input ulang
        if(input > 3 || input < -1){
            printf ("| input anda salah\n");
            continue;
        } 

        suara[input-1]++;
        
        if (input == -1) break;//mengeluarkan loop jika diinput -1
        i++;
    }
    printf 		("******************************************************************\n");

	//bagian 4 + penutup
    print_suara(suara, &total);

    printf("\nTotal suara = %d", total);
    
    free(suara);//berfungsi untuk membuang memori yang tidak dipakai
    return 0;
}

void histrogram(int n){
    int i;
    for (i = 0; i < n; i++) {
        printf("#");
    }
}

void print_suara(int suara[], int *total){
    int i;//sebagai counter
    printf("No\t Jumlah\t Histogram\n");
    for (i = 0; i < 3; i++) {
        *total += suara[i];

        printf("%d\t %d\t ", i+1, suara[i]);
        histrogram(suara[i]);
        printf("\n");
    }
}