/*
8 - Construa um algoritmo que receba o número de horas trabalhadas, o valor do salário mínimo e o 
número de horas extras trabalhadas. Calcule e mostre o salário a receber seguindo as regras a seguir:
*/
#include <stdio.h>

int main()
{
    float horas_trabalhadas, sal_minimo, horas_extras, sal_bruto, quantia_horas_extras, sal_receber;

    printf("Insira as horas trabalhadas: ");
    scanf("%f", &horas_trabalhadas);
    printf("Insira o valor do salario minimo: ");
    scanf("%f", &sal_minimo);
    printf("Insira o numero de horas extras: ");
    scanf("%f", &horas_extras);

    horas_trabalhadas = horas_trabalhadas * (sal_minimo/8);
    horas_extras = horas_extras * (sal_minimo/4);

    sal_bruto = horas_trabalhadas;
    quantia_horas_extras = horas_extras;
    sal_receber = sal_bruto + horas_extras;

    printf("\nSalario a receber: %.2f\n", sal_receber);
}