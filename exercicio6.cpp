#include <stdio.h>


int main() {

    float graus_em_celsius, graus_em_fahrenheit;

    printf("Insira o valor em graus Celsius:");
    scanf("%f", &graus_em_celsius);

    graus_em_fahrenheit = (graus_em_celsius * 9/5) + 32;

     printf("%1.f Fahrenheit", graus_em_fahrenheit);
    


}