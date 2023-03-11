/*
6. Construa uma função para calcular o fatorial de número N e retornar a resposta.
*/
#include <stdio.h>
float fatorial(n)
{
    int i, resultado = 1;

    for (i = n; i > 1; i--)
    {
        resultado = resultado * i;
    }
    
    printf("\nO fatorial de %d, %d", n, resultado);
}
int main()
{
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);
    
    fatorial(n);
}