#include <stdio.h>

int main (){
	//deklarasi variabel
	int nilaiMat, nilaiIpa, nilaiIndo, kkm; //variabel untuk nilai Matematika, nilai IPA, nilai Bahasa Indonesia, dan kkm
	float nilaiTotal; //variabel untuk nilaiTotal
	kkm = 18;
	
	//meminta data
	printf("Nilai IPA: ");
	scanf("%d", &nilaiMat);
	printf("Nilai Matematika: ");
	scanf("%d", &nilaiIpa);
	printf("Nilai Bahasa Indonesia: ");
	scanf("%d", &nilaiIndo);
		
	//menghitung nilaiTotal
	nilaiTotal = (nilaiMat + nilaiIpa + nilaiIndo);
		
	//output nilaiTotal
	printf("NEM = %.2f\n", nilaiTotal / 10);	
	//output dengan mengecek status kelulusan	
	if (nilaiTotal >= 10 * kkm){
		printf("Selamat anda dinyatakan LULUS Ujian Nasional");
	} 
	/*mengecek apakah nem lebih besar atau sama dengan kkm. Karena nem adalah nilaiTotal / 10, maka
	dalam persamaan dapat ditulis sebagai nem < 10*kkm dibanding menulis nem / 10 < kkm. Ini dilakukan untuk 
	meminimalkan desimal karena komputer rentan mengalami kesalahan saat menghitung desimal.*/
	if (nilaiTotal < 10 * kkm){
		printf("Anda dinyatakan TIDAK LULUS Ujian Nasional");
	}
	//ini sama seperti atasnya, han ya mengecek jika lebih keil.
}
