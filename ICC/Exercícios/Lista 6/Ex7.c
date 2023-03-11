/*
7. Construa um algoritmo que leia três números inteiros, em seguida exiba-os em ordem crescente. Se os números
forem iguais, exiba a mensagem “Os números não podem ser iguais”.
*/
#include <stdio.h>
int N1(float n1, float n2, float n3)
{
    if (n1 < n2 && n2 < n3)
    {
        printf("N1 < N2 < N3\n");

    }else if (n1 < n3 && n3 < n2)
    {
        printf("N1 < N3 < N2\n");
    }
}
int N2(float n1, float n2, float n3)
{
    if (n2 < n1 && n1 < n3)
    {
        printf("N2 < N1 < N3\n");
    
    }else if (n2 < n3 && n3 < n1)
    {
        printf("N2 < N3 < N1\n");
    }
}
int N3(float n1, float n2, float n3)
{
    if (n3 < n1 && n1 < n2)
    {
        printf("N3 < N1 < N2\n");

    }else if (n3 < n2 && n2 < n1)
    {
        printf("N3 < N2 < N1\n");
    }
}
int iguais(float n1, float n2, float n3)
{
    if (n1 == n2 && n1 == n3)
    {
        printf("\nOs nmrs nao podem ser iguais!!!\n");
    }
}
int main()
{
    float n1, n2, n3;

    printf("Insira 3 nmrs: ");
    scanf("%f%f%f", &n1, &n2, &n3);

    N1(n1, n2, n3);
    N2(n1, n2, n3);
    N3(n1, n2, n3);
    iguais(n1, n2, n3);
}