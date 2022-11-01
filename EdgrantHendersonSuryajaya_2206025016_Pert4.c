//Mencetak 10 bilangan yang habis dibagi 3 dan 5
#include <stdio.h>

int main(){
    int i = 1; // mendefinisikan variabel i sebagai counter sekaligus angka yang akan dicek
    int memory3 = 0;
    int memory5 = 0;
    int input, n, out3, out5;
    
    while (i<=10){
        scanf("%d", &input);
        if(input % 3 == 0){
            n = input/3; // n = pangkat
            int j = 1;
            int tempPangkat = 1;
            while(j <= n){
                tempPangkat = tempPangkat * 10;
                j++;
            }
            memory3 += tempPangkat; 
        }
        if(input % 5 == 0){
            n = input/5; // n = pangkat
            int j = 1;
            int tempPangkat = 1;
            while(j <= n){
                tempPangkat = tempPangkat * 10;
                j++;
            }
            memory5 += tempPangkat; 
        }
        i++;
    }
    
    //printf("\n\n\n%d\n\n\n", memory5); //debuging
    
    i = 1;
    printf("angka yang dapat dibagi 3: ");
    while (memory3 != 0){
        memory3 /= 10;
        
        if(memory3 % 10 != 0){
            out3 = 3*i;
            printf(" %d", out3);
        }
    //    printf("%d\n", memory3); //debuging
        i++;
    }
    printf("\n");
    
    i = 1;
    printf("angka yang dapat dibagi 5: ");
    while (memory5 != 0){
        memory5 /= 10;
        
        if(memory5 % 10 != 0){
            out5 = 5*i;
            printf(" %d", out5);
        }
    //    printf("%d\n", memory3); //debuging
        i++;
    }
    printf("\n");
    
    return 0;
}

