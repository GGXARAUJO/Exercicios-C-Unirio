#include <stdio.h>

int main() {

    float KM, Milhas;

    printf("Insira a velocidade em KM:");
    scanf("%f", &KM);

    Milhas = 0.621371 * KM;

    printf("\nO resultado da conversao e:%f", Milhas);
}
