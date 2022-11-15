#include <stdio.h>

int main(){
    int i, n;//i sebagai counter dan n menandakan counter sampai berapa
    printf ("************************Please Enter Input************************\n"
            "| \n"
            "| enter loop ammount: ");
    scanf ("%d", &n);
    printf ("| \n"
            "******************************************************************\n");

    for (i = 0; i < n; i++) {
        printf ("loop %d", n);
    }
    return 0;
}