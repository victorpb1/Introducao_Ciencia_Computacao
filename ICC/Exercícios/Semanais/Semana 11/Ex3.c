//Fa�a um algoritmo que some todos os n�meros compreendidos entre -10 � 100 e exiba o resultado.
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
