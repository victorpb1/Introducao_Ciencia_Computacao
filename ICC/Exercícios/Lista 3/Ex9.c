/*
9 - Considerando que, para um consórcio, leia do teclado o número total de prestações, a quantidade de 
prestações pagas e o valor da prestação (fixa). Faça um algoritmo que determine o total pago pelo consorciado
e o saldo devedor.
*/
#include <stdio.h>

int main()
{
    int total_prestacoes, prestacoes_pagas;
    float valor_prestacao;

    printf("Insira o total de prestacoes: ");
    scanf("%i", &total_prestacoes);
    printf("Insira a quantidade de prestacoes pagas: ");
    scanf("%i", &prestacoes_pagas);
    printf("Insira o valor da prestacao: ");
    scanf("%f", &valor_prestacao);

    printf("\nO total pago pelo consorciado: R$%.2f", (float)prestacoes_pagas*valor_prestacao);
    printf("\nAinda restam R$%.2f a serem pagos!\n", (float)(total_prestacoes - prestacoes_pagas)*valor_prestacao);

}