//Olhar img
#include <stdio.h>
int main()
{
    float i = 0, preco, preco_vista = 0, preco_prazo = 0, preco_total = 0, preco_prestacoes;
    char codigo;

    do
    {
        printf("Insira o codigo (V ou P): ");
        scanf(" %c", &codigo);
        printf("Insira o valor do produto: ");
        scanf("%f", &preco);

        if (codigo == 'V')
        {
            preco_vista += preco;
            preco_total += preco;

        }else{

            preco_prazo += preco;
            preco_total += preco;

            preco_prestacoes = preco_prazo/3;
        }

        i++;
    } while (i != 5);
    printf("\nO valor total das a vista: %.2f", preco_vista);
    printf("\nO valor total das compras a prazo: %.2f", preco_prazo);
    printf("\nO valor total das compras efetuadas: %.2f", preco_total);
    printf("\nO valor de cada prestacao: %.2f\n", preco_prestacoes);
}