//menghitung jumlah 1, 2, dan 3 sampai dimasukkan terminal
#include <stdio.h>

int main(){
	int i = 1;
	int input;
	int count3 = 0;
	int count2 = 0;
	int count1 = 0;
	
	while(i <= 20){
		printf("input ke-%d : ", i); 
		scanf("%d", &input);
		if(input == 3){
			count3++;
		}
		else if(input == 2){
			count2++;
		}
		else if(input == 1){
			count1++;	
		}
		else {
			printf("angka salah, coba input ulang\n");
			i--;
		}//jika tidak diinput 1, 2, atau 3 tidak akan termasuk input jadi i tidak akan tambah
		i++;	
	} 
	
	printf("Jumlah 1 adalah: %d\n", count1);
	printf("Jumlah 2 adalah: %d\n", count2);
	printf("Jumlah 3 adalah: %d\n", count3);
	return 0; 
}
