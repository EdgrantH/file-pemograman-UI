#include <stdio.h>

int main(){
    int i, n;//i sebagai counter dan n menandakan counter sampai berapa
    printf ("************************Please Enter Input************************\n"
            "| \n"
            "| enter repeat how many times : ");
    scanf ("%d", &n);
    printf ("| \n"
            "******************************************************************\n");

    for (i = 0; i < n; i++) {
        printf ("%d\n", i);
    }
    return 0;
}