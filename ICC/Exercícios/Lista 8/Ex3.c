/*
3. Faça um algoritmo que some todos os números compreendidos entre -10 à 100 e exiba o resultado.
*/
#include <stdio.h>
int main()
{
    int n, soma = 0;

    for(int i = -10; i <= 100; i++)
    {
            soma = soma+ i;
    }
    printf("Soma de -10 ate 100: %d", soma);
}