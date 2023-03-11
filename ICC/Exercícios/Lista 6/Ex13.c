/*
13. Faça um algoritmo que receba: (olhar img na quest)
*/
#include <stdio.h>
int desconto(float preco_produto);
int preco(int codigo, int qntd);
int main()
{
    int codigo, qnt_produto;

    printf("1 - 10 = R$10\n11 - 20 = R$15\n21 - 30 = R$20\n31 - 40 = R$30\n\nInsira o codigo: ");
    scanf("%i", &codigo);
    printf("Insira a qntd do produto: ");
    scanf("%i", &qnt_produto);

    preco(codigo, qnt_produto);
}
int preco(int codigo, int qntd)
{
    float preco_produto;

    if (codigo <= 10)
    {
        preco_produto = (float) 10 * qntd;
        printf("\nPreco unitario, 10, valor total: R$%.2f", preco_produto);

        }else if (codigo >= 11 && codigo <= 20)
        {
            preco_produto = (float) 15 * qntd;
            printf("\nPreco unitario, 15, valor total: R$%.2f", preco_produto);

            }else if (codigo >= 21 && codigo <= 30)
            {
                preco_produto = (float) 20 * qntd;
                printf("\nPreco unitario, 20, valor total: R$%.2f", preco_produto);

                }else if (codigo >= 31 && codigo <= 40)
                {
                    preco_produto = (float) 10 * qntd;
                    printf("\nPreco unitario, 10, valor total: R$%.2f", preco_produto);
                }
    desconto(preco_produto);
}
int desconto(float preco_produto)
{
    float desconto, preco_final;

    if (preco_produto < 250)
    {
        desconto = preco_produto*5/100;
        printf("\nSeu desconto de 5: R$%.2f", desconto);

        }else if (preco_produto >= 250 && preco_produto <= 500)
        {
            desconto = preco_produto*10/100;
            printf("\nSeu desconto de 10: R$%.2f", desconto);

            }else if (preco_produto > 500)
            {
                desconto = preco_produto*15/100;
                printf("\nSeu desconto de 15: R$%.2f", desconto);
            }

    preco_final = preco_produto - desconto;
    printf("\n\nO preco final do produto: R$%.2f\n\n", preco_final);
}