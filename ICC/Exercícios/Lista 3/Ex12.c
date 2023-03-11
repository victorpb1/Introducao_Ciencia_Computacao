/*
12 - Um hotel deseja fazer uma promoção especial de final de semana, concedendo um desconto de 25% na diária. 
Sendo informados, através do teclado, o número de apartamentos do hotel e o valor da diária por apartamento 
para o final de semana completo, elabore um programa para calcular e mostrar:
*/
#include <stdio.h>

int main()
{
    int nmr_aptos;
    float valor_diaria, valor_promocional;

    printf("Insira o numero de aptos: ");
    scanf("%i", &nmr_aptos);
    printf("Insira o valor da diaria: ");
    scanf("%f", &valor_diaria);

    valor_promocional = valor_diaria * 75/100;

    printf("\nValor promocional da diaria: %.2f", valor_promocional);
    printf("\nArrecadacao com 100: %.2f", (float)valor_promocional*nmr_aptos);
    printf("\nArrecadacao com 70: %.2f", (float)nmr_aptos*70/100 * valor_promocional);
    printf("\nArrecadacao perdida pela promocao: %.2f\n",(float)nmr_aptos*30/100 * valor_promocional);
}