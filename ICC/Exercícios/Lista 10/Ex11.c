/*
11. Determinada empresa vende 40 artigos diferentes. A empresa identifica 
cada artigo por um código. Escreva um algoritmo para imprimir o código e 
o preço dos três artigos mais caros.
*/
#include <stdio.h>
#define artigos 5
int main()
{
    int i, aux1, aux2, aux3;
    int cod_artigo[artigos];
    float preco_artigo[artigos], o_1_mais_caro, o_2_mais_caro, o_3_mais_caro;
    float vetor_sem_1_maior[artigos];

    for (i = 0; i < artigos; i++)
    {
        printf("Insira o codigo dos artigos: ");
        scanf("%d", &cod_artigo[i]);

        printf("Insira o valor desse artigo: ");
        scanf("%f", &preco_artigo[i]);
    }

    o_1_mais_caro = preco_artigo[0];
    o_2_mais_caro = preco_artigo[1];
    o_3_mais_caro = preco_artigo[2];

    for (i = 0; i < artigos; i++)
    {
        if (o_1_mais_caro < preco_artigo[i])
        {
            o_1_mais_caro = preco_artigo[i];
            aux1 = i;
        }
    }
    for (i = 0; i < artigos; i++)
    {
        if (aux1 == i)
        {
            i++;
        }else{

            if (o_2_mais_caro > preco_artigo[i])
            {
                if (o_1_mais_caro > preco_artigo[i])
                {
                    o_2_mais_caro = preco_artigo[i];
                    aux2 = i;
                }
            }
            
        }
    }
    for (i = 0; i < artigos; i++)
    {
        if (aux2 == i)
        {
            i++;
        }else{

            if (o_3_mais_caro > preco_artigo[i])
            {
                if (o_2_mais_caro > preco_artigo[i])
                {
                    o_3_mais_caro = preco_artigo[i];
                    aux3 = i;
                }
            }
            
        }
    }
    printf("\nO primeiro artigo mais caro, %.2f, o codigo, %d", o_1_mais_caro, cod_artigo[aux1]);
    printf("\nO segundo artigo mais caro, %.2f, o codigo, %d", o_2_mais_caro, cod_artigo[aux2]);
    printf("\nO terceiro artigo mais caro, %.2f, o codigo, %d\n", o_3_mais_caro, cod_artigo[aux3]);
}