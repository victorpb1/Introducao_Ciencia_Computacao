/*
5. Faça um algoritmo que determine se um dado número informado é positivo, negativo ou zero.
*/
#include <stdio.h>

int tipo(float n)
{
    if (n > 0)
    {
        printf("N eh positivo\n");

    }else if(n < 0)
    {
        printf("N eh negativo\n");

    }else if (n == 0)
    {
        printf("N eh zero\n");
    }
}
int main()
{
    float n;

    printf("Insira o nmr: ");
    scanf("%f", &n);

    tipo(n);
}