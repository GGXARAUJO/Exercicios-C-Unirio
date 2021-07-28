#include <stdio.h>

int main() {
    int contador, n, soma;

printf("N:");
scanf("%d", &n);

    contador = 1;
    soma = 0;

    while (contador <= n)
    {
        printf( "%d ", contador);
        contador = contador + 1;
        soma = (soma + contador);
        

    }

printf( "%d ", soma - n);

 }
