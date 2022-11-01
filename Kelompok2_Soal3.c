#include <stdio.h>

int main (){
	int umur; //deklarasi variabel
	int umurSaya = 20;
	
	printf("Nama: \nEdgrant Henderson Suryajaya\nLouis Benedict Archie\nAliyah Rizky Al-Afifah\nFarhan Nuzul Noufendri\n\nNPM: \n2206025016\n2206025224\n2206024682\n2206024442"); // tampilkan nama dan npm
	printf("\n\nBerapakah umur Anda saat ini?\n");
	scanf("%d", &umur); //memasukan nilai ke variabel umur
	
	printf("Umur anda adalah %d\n", umur); //print nilai variabel	
	
	if (umur > umurSaya){
		printf("Anda lebih tua daripada saya\n");
	}//cek dan output jika umur lebih besar
	
	if (umur < umurSaya){
		printf("Anda lebih muda daripada saya\n");
	}//cek dan output jika umur lebih kecil
	
	if (umur == umurSaya){
		printf("Anda umurnya sama dengan saya\n");
	}//cek dan output jika umur sama
}
