//program untuk menentukan bilangan ganjil, genap, dan kubik
#include <stdio.h>
#include <math.h>

void tesKubik(float cube){
	int output = 0;
	float angkaKoma = cbrt(cube) - (int)cbrt(cube);//mendapatkan angka yang dibelakang koma, dengan mengurangkan akar kubik dengan buletan ke bawahnya.
	if (angkaKoma == 0){
		printf("Kubik");
	}//mengecek apakah angka kubik 
}

void tesGanjil(int input){
	int output = 0;
	if(input % 2 == 1){
		printf("Ganjil");
	}//output jika ganjil
	else{
		printf("Genap");
	}//output jika genap
}

int main (){
	int input;
	while (input != -1){
		
		printf("*********************************************************\n");
		printf("| Program pengecekan bilangan ganjil, genap, atau kubik |\n");
		printf("|           Input -1 untuk mengakhiri program           |\n");
		printf("*********************************************************\n");
		printf("Silahkan memasukkan angka anda: ");
		scanf("%d", &input);
		
		if(input == -1){
			break;
		}//mengakhiri program jika dimasukkan -1

		printf("Angaka anda bersifat ");
		tesGanjil(input);
		tesKubik(input);
		printf("\n");
		printf("\n");
	}
	return 0;
}

