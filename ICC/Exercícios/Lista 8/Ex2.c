/*
2. Faça um algoritmo que leia 15 números inteiros imprima a quantidade de números pares.
*/
#include <stdio.h>
int main()
{
    int n, par = 0;

    for(int i = 0; i <= 14; i++)
    {
        printf("Insira um numero: ");
        scanf("%d", &n);

        if (n % 2 == 0)
        {
            par = par + 1;
        }
    }
    printf("\nQntd de nmrs pares: %d", par);
}