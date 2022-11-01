#include <stdio.h>

int main(){
    int i;//increment
    int pernah1 = 1, pernah2 = 1, pernah3 = 1;
    long input;
    long long limit1, limit2, limit3, saldo1, saldo2, saldo3, utang1, utang2, utang3;

    printf("ADMIN VIEW: \n");
    printf("Nomor Akun: \n");
    printf("1. 2206024682\n");
    printf("2. 2206025016\n");
    printf("3. 2206025224\n");
    printf("_______________\n\n");
	//mengulang program sebanyak 3 kali
    for (i = 1; i <= 3; i++){
        printf("Masukkan nomor rekening kamu: ");
        scanf("%d", &input);
        //memasukkan data 3 nomor rekening berdasarkan input
        switch (input) {
        case 2206025016:
            printf("Nama: Aliyah Rizky Al-afifah Polanda\n");
            //meminta input user jika belum pernah mengisi input
            if(pernah1){
                printf("Input limit kredit sebelum resesi: Rp.");
                scanf("%d", &input);
                limit1 = input;

                printf("Input saldo kredit yang tersisa: Rp.");
                scanf("%d", &input);
                saldo1 = input;
                
                printf("\nlimit baru rupakan %d\n", limit1 / 4);
                utang1 = (limit1 / 4 - saldo1)*-1;
                
                if(utang1 > 0){
                	printf("utang anda sebesar %d\n", utang1);
				}
				else{
					printf("anda tidak memiliki utang\n");
				}
            }
            //mencetak data hasil input jika sudah diinput
            else{
                printf("limit baru anda merupakan Rp.%d\n", limit1 / 4);
                printf("Saldo anda yang tersisa Rp.%d\n", saldo1);
                
                if(utang1 > 0){
                	printf("utang anda sebesar %d\n", utang1);
				}
				else{
					printf("anda tidak memiliki utang\n");
				}
            }
            pernah1 = 0;
            break;
            
        case 2206024682:
            printf("Nama: Edgrant Henderson Suryajaya\n");
            //meminta input user jika belum pernah mengisi input
           	if(pernah2){
                printf("Input limit kredit sebelum resesi: Rp.");
                scanf("%d", &input);
                limit2 = input;

                printf("Input saldo kredit yang tersisa: Rp.");
                scanf("%d", &input);
                saldo2 = input;
                
                printf("\nlimit baru rupakan %d\n", limit2 / 4);
                utang2 = (limit2 / 4 - saldo2)*-1;
                
                if(utang2 > 0){
                	printf("utang anda sebesar %d\n", utang2);
				}
				else{
					printf("anda tidak memiliki utang\n");
				}
            }
            //mencetak data hasil input jika sudah diinput
            else{
                printf("limit baru anda merupakan Rp.%d\n", limit2 / 4);
                printf("Saldo anda yang tersisa Rp.%d\n", saldo2);
                
                if(utang2 > 0){
                	printf("utang anda sebesar %d\n", utang2);
				}
				else{
					printf("anda tidak memiliki utang\n");
				}
            }
            pernah2 = 0;
            break;
            
        case 2206025224:
            printf("Nama: Louis Benedict Archie\n");
            //meminta input user jika belum pernah mengisi input
            if(pernah3){
                printf("Input limit kredit sebelum resesi: Rp.");
                scanf("%d", &input);
                limit3 = input;

                printf("Input saldo kredit yang tersisa: Rp.");
                scanf("%d", &input);
                saldo3 = input;
                
                printf("\nlimit baru rupakan %d\n", limit3 / 4);
                utang3 = (limit3 / 4 - saldo3)*-1;
            	
                if(utang3 > 0){
                	printf("utang anda sebesar %d\n", utang3);
				}
				else{
					printf("anda tidak memiliki utang\n");
				}
            }
            //mencetak data hasil input jika sudah diinput
            else{
                printf("limit baru anda merupakan Rp.%d\n", limit3 / 4);
                printf("Saldo anda yang tersisa Rp.%d\n", saldo3);
                
                if(utang3 > 0){
                	printf("utang anda sebesar %d\n", utang3);
				}
				else{
					printf("anda tidak memiliki utang\n");
				}
            }
            pernah3 = 0;
            break;    
            
        default:
            printf("Nomor anda tidak terdata\n");
            i--;
            break;
        }
    printf("\n\n");
	}
    
	return 0;
}
