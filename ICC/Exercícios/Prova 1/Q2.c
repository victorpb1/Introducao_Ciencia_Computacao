/*
Q2 - Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem, sabendo-se que o carro faz 
12 km com um litro. Deverão ser fornecidos o tempo gasto na viagem e a velocidade média. O algoritmo deverá 
apresentar os valores da velocidade média, tempo gasto na viagem, distância percorrida e a quantidade de litros
utilizados na viagem.
*/
#include <stdio.h>
int funcao(float tempo_gasto, float velocidade_media)
{
    float distancia_percorrida, qntd_litros;

    distancia_percorrida = tempo_gasto * velocidade_media;
    qntd_litros = distancia_percorrida/12;

    printf("\nO tempo percorrido, %.1fH, a velocidade media, %.1fkm/h", tempo_gasto, velocidade_media);
    printf("\nA distancia percorrida: %.1fkm, a quantidade de litros gastos, %.1f\n\n", distancia_percorrida, qntd_litros);
}
int main()
{
    float tempo_gasto, velocidade_media;

    printf("Insira o tempo gasto em horas e a velocidade media em km: ");
    scanf("%f%f", &tempo_gasto, &velocidade_media);

    funcao(tempo_gasto, velocidade_media);
}
