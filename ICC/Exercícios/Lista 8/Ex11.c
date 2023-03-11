/*
11. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito. 
Foram obtidos os seguintes dados. (olhar img)
*/
#include <stdio.h>
int main()
{
    int codigo_cidade, veiculos, acidentes;
    int max = 0, min = 0;
    int auxiliar_cod_cidade_max = 0, auxiliar_cod_cidade_min = 0;

    float media_veiculos = 0;
    float media_acidentes_menos_2000 = 0;
    
    int contador_cidades_2000 = 0;

    printf("Insira o codigo da cidade (1 - 5): ");
    scanf("%d", &codigo_cidade);
    printf("Insira o numeros de veiculos de passeio: ");
    scanf("%d", &veiculos);
    printf("Insira o numero de acidentes: ");
    scanf("%d", &acidentes);
    printf("\n");

    max = acidentes;
    min = acidentes;
    auxiliar_cod_cidade_max = codigo_cidade;
    auxiliar_cod_cidade_min = codigo_cidade;
    media_veiculos = (float)veiculos + media_veiculos;

    for (int i = 0; i < 4; i++)
    {
        printf("Insira o codigo da cidade (1 - 5): ");
        scanf("%d", &codigo_cidade);
        printf("Insira o numeros de veiculos de passeio: ");
        scanf("%d", &veiculos);
        printf("Insira o numero de acidentes: ");
        scanf("%d", &acidentes);
        printf("\n");

        media_veiculos = (float)veiculos + media_veiculos;

        if (acidentes > max)
        {
            max = acidentes;
            auxiliar_cod_cidade_max = codigo_cidade;
        }
        if (acidentes < min)
        {
            min = acidentes;
            auxiliar_cod_cidade_min = codigo_cidade;
        }
        if (veiculos < 2000)
        {
            contador_cidades_2000++; 
            media_acidentes_menos_2000 = (float)acidentes + media_acidentes_menos_2000;
        }
    }

    media_veiculos = media_veiculos/5;
    media_acidentes_menos_2000 = (float)media_acidentes_menos_2000/contador_cidades_2000;

    printf("\nO maior indice de acidentes eh, %d, e pertence a cidade de cod, %d.", max, auxiliar_cod_cidade_max);
    printf("\nO menor indice de acidentes eh %d, e pertence a cidade de cod, %d.", min, auxiliar_cod_cidade_min);
    printf("\nA media de veiculos nas 5 cidades: %.2f", media_veiculos);
    printf("\nA media de acidentes em cidade com menos de 2000 veiculos: %.2f\n", media_acidentes_menos_2000);
}