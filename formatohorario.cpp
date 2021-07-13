#include <stdio.h>

int main() {

    int horario_segundos;
    float horariofinal;

    printf("Informe o tempo em segundos: ");
    scanf("%d", &horario_segundos);

    horariofinal =  horario_segundos%3600 ; 
    printf("o seu tempo e : %.2f", horariofinal ); 




}