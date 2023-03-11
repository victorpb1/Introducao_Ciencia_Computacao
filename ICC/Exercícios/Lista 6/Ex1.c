/*
1. Faça um algoritmo que leia dois valores do teclado do tipo real e verifique qual o maior valor. Imprima
qual é o maior valor.
*/
#include <stdio.h>
int verificar (float n1, float n2)
{
    if (n1 > n2)
    {
        printf("N1 eh maior q N2\n");
    }
    else if (n2 > n1)
    {
        printf("N2 eh maior q N1\n");
    }
}
int main()
{
    float n1, n2;

    printf("Insira 2 valores reais: ");
    scanf("%f%f", &n1, &n2);

    verificar(n1, n2);
}