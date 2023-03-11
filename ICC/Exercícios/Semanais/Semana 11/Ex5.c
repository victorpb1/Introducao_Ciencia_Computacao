//Faça um algoritmo que leia 10 numeros inteiros imprima a soma dos numeros positivos
//e a soma dos numeros negativos.
#include <stdio.h>
int main()
{
    int q, p = 0, n = 0;

    for(int i = 1; i <= 10; i++)
    {
        printf("Insira 10 numeros: ");
        scanf("%d", &q);

    if (q < 0)
    {
    n += q;

    }else{

    p += q;

    }
    }
    printf("\nSoma dos negativos: %d\n", n);
    printf("\nSoma dos positivo: %d\n", p);
}

