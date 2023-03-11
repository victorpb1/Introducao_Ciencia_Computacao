//Revisar antes de mandar, n tá pronto ainda

/*Em um campeonato de futebol existem cinco times e cada time possui onze jogadores.
Faça um algoritmo que receba a idade, o peso e a altura de cada um dos jogadores,
calcule e mostre:
(a)A quantidade de jogadores com idade inferior a 18 anos
(b)A media de idades dos jogadores de cada time
(c)A media das alturas de todos os jogadores do campeonato
(d)A porcentagem de jogadores com mais de 80 quilos entre todos os jogadores do campeonato*/
#include <stdio.h>
int main()
{
    int a, b, c, d, e, qnt_id18 = 0;
    float malt, ppe=0;

    float id1;
        float id2;
            float id3;
                float id4;
                    float id5;
    float mid1;
        float mid2;
            float mid3;
                float mid4;
                    float mid5;
    float mid01;
        float mid02;
            float mid03;
                float mid04;
                    float mid05;
    float pe1;
        float pe2;
            float pe3;
                float pe4;
                    float pe5;
    float alt1;
        float alt2;
            float alt3;
                float alt4;
                    float alt5;
    float malt1;
        float malt2;
            float malt3;
                float malt4;
                    float malt5;
    float contador_pe=0;
        float contador_pe1=0;
            float contador_pe2=0;
                float contador_pe3=0;
                    float contador_pe4=0;
                        float contador_pe5=0;

    for (a = 1; a <= 11; a++)
    {
        printf("Insira a idade dos jogadores do time 1: ");
        scanf("%f", &id1);
        mid01 = mid01 + id1;
        mid1 = mid01/11;
        if(id1 < 18)
        {
            qnt_id18++;
        }
        printf("Insira o peso dos jogadores do time 1: ");
        scanf("%f", &pe1);
        if (pe1 > 80)
        {
            contador_pe1++;
        }
        printf("Insira a altura dos jogadores do time 1: ");
        scanf("%f", &alt1);
        malt1 = malt1 + alt1;
        printf("\n");
    }
    for (b = 1; b <= 11; b++)
    {
        printf("\nInsira a idade dos jogadores do time 2: ");
        scanf("%f", &id2);
        mid02 = mid02 + id2;
        mid2 = mid02/11;
        if(id2 < 18)
        {
            qnt_id18++;
        }
        printf("Insira o peso dos jogadores do time 2: ");
        scanf("%f", &pe2);
        printf("Insira a altura dos jogadores do time 2: ");
        scanf("%f", &alt2);
        malt2 = malt2 + alt2;
        if (pe2 > 80)
        {
            contador_pe2++;
        }
    }
    for (c = 1; c <= 11; c++)
    {
        printf("\nInsira a idade dos jogadores do time 3: ");
        scanf("%f", &id3);
        mid03 = mid03 + id3;
        mid3 = mid03/11;
        if(id3 < 18)
        {
            qnt_id18++;
        }
        printf("Insira o peso dos jogadores do time 3: ");
        scanf("%f", &pe3);
        if (pe3 > 80)
        {
            contador_pe3++;
        }
        printf("Insira a altura dos jogadores do time 3: ");
        scanf("%f", &alt3);
        malt3 = malt3 + alt3;

    }
    for (d = 1; d <= 11; d++)
    {
        printf("\nInsira a idade dos jogadores do time 4: ");
        scanf("%f", &id4);
        mid04 = mid04 + id4;
        mid4 = mid04/11;
        if(id4 < 18)
        {
            qnt_id18++;
        }
        printf("Insira o peso dos jogadores do time 4: ");
        scanf("%f", &pe4);
        if (pe4 > 80)
        {
            contador_pe4++;
        }
        printf("Insira a altura dos jogadores do time 4: ");
        scanf("%f", &alt4);
        malt4 = malt4 + alt4;
    }
    for (e = 1; e <= 11; e++)
    {
        printf("\nInsira a idade dos jogadores do time 5: ");
        scanf("%f", &id5);
        mid05 = mid05 + id5;
        mid5 = mid05/11;
        if(id5 < 18)
        {
            qnt_id18++;
        }
        printf("Insira o peso dos jogadores do time 5: ");
        scanf("%f", &pe5);
        if (pe5 > 80)
        {
            contador_pe5++;
        }
        printf("Insira a altura dos jogadores do time 5: ");
        scanf("%f", &alt5);
        malt5 = malt5 + alt5;
    }
        contador_pe = contador_pe1 + contador_pe2 + contador_pe3 + contador_pe4 + contador_pe5;
        ppe = contador_pe*100/55;
        malt = (malt1+malt2+malt3+malt4+malt5)/55;

    printf("\nOs jogadores com menos de 18 anos: %d", qnt_id18);

    printf("\nA media das idades do time1: %.2f", mid1);
    printf("\nA media das idades do time2: %.2f", mid2);
    printf("\nA media das idades do time3: %.2f", mid3);
    printf("\nA media das idades do time4: %.2f", mid4);
    printf("\nA media das idades do time5: %.2f", mid5);

    printf("\nA media das alturas dos jogadores: %.2f", malt);
    printf("\nA media porcentagem q pesa > 80kg: %.2f\n", ppe);
    return 0;
}
