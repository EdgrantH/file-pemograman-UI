//program untuk menghitung jarak, kecepatan, percepatan, dan momentum sesaat berdasarkan waktu yang diberikan
#include <stdio.h>

float s(int t); //Fungsi perhitungan jarak tempuh (s)
float v(int t); //Fungsi perhitungan kecepatan (v)
float a(int t); //Fungsi perhitungan percepatan (a)
float p(int t); //Fungsi perhitungan momentum (P

int main (){
	int t, input;
	do{
		printf("****************************************\n");
		printf("Masukkan waktu sesaat : ");
		scanf("%d", &t);

		if (t > 300 || t < 0)
		{
			printf("waktu diluar jangkauan tolong diisi ulang\n");
		}
		printf("****************************************\n");
		
	}while(t > 300 || t < 0);

	while (input != 5){
		printf("\nApa yang anda ingin mengetahui?\n");
		printf("1. jarak tempuh\n");
		printf("2. kecepatan\n");
		printf("3. percepatan\n");
		printf("4. momentum\n");
		printf("5. keluar dari program\n");
		printf("ketik 1-5: ");
		scanf("%d", &input);
		
		switch (input){
			case 1:
				printf("jarak tempuh adalah %.3f\n", s(t));
				break;
			case 2:
				printf("kecepatan adalah %.3f\n", v(t));
				break;
			case 3:
				printf("percepatan adalah %.3f\n", a(t));
				break;
			case 4:
				printf("momentum adalah %.3f\n", p(t));
				break;
			default:
				break;
		}//switch untuk mengoutput jenis data yang diinginkan
	printf("****************************************\n");
	}//loop untuk mengoutput beberapa jenis data
	return 0;
}
float s(int t){
	float output = 0.04*t*t*t + 2*t*t + 30;
	return output;
}

float v(int t){
	float output = 0.12*t*t + 4*t;
	return output;
}

float a(int t){
	float output = 0.24*t + 4;
	return output;
}

float p(int t){
	float kecepatan = v(t);
	float output = kecepatan*105;
	return output;
	
}
