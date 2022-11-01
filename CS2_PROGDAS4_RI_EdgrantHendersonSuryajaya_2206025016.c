//mendapatkan beberapa hal dari barisan aritmatika
#include <stdio.h>

int main(){
    int input;
    int i = 1;
    int a, b, un, n, bilPilih, u3; 
    
    printf("Masukkan -1 untuk memulai kalkulasi\n");
    
    while(input != -1){
		printf("Masukkan angka ke-%d \t: ", i);
        scanf("%d", &input);
        
        //mengecek apakah sudah 7 input
        if((i < 7) && (input == -1)){
        	printf("Angka yang dimasukkan belum cukup, silahkan memasukkan lebih banyak lagi!\n");
        	input = 0;
        	i--;	
		}
		
		//mendapatkan nilai a
		if(i == 1){
			a = input;
		}
		
		//mendapatkan nilai b
		if(i == 2){
			b = input - a;
		}
		
		//mendapatkan nilai terpilih
		if(i == 3){
			u3 = input;
			if(u3 % 2 == 1){
				bilPilih = input;
			}
		}//jika U3 ganjil 
		if((i == 4) && (u3 % 2 == 0)){
			bilPilih = input;
		}//jika U3 genap
		
		//mendapatkan Un dan n
		if(input != -1){
			un = input;
			n = i;
		}
		
		i++;
	}
	
	printf("\na \t\t\t= %d\n", a);
	printf("Un \t\t\t= %d\n", un);
	printf("n \t\t\t= %d\n", n);
	printf("b \t\t\t= %d\n", b);
	printf("bilangan dipilih \t= %d\n", bilPilih);
}
