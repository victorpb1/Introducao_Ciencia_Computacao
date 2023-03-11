//Faça um algoritmo que some todos os números compreendidos entre -10 à 100 e exiba o resultado.
#include <stdio.h>
int main()
{
    int i, q = 0;

    for(i = -10; i <= 100; i++)
    {
        q = q + i;
    }
    printf("A soma entre -10 e 100: %.2d\n", q);
}
