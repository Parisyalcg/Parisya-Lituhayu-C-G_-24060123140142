#include <stdio.h>

int main() {
    int i, N, sum;

    printf("Masukkan volume N: ");
    scanf("%d", &N);
    sum = 0;
    
    for (i = 1; i <= N; i++) 
    {
        sum += i;
    }
    printf("\n jumlah deret adalah :");
    printf("%d\n",sum);
}    