#include <stdio.h>
#include <math.h>
#include "code1.h"

float luasSegitiga(int sisiA, int sisiB, int sisiC);
float luasSegiempat(int panjang, int lebar);

int main(){
	int i = 1;
	while(1){
		int sisiSegi3A, sisiSegi3B, sisiSegi3C, tinggiPrisma, akhirProgram;
		float luasPermukaan, luasAlas, volumePrisma;

		printf("****************prisma %d****************\n", i);
		printf("Masukkan sisi a segitiga alas: ");
		scanf("%d", &sisiSegi3A);
		printf("Masukkan sisi B segitiga alas: ");
		scanf("%d", &sisiSegi3B);
		printf("Masukkan sisi a segitiga alas: ");
		scanf("%d", &sisiSegi3C);
		printf("Masukkan tinggi prisma: ");
		scanf("%d", &tinggiPrisma);
		printf("\n");

		luasAlas = luasSegitiga(sisiSegi3A, sisiSegi3B, sisiSegi3C);
		luasPermukaan = 2*luasAlas + luasSegiempat(tinggiPrisma, sisiSegi3A) + luasSegiempat(tinggiPrisma, sisiSegi3B) + luasSegiempat(tinggiPrisma, sisiSegi3C);
		volumePrisma = luasAlas*tinggiPrisma;
		printf("luas permukaan prisma = %.3f\n", luasPermukaan);
		printf("volume prisma = %.3f\n", volumePrisma);

		printf("apakah anda ingin lanjut?\n");
		printf("1. iya\n");
		printf("2. tidak\n");
		printf("Ketik 1 atau 2: ");
		scanf("%d", &akhirProgram);
		if(akhirProgram == 2){
			printf("****************************************\n\n");
			break;
		}
		else{
		printf("****************************************\n\n");
		}
		i++;
	}
	return 0;
}