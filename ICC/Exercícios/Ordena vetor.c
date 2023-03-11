#include <stdio.h>
int main()
{
    int vetor[10], maior, maior_2, contador = 0, aux = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        aux = vetor[0];
        if(vetor[i] == aux)
        {
            contador++;
        }
    }
    if (contador == 10)
    {
        printf("Maior: %d", vetor[1]);
        return 0;
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            maior = vetor[i];
            maior_2 = vetor[i];
        }
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (vetor[i] == maior)
        {
            maior_2 = maior - 1;

        }else if(vetor[i] > maior_2 && contador != 10){

            maior_2 = vetor[i];
        }
    }

    printf("Maior: %d \nSegundo maior: %d", maior, maior_2);
}
