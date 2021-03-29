#include <stdio.h>

int main() {

    float raio, volume;

    printf("Insira o volume do raio de uma esfera:");
    scanf("%f", &raio);

    volume = (4 * 3.14 *raio * raio * raio)/3;

    printf("O volume da esfera e %2.f", volume);
}