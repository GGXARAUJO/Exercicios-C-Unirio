#include <stdio.h>

int main(){

float peso, altura, IMC;


printf("Diga qual e sua altura:");
scanf("%f", &altura);

printf("Diga qual e seu peso:");
scanf("%f", &peso);

IMC = peso / (altura * altura);

printf("\nSeu IMC e:%.2f\n", IMC);

}