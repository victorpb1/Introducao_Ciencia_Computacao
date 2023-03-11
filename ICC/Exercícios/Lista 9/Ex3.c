//Olhar imagem
#include <stdio.h>

int valor_imposto(float preco_unitario,  char carga_perigosa, int cod_pais, char meio_transporte);
int valor_transporte(float preco_unitario, char carga_perigosa, int cod_pais, char meio_transporte, float preco_imposto);
int valor_seguro(float preco_unitario, char carga_perigosa, int cod_pais, char meio_transporte, float preco_imposto, float preco_transporte);
int preco_final(float preco_unitario, float preco_imposto, float preco_transporte, float preco_seguro);

int main()
{
    int contador_produtos, cod_pais;
    float preco_unitario;
    char meio_transporte, carga_perigosa;

    contador_produtos = 1;
    do
    {
        contador_produtos++;

        printf("Insira o preco: ");
        scanf("%f", &preco_unitario);
        printf("Insira o pais de origem \n1 - EUA\n2 - Mexico\n3 - Outros\n");
        scanf("%d", &cod_pais);
        printf("Qual o meio de transporte, terreste, fluvial, aereo (T, F, A): ");
        scanf(" %c", &meio_transporte);
        printf("Carga perigosa (S ou N): ");
        scanf(" %c", &carga_perigosa);
        
        printf("\nInformacoes desse produto: ");
        valor_imposto(preco_unitario, carga_perigosa, cod_pais, meio_transporte);

    } while (contador_produtos != 5);
}
int valor_imposto(float preco_unitario, char carga_perigosa, int cod_pais, char meio_transporte)
{
    float preco_imposto;

    if (preco_unitario <= 100)
    {
        preco_imposto = 5*100/preco_unitario;

    }else{

        preco_imposto = 10*100/preco_unitario;
    }
    printf("\nO valor do imposto: %.2f", preco_imposto);
    valor_transporte(preco_unitario, carga_perigosa, cod_pais, meio_transporte, preco_imposto);
}
int valor_transporte(float preco_unitario, char carga_perigosa, int cod_pais, char meio_transporte, float preco_imposto)
{
    float preco_transporte;

    if (carga_perigosa == 'S')
    {
        if (cod_pais == 1)
        {
            preco_transporte = 50;
        }
        if (cod_pais == 2)
        {
            preco_transporte = 35;
        }
        if (cod_pais == 3)
        {
            preco_transporte = 24;
        }

    }else if (carga_perigosa == 'N')
    {
        if (cod_pais == 1)
        {
            preco_transporte = 12;
        }
        if (cod_pais == 2)
        {
            preco_transporte = 35;
        }
        if (cod_pais == 3)
        {
            preco_transporte = 60;
        }
    }
    printf("\nO valor de transporte: %.2f", preco_transporte);
    valor_seguro(preco_unitario, carga_perigosa, cod_pais, meio_transporte, preco_imposto, preco_transporte);
}
int valor_seguro(float preco_unitario, char carga_perigosa, int cod_pais, char meio_transporte, float preco_imposto, float preco_transporte)
{
    float preco_seguro;

    if (cod_pais == 2 || meio_transporte == 'A')
    {
        preco_seguro = preco_unitario/2;
        
    }else{

        preco_seguro = preco_unitario;
    }

    printf("\nO valor do seu seguro: %.2f", preco_seguro);
    preco_final(preco_unitario, preco_imposto, preco_transporte, preco_seguro);
}
int preco_final(float preco_unitario, float preco_imposto, float preco_transporte, float preco_seguro)
{
    float preco_total_impostos, preco_final_total;

    preco_total_impostos = preco_imposto + preco_transporte + preco_seguro;
    preco_final_total = preco_total_impostos + preco_unitario;

    printf("\nO valor total dos impostos, %.2f, final do produto: %.2f\n\n", preco_total_impostos, preco_final_total);
}