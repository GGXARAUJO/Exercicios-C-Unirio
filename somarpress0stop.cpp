#include <stdio.h>

int main() {
    int soma, n;

printf("N:");
scanf("%d", &n);

    soma = 0;

    while (n != 0)
    {
        
        soma = soma + n;
        scanf("%d", &n);
    }
printf( "%d ", soma);


 }
