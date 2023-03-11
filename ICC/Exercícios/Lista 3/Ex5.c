/*
5 - Uma empresa de transporte quer aumentar o salário de seus funcionários em N% de reajuste. 
Crie um programa que solicite dois números. O primeiro número representará o salário do funcionário
 e o segundo número corresponde o percentual de reajuste. O algoritmo deve exibir o salário do funcionário 
 após o aumento. Por exemplo, salário = 1500.00 e percentual de reajuste = 10%, salário será de 1650.00.
*/
#include <stdio.h>

int main()
{
    float sal, reaj, sal_new;

    printf("Insira o salario: ");
    scanf("%f", &sal);

    printf("Insira o reajuste: ");
    scanf("%f", &reaj);

    sal_new = sal * reaj/100 + sal;

    printf("\nO novo salario: %.2f\n", sal_new);
}