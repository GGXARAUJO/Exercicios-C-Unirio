#include <stdio.h>

int main() {

float altura, base;

int area;

printf("valor da base:");
scanf("%f", &base);

printf("valor da altura:");
scanf("%f", &altura);

area = base * altura /2;

printf("\nA area do triangulo e:%.1d\n", area);

}