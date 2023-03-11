/*
1. Faça um algoritmo que leia 10 números inteiros imprima a quantidade de números positivos.
*/
#include <stdio.h>
int main()
{
    int n, positivo = 0;

    for(int i = 0; i <= 9; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &n);

        if (n > 0)
        {
            positivo = positivo + 1;
        }
    }
    printf("\nQntd de nmrs positivos: %d", positivo);
}