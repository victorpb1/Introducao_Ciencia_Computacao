/*
10 - Construa um algoritmo que calcule a quantidade de dinheiro gasto por um fumante com cigarros durante 
n anos. Para isso, é necessário ler a quantidade de cigarros que o fumante fuma por dia, a quantidade de anos
que ele fuma e o preço médio de uma carteira de cigarros. (OBS: Cada carteira de cigarros contém 20 cigarros. 
Cada ano têm 365 dias.).
*/
#include <stdio.h>

int main()
{
    int quantidade_cigarros_dia;
    float preco_carteira, dinhero_gasto_dia, quantidade_anos, preco_cigarros_anos;

    printf("Insira a quantidade de cigarros por dia: ");
    scanf("%i", &quantidade_cigarros_dia);
    printf("\nInsira a quantidade de anos: ");
    scanf("%f", &quantidade_anos);
    printf("\nInsira o preco da carteira: ");
    scanf("%f", &preco_carteira);

    dinhero_gasto_dia = (float)quantidade_cigarros_dia/20 * preco_carteira;
    preco_cigarros_anos = dinhero_gasto_dia * (365 * quantidade_anos); 
    printf("\nO valor em anos: %.2ff\n", preco_cigarros_anos);
}