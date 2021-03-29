#include <stdio.h>

int main() {

    float valor_produto, percentual_desconto, valor_descontado, valor_produto_com_desconto;

    printf("Insira o valor do produto:");
    scanf("%f", &valor_produto);

    printf("Insira o desconto do produto:");
    scanf("%f", &percentual_desconto);

    valor_produto_com_desconto = valor_produto -(valor_produto * percentual_desconto / 100) ;

    valor_descontado = (valor_produto * percentual_desconto) / 100;

    printf("\nO valor do produto com desconto e:R$%2.f\n", valor_produto_com_desconto);
    printf("\nO valor do desconto e:R$%2.f\n", valor_descontado);





}