/*
3 - Entrar com dois números reais e imprimir a média aritmética com a mensagem "média" antes do resultado.
*/
#include <stdio.h>

int main()
{
    float a, b;

    printf("Insira 2 numeros reais: ");
    scanf("%f%f", &a, &b);

    printf("\nA media: %.2f\n", (a + b)/2);
}