/*
6. Faça um algoritmo que leia três números inteiros, determinar qual o menor valor (imprima o menor valor).
*/
#include <stdio.h>

int funcao(float n1, float n2, float n3)
{
    if (n1 < n2 && n1 < n3)
    {
        printf("N1 eh o menor\n");

    }else if (n2 < n1 && n2 < n3)
    {
        printf("N2 eh o menor\n");

    }else if (n3 < n1 && n3 < n2)
    {
        printf("N3 eh o menor\n");
    }
}
int main()
{
    float n1, n2, n3;

    printf("Insira 3 nmrs: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    funcao(n1, n2, n3);
}