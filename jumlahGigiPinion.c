#include <stdio.h>
#include <math.h>

const float PI = 3.14;

//Buatlah program yang dapat menampilkan text dengan format (Nama / NPM) dan menghitung jumlah gigi pinion (gear penggerak)
//suatu pasangan gear: rack and pinion agar interferensi tidak terjadi berdasarkan rumus berikut:

//range =  14,5 – 35 

int main(){
	const int k = 1;
	float rad, degree, np;
	
	printf ("Nama: Edgrant Henderson Suryajaya\n"
			"NPM : 2206025016\n");
			
	while(1){
		printf("input teta : ");
		scanf("%f", &degree);
		if(degree > 14.5 && degree < 35){
			break;
		}
		printf("derajat anda tidak dalam jangkauan, silahkan diinput lagi\n");
	}
	
	rad = degree * PI/180;
	
	np = 2 * k / pow(sin(rad), 2);
	
	printf("Np = %.2f", np);
	
	return 0;
}

