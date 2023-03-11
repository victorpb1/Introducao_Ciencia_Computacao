/*
12. Faça um algoritmo que receba (escreva um código modularizado): (olhar img na quest)
*/
#include <stdio.h>
float preco_total(float imposto, float preco)
{
    float preco_total;
    preco_total = preco + imposto;

    printf("\nO preco total: R$%.2f\n", preco_total);
}
float calc_imposto(float preco, int codigo)
{
    float imposto;
    float preco_imposto = preco;

    if (codigo == 1)
    {
        imposto = 0; 
        printf("\nSeu imposto de 0: %.2f\n", imposto);

        }else if (codigo == 2)
        {
            imposto = preco * 15/100;
            printf("\nSeu imposto de 15: %.2f\n", imposto);

            }else if (codigo == 3)
            {
                imposto = preco * 25/100;
                printf("\nSeu imposto de 25: %.2f\n", imposto);
            }
    
    preco_total(imposto, preco_imposto);
}
float preco_peso(float peso_kg, int codigo)
{
    int codigo_pais;
    float preco, peso_gramas;

    peso_gramas = peso_kg*1000;

    printf("\nInsira o codigo do pais (1 - 3): ");
    scanf("%i", &codigo_pais);

    if (codigo >= 1 && codigo <= 4)
    {
        preco = peso_gramas * 10;
        printf("\nO preco a 10 a grama: R$%.2f\n", preco);

        }else if (codigo >= 5 && codigo <= 7)
        {
            preco = peso_gramas * 25;
            printf("\nO preco a 25 a grama: R$%.2f\n", preco);

            }else if (codigo >= 8 && codigo <= 10)
            {
                preco = peso_gramas * 35;
                printf("\nO preco a 35 a grama: R$%.2f\n", preco);
            }

    calc_imposto(preco, codigo_pais);
}
int main()
{
    int codigo;
    float peso_kg;

    printf("Insira o codigo do produto \n1 - 4 = 10\n5 - 7 = 25\n8 - 10 = 35\nCodigo: ");
    scanf("%i", &codigo);
    printf("\nInsira o peso em kg: ");
    scanf("%f", &peso_kg);

    preco_peso(peso_kg, codigo);
}