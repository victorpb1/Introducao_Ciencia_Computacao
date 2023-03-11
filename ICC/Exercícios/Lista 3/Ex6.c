/*
6 - Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, 
nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.
*/
#include <stdio.h>

int main()
{
    int eleitores, brancos, nulos, validos;
    float perc_brancos, perc_nulos, perc_validos;

    printf("Insira o numero de eleitores: ");
    scanf("%i", &eleitores);

    printf("Insira o nmr de votos brancos: ");
    scanf("%i", &brancos);
    printf("Insira o nmr de votos nulos: ");
    scanf("%i", &nulos);
    printf("Insira o nmr de votos validos: ");
    scanf("%i", &validos);

    perc_brancos = (float)brancos * eleitores/100;
    perc_nulos = (float)nulos * eleitores/100;
    perc_validos = (float)validos * eleitores/100;

    printf("\nPorcentagem de votos brancos: %.2f", perc_brancos);
    printf("\nPorcentagem de votos nulos: %.2f", perc_nulos);
    printf("\nPorcentagem de votos validos: %.2f\n", perc_validos);
}