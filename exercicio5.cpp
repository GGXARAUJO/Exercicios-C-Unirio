#include <stdio.h>

int main() {
    
    float quantidade_bytes, velocidade_transmissao, tempo;

    printf("insira a quantidade de bytes:");
    scanf("%f", &quantidade_bytes);

    printf("insira a velocidade de transmissao:");
    scanf("%f", &velocidade_transmissao);

    tempo = quantidade_bytes / velocidade_transmissao;


    printf("\nSerao necessarios %1.f segundos para fazer o download desse arquivo\n", tempo);








}
                                          