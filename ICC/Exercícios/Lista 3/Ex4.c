/*
4 - Uma empresa contrata um encanador a R$80,00 por dia. Crie um algoritmo que solicite o número de dias 
trabalhados pelo encanador e imprima o valor líquido a ser pago, sabendo que são descontados 8% de 
imposto de renda. *
*/
#include <stdio.h>

int main()
{
    int dia;
    float valor;

    printf("Insira o nmr de dias: ");
    scanf("%i", &dia);

    valor = (dia * 80) - ((dia * 80)*8/100);

    printf("\nO valor a ser pago: %.2f", valor);
}