#include <stdio.h>
int main()
{
    int D[10], aux[10];

    for (int i = 0; i < 10; i++)
    {
        //printf("Insira os valaores para o vetor: ");
        scanf("%d", &D[i]);

        aux[i] = D[i];           
    }
    
    aux[9] = D[1];
    aux[8] = D[0];
    
    aux[0] = D[8];
    aux[1] = D[9];

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", aux[i]);
    }
    
    
    return 0;
}