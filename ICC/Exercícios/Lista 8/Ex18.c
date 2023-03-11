#include <stdio.h>
int main()
{
    int idade, idade_homens = 0, auxiliar_idade;
    float media_homens_exp, porcentagem_45;
    char sexo, exp;

    int contador_feminino = 0, contador_masculino = 0, contador_homem_exp = 0, contador_homens_45 = 0, contador_35_exp = 0, menor_idade_exp = 100;
        

        do
        {
            printf("Insira a sua idade: ");
            scanf("%d", &idade);

            if (idade == 0)
            {
                idade = 0;
                
            }
            printf("Insira o seu sexo (M ou F): ");
            scanf(" %c", &sexo);
            printf("Tem experiencia no servico: ");
            scanf(" %c", &exp);
            printf("\n");

            if ((sexo == 'M' || sexo == 'm') && idade != 0)
            {
                contador_masculino++;

                if (exp == 'S' || exp == 's')
                {
                    idade_homens += idade;
                    contador_homem_exp++;
                }
            }
            if ((sexo == 'F' || sexo =='f') && idade != 0)
            {
                contador_feminino++;

                if (exp == 'S' || exp == 'S')
                {
                    if ((idade < menor_idade_exp) && idade != 0)
                    {
                        menor_idade_exp = idade;
                    }
                }
                

                if (idade < 35 && idade != 0)
                {
                    if (exp == 'S' || exp == 's')
                    {
                        contador_35_exp++;   
                    }
                }
            }

            if (idade > 45)
            {
                contador_homens_45++;
            }
    
        } while (idade != 0);

        media_homens_exp = (float)idade_homens/contador_homem_exp;
        porcentagem_45 = (float)contador_homens_45 * 100/contador_masculino;

        //printf("\nQuantidade de candidatos do sexo feminino: %d", contador_feminino);
        //printf("\nQuantidade de candidatos do sexo masculino: %d", contador_masculino);
        //printf("\nMedia de idade dos homens q ja tem exp: %.2f", media_homens_exp);
        //printf("\nPorcentagem de homens com > 45 anos dentre todos os homens: %.2f", porcentagem_45);
        //printf("\nNumero de mulheres com < 35 anos e com exp: %d", contador_35_exp);
        //printf("\nMenor idade entre as mulheres q ja tem exp: %d\n", menor_idade_exp);
}