#include <stdio.h>
int main(){

    int numero;

    

    for (numero = 1000; numero <= 1999;numero++)
    {
        if( numero % 11 == 5) {
            printf("%d\n", numero);

        }
        
        
    }
}