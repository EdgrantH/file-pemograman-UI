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
	
	do{
		printf("input ke-%d : ", i); 
		scanf("%d", &input);
		
		if(input <= 3){
			if(input == 3){
			count3++;
			}
			if(input == 2){
				count2++;
			}
			if(input == 1){
				count1++;	
			}
		} else {
			printf("angka salah, coba input ulang\n");
			i--;
		}//jika tidak diinput 1, 2, atau 3 tidak akan termasuk input jadi i tidak akan tambah
		i++;	
	}while (i <= n);
	
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
