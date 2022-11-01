//mendapatka minimum, maximun, mean, dan median dari data umur
#include <stdio.h>

int main(){
    
    int input, jumPas, medianT, medianR, nMed;//input, jumlah pasien, median tinggi, median rendah, n median (letak median)
    float mean = 0;
    int max = -9999;
    int min = 9999;
    int i = 1;
    
    printf("masukkan jumlah pasien \t: ");
    scanf("%d", &jumPas);
    
    while(i <= jumPas){
		printf("Berat pasien ke-%d \t: ", i);
        scanf("%d", &input);
        
        //mencari max dan min
		if(input > max){
			max = input;
		}
		if(input < min){
			min = input;
		}
		
        //menentukan letak median
        nMed = (jumPas + 1) / 2;
		//mencari median
		if(jumPas % 2 == 0){
			if(nMed == i){
				medianR = input;
			}
			if(nMed + 1 == i){
				medianT = input;
			}
		}//mencari median untuk jumlah pasien genap
		else {
			if(nMed == i){
				medianR = input;
				medianT = input;
			}
		}//mencari median untuk jumlah pasien ganjil
		
		mean += input; // menghitung total berat
		i++;
	}
    
    mean /= (float)jumPas; //membagi total berat dengan jumlah pasien untuk mengetahui rata-rata
        
    printf("\nBerat badan terbesar \t: %d\n", max);
    printf("Berat badan terkecil \t: %d\n", min);
    printf("Rata-rata berat badan \t: %.2f\n", mean);
    printf("Median berat badan \t: %.1f\n", ((float)medianT + (float)medianR) / 2);//merata-ratakan median tinggi dan rendah
    return 0;
}
