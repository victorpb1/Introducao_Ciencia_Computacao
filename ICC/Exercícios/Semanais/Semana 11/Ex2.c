//Fa�a um algoritmo que leia 15 n�meros inteiros imprima a quantidade de n�meros pares.
#include <stdio.h>
int main()
{
    int n, qnt = 0, i;


    for(i = 1; i <= 15; i++)
    {
    printf("Insira 15 nmr int: ");
    scanf("%d", &n);

    if((n % 2) == 0 )
    {
       qnt = qnt +1;
    }
    }

    printf("A qntd de nrms pares: %.2d", qnt);
    return 0;
}

