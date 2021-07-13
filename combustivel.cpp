#include <stdio.h>
int main(){
    char tipo_combustivel;
    int litros;
    float valor_paga;

    printf("tipo de combustivel (A-alcool ou G-gasolina) : ");
    scanf("%s", &tipo_combustivel);

    printf("quantidade de litros : ");
    scanf("%d", &litros);
    
    if (tipo_combustivel == 'A' ){

       if(litros <= 20 )

           valor_paga = litros * 2.90 * 0.97;
       
       else 
           valor_paga= litros * 2.90 * 0.95;


    }
    else {

        if(litros <= 20 )

           valor_paga = litros * 3.3 * 0.96;
       
       else 
           valor_paga= litros * 3.3* 0.94;



    }

    printf("O valor a pagar e : R$ %.2f" , valor_paga);

}