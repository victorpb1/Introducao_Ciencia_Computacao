/*
5. Faça um algoritmo que leia 10 números inteiros imprima a soma dos números positivos
e a soma dos números negativos.
*/
#include <stdio.h>
int main()
{
    int n, positivo = 0, negativo = 0;

    for(int i = 0; i <= 9; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &n);

        if (n > 0)
        {
            positivo = positivo + n;
        }
        else if (n < 0)
        {
            negativo = negativo + n;
        }
    }

    printf("\nSoma dos positivos: %d\nSoma dos negativos: %d", positivo, negativo);
}