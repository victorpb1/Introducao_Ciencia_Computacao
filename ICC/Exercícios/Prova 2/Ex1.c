/*
1 - Faça um algoritmo que receba a idade, a altura e o peso de 25 pessoas. Calcule e mostre:
*/
#define Pessoas 4
#include <stdio.h>
int main()
{
    int idade, contador_mais_50 = 0, contador_pessoas = 0, contador_peso_60 = 0, contador_altura_30_45 = 0;
    float altura, peso, soma_alturas_30_45 = 0, media_altura_30_45, porcentagem;

    for (int i = 0; i < Pessoas; i++)
    {
        printf("Insira a idade da pessoa de nmr %d: ", i+1);
        scanf("%d", &idade);
        printf("Insira a altura da pessoa de nmr %d: ", i+1);
        scanf("%f", &altura);
        printf("Insira o peso da pessoa de nmr %d: ", i+1);
        scanf("%f", &peso);

        printf("\n");
        contador_pessoas++;

        if (idade > 50) {
            contador_mais_50++;
        }
        if (idade > 30 && idade < 45) {
            soma_alturas_30_45 += altura;
            contador_altura_30_45++;
        }
        if (peso < 60) {
            contador_peso_60++;
        } 
    }
    media_altura_30_45 = (float)soma_alturas_30_45/contador_altura_30_45;
    porcentagem = (float)(contador_peso_60 * 100)/contador_pessoas;

    printf("\nA quantidade de pessoas com idade superior a 50 anos: %d", contador_mais_50);
    printf("\nA media das alturas das pessoas com idade entre 30 e 45 anos: %.2f", media_altura_30_45);
    printf("\nA porcentagem de pessoas com peso inferior a 60kg entre todos: %.2f\n", porcentagem);
}