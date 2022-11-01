//kode untuk menambahkan seluruh bilangan matrix dan mengtransposenya
#include <stdio.h>

int main() {
	int matrix[5][5];
	int n = 1, m = 1;// n: baris input, m: kolom input
	int i, j;// counter loop
	int penambah, input;
	
	// meminta input dari user
	do{
		if(n > 5 || m > 5 || n < 1 || m < 1){
		printf ("=========================================================\n"
				"| inputan anda salah silahkan diisi lagi\n");
		}
		printf ("=========================================================\n"
				"| masukkan N\t:");
		scanf("%d", &n);
		printf ("| masukkan M\t:");
		scanf("%d", &m);
		printf ("| Adder\t\t:");
		scanf("%d", &penambah);
		printf ("=========================================================\n\n");
	}while (n > 5 || m > 5 || n < 1 || m < 1);


	//meminta data untuk matriks
	printf ("================= Masukan elemen matrix =================\n");
	for (i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &input);
			matrix[i][j] = input + penambah;//memasukan ke matrix data yang sudah ditambah
		}
	}
	printf ("=========================================================\n\n\n");

	
	//output hasil mentranspose matriks
	printf ("========================= Hasil =========================\n");
	for (i = 0; i < m; i++){
		printf("| ");
		for (j = 0; j < n; j++){
			printf("%d ", matrix[j][i]);//mengouput baris yang sudah ditranspose
		}
		printf("\n");
	}
	printf ("=========================================================\n");
	return 0;
}
