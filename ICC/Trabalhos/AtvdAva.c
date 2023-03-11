#include <stdio.h>
int f(int V[10], int X)
{
    int soma = 0;

    for (int i = 0; i < 10; i++)
    {
        if ((V[i] % X) == 0 && V[i] > X)
        {
            soma = soma + V[i];
        }
    }

    return soma;
}
int main()
{
    int V[10] = {1, 11, 22, 1, 2, 4, 30, 0, 10, 20};
    int X = 10;

    printf("%d", f(V, X));
    return 0;
}