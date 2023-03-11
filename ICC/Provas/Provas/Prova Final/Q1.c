#include <stdio.h>
#define N 15

int fatorial(int valor[N])
{
    int aux = 0, i = 0, j, auxiliar;

    for (j = 0; j < N; j++)
    {
        auxiliar = valor[j];

        for(aux = 1; auxiliar > 1; auxiliar--)
        {
            aux = aux * auxiliar;
        }

        printf("\nO fatorial de %d, eh %d ", valor[i], aux);
        i++;       
    }
}
int main()
{
    int i, fat[N];

    for (i = 0; i < N; i++)
    {
        printf("Insira os valores de N: ");
        scanf("%d", &fat[i]);
    }

    fatorial(fat);

    return 0;
}