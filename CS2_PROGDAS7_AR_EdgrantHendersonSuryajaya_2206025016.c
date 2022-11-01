//kode untuk menambahkan seluruh bilangan matrix dan mengtransposenya
#include <stdio.h>

//encrypt or decrypt a string using the spesified key
void decrypt(char input[101], int key){
	int i;

	//mengubah huruf menjadi kapital dan dikenakan keynya 
	for (i = 0; input[i] != '\0'; i++){
		if (input[i] == ' ') continue;//tidak menjalankan crypting karakter saat ada spasi
		
		input[i] = 'A' + input[i] - 'a' + key;
		if (input[i] > 'Z') input[i] -= 26;//membalikan karakter jika diluar jangkauan ('Z' + 1 = 'A')
	}
}

//cek input untuk hanya dapat lowecase
int checkInput(char input[101]){
	int i;
	
	//mengecek apakah dalam string terdapat karakter di luar jangkauan
	for (i = 0; input[i] != '\0'; i++){
		if(input[i] == ' ') continue;//spasi akan diskip pengecekan
		else if (input[i] < 'a' || input[i] > 'z') return 1;//true
	}

	return 0;//false
	
}

int main() {
	char string[101];
	int i, key, isLowercase = 1;
	
	//menyurun input ulang jika lowercase
	while(isLowercase){
		printf ("*********************input string lowercase*********************\n"
				"|                                                              |\n"
				"  Plaintext: ");
		gets(string);
		isLowercase = checkInput(string);
		if(isLowercase) printf("| Input anda salah, silahkan input ulang\n");
		printf ("|                                                              |\n"
				"****************************************************************\n\n\n");
	}
	
	printf ("*********************input key untuk decrypt********************\n"
			"|                                                              |\n"
			"  Key: ");
	scanf("%d", &key);
	printf ("|                                                              |\n"
			"****************************************************************\n\n\n");


	decrypt(string, key);
	printf ("====================hasil decrypt anda adalah===================\n"
			"|                                                              |\n"
			"  %s \n"
			"|                                                              |\n"
			"================================================================\n\n", string);
			
	scanf("%d", &key);
	return 0;
}
