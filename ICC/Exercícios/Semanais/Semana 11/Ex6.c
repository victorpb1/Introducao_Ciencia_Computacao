//Construa uma função para calcular o 
//fatorial de numero N e retornar a resposta.
#include <stdio.h>
int fat(int n)
{
    int i, r;
    r = n;
    i = 1;
    while(n > 1)
    {
        i = n * i;
        n--;
    }
    printf("\nO fatorial de %d eh %d\n", r, i);
}
int main(int i)
{
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    fat(n);
}
