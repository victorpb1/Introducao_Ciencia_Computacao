/*
17. Faça um algoritmo que receba vários números, calcule e mostre: (olhar img)
*/
#include <stdio.h>
int main()
{
    int n, soma = 0, numeros, contador = 0, maior, menor, pares = 0, contador_pares = 0, contador_impar = 0;
    float media, media_pares, porcentagem_impares;

    printf("Insira o varios numeros: ");
    scanf("%d", &n);

    maior = n;
    menor = n;
    soma = soma + n;

    if ((n % 2) != 0 && n != 30000)
    {
        contador_impar = 1;
    }
    if ((n % 2) == 0 && n != 30000)
    {
        pares = n;
        contador_pares = 1;
    }
    if (n == 30000)
    {
        return 0;

    }else{

        do
        {
            printf("Insira o varios numeros: ");
            scanf("%d", &n);

            soma = soma + n;
            contador = contador + 1;
            media = media + (float)n;
            numeros = n;

            if (n > maior && n != 30000)
            {
                maior = n;
            }
            if (n < menor && n != 30000)
            {
                menor = n;
            }

            if ((n % 2) == 0 && n != 30000)
            {
                pares = pares + n;
                contador_pares++;
            }
            if ((n % 2) != 0 && n != 30000)
            {
               contador_impar++;
            }

        } while (n != 30000);
            
            soma = soma - 30000;
            media = (float)soma/contador;
            media_pares = (float)pares/contador_pares;
            porcentagem_impares = (float)contador_impar * 100/contador;

            printf("\nSoma dos numeros digitados: %d", soma);
            printf("\nQuantidade de numeros digitados: %d", contador);
            printf("\nA media dos numeros: %.2f", media);
            printf("\nO maior numero: %d", maior);
            printf("\nO menor numero: %d", menor);
            printf("\nMedia dos numeros pares: %.2f", media_pares);
            printf("\nPorcentagem de impares: %.2f\n", porcentagem_impares);
    }
}