/*
1 - Construa uma função que receba um vetor U[15] de valores inteiro 
e um vetor Primos[15] que será preenchido dentro da função. O vetor 
Primos deve ser preenchido com todos os valores primos do vetor U. 
A função deve retornar a quantidade de valores primos contidos no vetor Primos.
*/
#include <stdio.h>
#define N 15
int funcao(int U[N])
{
    int i, j;
    int contador = 0;
    int primos[N];

    for (i = 0, j = 0; i < N; i++)
    {
        if ((U[i] % 2) != 0)
        {
            primos[j] = U[i];
            j++;
            contador++;
        }
    }

    printf("\n\nA quantidade de primos: %d\n", contador);
    printf("Os numeros primos: ");

    for (i = 0; i < contador; i++)
    {
        printf("%d ", primos[i]);
    }
    printf("\n");
}
int main()
{
    int i;
    int U[N];

    for (i = 0; i < N; i++)
    {
        printf("Insira o valor do vetor U: ");
        scanf("%d",&U[i]);
    }
    
    funcao(U);
}