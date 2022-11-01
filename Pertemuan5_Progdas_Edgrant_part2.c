//menghitung jumlah 1, 2, dan 3 dan memunculkan histogram
#include <stdio.h>

int main(){
	int i = 1;
	int input, n;
	int count3 = 0;
	int count2 = 0;
	int count1 = 0;
	
	printf("masukkan jumlah input yang diinginkan "); 
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++){
		printf("input ke-%d : ", i); 
		scanf("%d", &input);
		
		switch(input){
			case 1:
				count1++;
				break;
			case 2:
				count2++;
				break;
			case 3:
				count3++;
				break;
			default:
				printf("angka salah, coba input ulang\n");
				i--;
				break;
		}//jika tidak diinput 1, 2, atau 3 tidak akan termasuk input jadi i tidak akan tambah	
	}
	
	printf("Jumlah 1 adalah: ");
	for (i = 1; i <= count1; i++){
		printf("#");
	}
	printf("\n");
	printf("Jumlah 2 adalah: ");
	for (i = 1; i <= count2; i++){
		printf("#");
	}
	printf("\n");
	printf("Jumlah 3 adalah: ");
	for (i = 1; i <= count3; i++){
		printf("#");
	}
	printf("\n");
	
	return 0; 
}
