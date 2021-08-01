#include <stdio.h>

int main (){
    int n, m, k, soma, qtd;
float media;

    printf("N:");
    scanf("%d", n);

    printf("M:");
    scanf("%d", m);

    printf("K:");
    scanf("%d", k);
    
    qtd = 0;
    soma = 0;


    for (int i = n; i <= m; i++)
    {
        if( i % k == 0)
        {
            printf("%d", i);
            soma++;
            qtd++;
        }
        media = (float) soma /qtd;
        printf("Soma: %d", soma);
        printf("Media : %2f", media);
    }
    
}