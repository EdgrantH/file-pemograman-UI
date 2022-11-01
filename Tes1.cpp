#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for (i = 0; i < N; i++) 
    {
        for (int j = N-1; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}