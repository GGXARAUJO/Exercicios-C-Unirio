#include <stdio.h>

int main() { 

    float lado_cubo, volume; 

    printf("Por favor o valor do lado do cubo:");
    scanf("%f", &lado_cubo);

    volume= lado_cubo * lado_cubo * lado_cubo;

    printf("\nO volume do cubo e: %.1f \n", volume);


    

}