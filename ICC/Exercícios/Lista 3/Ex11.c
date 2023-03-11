/*
11 - Pedro comprou um saco de ração com peso em quilos (Kg). Pedro possui dois gatos para os quais 
fornece a quantidade de ração em gramas. Faça um programa que receba o peso do saco de ração e a 
quantidade de ração fornecida para cada gato. Calcule e mostre quanto que restará de ração no saco 
após cinco dias e também 15 dias.
*/
#include <stdio.h>

int main()
{
    float peso_saco_kg, qnt_racao_g1, qnt_racao_g2;
    float peso_saco_gramas, qnt_dia, qnt_5, qnt_15;

    printf("Insira o peso, em kilos, do saco de racao: ");
    scanf("%f", &peso_saco_kg);
    printf("\nInsira a quantidade de racao, em gramas, para o gato 1 e 2, respectivamente: ");
    scanf("%f%f", &qnt_racao_g1, &qnt_racao_g2);

    peso_saco_gramas = peso_saco_kg * 1000;
    qnt_dia = qnt_racao_g1 + qnt_racao_g2;

    qnt_5 = peso_saco_gramas - qnt_dia * 5;
    qnt_15 = peso_saco_gramas - qnt_dia * 15;

    printf("\nA quantidade apos 5 e 15 dias, respectivamente: %.3f, %.3f", qnt_5, qnt_15);
}