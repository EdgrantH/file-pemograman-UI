//mencetak jam pasir
#include <stdio.h>

int main(){
   	char pola;
   	int pemilihanPola, n, i, j, spasi;
   
   	printf("pilih pola yang mau ditampilakan \nketik 1 untuk * \nketik 2 untuk $\nketik 3 untuk #\nketik 4 untuk @\n\nKetik angka:");
   	scanf("%d", &pemilihanPola);
   	switch (pemilihanPola){
   		case 1:
   			pola = '*';
   			break;
   		case 2:
   			pola = '$';
   			break;
   		case 3:
   			pola = '#';
   			break;
   		case 4:
   			pola = '@';
   			break;
   		default:
   			printf("angka yang diinput salah\n default akan menggunakan *\n");
   			pola = '*';
			break;
   	}//pemilihan pola
   
   	printf("masukkan tinggi jam pasir: ");
   	scanf("%d", &n);
   
   	for (i = n; i >= 1; i -= 2) {
			for (spasi = 0; spasi < (n - i ) / 2; spasi++){
				printf(" ");
			}
		
      		for (j = 1; j <= i; j++) {
       			 printf("%c", pola);
      		}
      		
      		printf("\n");
   		}	//mencetak piramida kebalik
   
   	switch (n % 2){
   		case 0:
   			i = 2;
   			break;
   		case 1:
   			i = 3;
   			break;
	}//memilih nilai awal i berdasarkan ganjil atau genap
	
	for (; i <= n; i += 2) {
			for (spasi = (n - i ) / 2; spasi > 0; spasi--){
				printf(" ");
			}
		
      		for (j = i; j >= 1; j--) {
        		printf("%c", pola);
      		}
      	
      		printf("\n");
   		}//mencetak segitiga right side up
   	
   return 0;
}
