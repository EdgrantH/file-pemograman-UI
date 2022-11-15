#include <stdio.h>

void geser(int *varA, int *varB, int *varC, int *varD){
    int temp;

    temp = *varA;
    *varA = *varD;
    *varD = *varC;
    *varC = *varB;
    *varB = temp;

}

int main(){
    int inpA, inpB, inpC, inpD; 
    printf ("==================================================================\n"
            "| \n"
            "| Program penukaran posisi 4 angka\n"
            "| \n"
            "==================================================================\n");

    printf ("************************Please Enter Input************************\n"
            "| \n"
            "| masukkan 4 input: ");
    scanf ("%d %d %d %d", &inpA, &inpB, &inpC, &inpD);
    printf ("| \n"
            "******************************************************************\n");

    geser(&inpA, &inpB, &inpC, &inpD);

    printf ("===========================Output Program=========================\n"
            "| \n"
            "| 4 output adalah: %d %d %d %d\n"
            "| \n"
            "==================================================================\n", inpA, inpB, inpC, inpD);
}