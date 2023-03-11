/*
4. Elabore um algoritmo que imprima todos os números pares compreendidos entre 85 e 907. 
O programa deve também calcular e mostrar a soma desses valores.
*/
#include <stdio.h>
int soma()
{
    int soma = 0;

    for(int i = 85; i <= 907; i++)
    {
        soma = soma+ i;
    }
    printf("Soma de 85 ate 907: %d", soma);
}
int main()
{
    int n, par = 0;

    for(int i = 85; i <= 907; i++)
    {
        if (i % 2 == 0)
        {
            par = par + 1;
        }
    }
    soma();
    printf("\nQntd de nmrs pares: %d", par);
}