/*
Q1 - Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, mais uma 
comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele efetuadas. Escrever um 
algoritmo que leia o número de carros por ele vendidos, o valor total de suas vendas, o salário fixo e o valor 
que ele recebe por carro vendido. Calcule e escreva o salário final do vendedor.
*/
#include <stdio.h>
int funcao(float salario, int qntd_carros, float valor_total_vendas, float valor_carro)
{
    float comissao, salario_mes;

    salario_mes = salario + (float)(qntd_carros*valor_carro) + (valor_total_vendas*5/100);

    printf("\nO seu salario de mes foi de R$%.2f\n", salario_mes);
}
int main()
{
    int qntd_carros;
    float salario, valor_carro, valor_total_vendas;

    printf("Insira o salario, valor por carro vendido e insira o valor de total das vendas: ");
    scanf("%f%f%f", &salario, &valor_carro, &valor_total_vendas);
    printf("Insira a quantidade de carros vendidos : ");
    scanf("%d", &qntd_carros);

    funcao(salario, qntd_carros, valor_total_vendas, valor_carro);
}