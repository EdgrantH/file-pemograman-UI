#include <stdio.h>

int main (){
	//deklarasi variabel
	int golRonaldo, golMessi;
	
	//meminta data
	printf("Gol Ronaldo: ");
	scanf("%d", &golRonaldo);
	printf("Gol Messi: ");
	scanf("%d", &golMessi);
		
	//output berdasarkan siapa yang lebih banyak gol	
	if (golRonaldo > golMessi){
		printf("Ronaldo lebih banyak gol dengan %d gol\n", golRonaldo);
	}
	
	if (golRonaldo < golMessi){
		printf("Messi lebih banyak gol dengan %d gol\n", golMessi);
	}
	
	if (golRonaldo == golMessi){
		printf("Jumlah gol mereka sama\n");
	}
}
