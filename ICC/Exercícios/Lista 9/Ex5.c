//Olhar img
#include <stdio.h>
int main()
{
    int contador = 0, idade, total_idade = 0, contador_pessoas_90_15 = 0, contador_porcentagem = 0, contador_190 = 0, idade_homem = 0, idade_mulher = 0, contador_homem = 0, contador_mulher = 0;
    float peso, altura, media_idades, media_idade_homem, media_idade_mulher, porcentagem_10_30_190;
    char sexo;

    do
    {
        printf("Insira a idade: ");
        scanf("%d", &idade);
        printf("Insira o sexo: ");
        scanf(" %c", &sexo);
        printf("Insira o peso: ");
        scanf("%f", &peso);
        printf("Insira a altura: ");
        scanf("%f", &altura);

        total_idade += idade;

        if (peso > 90 && altura < 1.5)
        {
            contador_pessoas_90_15++;
        }
        if (altura > 1.90)
        {
            contador_190++;

            if (idade > 10 && idade < 30)
            {
                contador_porcentagem++;
            }
        }
        if (sexo == 'M')
        {
            idade_homem += idade;
            contador_homem++;

        }else if (sexo == 'F')
        {
            idade_mulher += idade;
            contador_mulher++;
        }
        
        contador++;
        printf("\n");
    } while (contador != 4);

    media_idades = (float)total_idade / 4;
    porcentagem_10_30_190 = (float)contador_porcentagem * 100 / contador_190;
    media_idade_homem = (float)idade_homem/contador_homem;
    media_idade_mulher = (float)idade_mulher/contador_mulher;
    
    printf("\nA media de idades: %.2f", media_idades);
    printf("\nA quantidade de pessoas com peso > 90 e altura < 1.5: %d", contador_pessoas_90_15);
    printf("\nA porcentagem de pessoas com idade entre 10 e 30 anos entre pessoas com 1.90: %.2f", porcentagem_10_30_190);
    printf("\nA idade media dos homens: %.2f", media_idade_homem);
    printf("\nA idade media das mulheres: %.2f", media_idade_mulher);
}