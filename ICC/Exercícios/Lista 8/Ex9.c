/*
9. Em um campeonato de futebol existem cinco times e cada time possui onze jogadores. 
Faça um algoritmo que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
(imagem no forms)
*/
#define J 11
#define Camp 55
#include <stdio.h>

int time1();
int time2(int contador_idade_t1, float total_altura_t1, int mais_80_t1);

int time3(int contador_idade_t1, int contador_idade_t2, float total_altura_t1, float total_altura_t2, 
        int mais_80_t1, int mais_80_t2);

int time4(int contador_idade_t1, int contador_idade_t2, int contador_idade_t3, float total_altura_t1, 
        float total_altura_t2, float total_altura_t3, int mais_80_t1, int mais_80_t2, int mais_80_t3);

int time5(int contador_idade_t1, int contador_idade_t2, int contador_idade_t3, int contador_idade_t4, 
        float total_altura_t1, float total_altura_t2, float total_altura_t3, float total_altura_t4, int mais_80_t1, 
        int mais_80_t2, int mais_80_t3, int mais_80_t4);

int total(int contador_idade_t1, int contador_idade_t2, int contador_idade_t3, int contador_idade_t4, 
        int contador_idade_t5, float total_altura_t1, float total_altura_t2, float total_altura_t3, 
        float total_altura_t4, float total_altura_t5, int mais_80_t1, int mais_80_t2, int mais_80_t3, 
        int mais_80_t4, int mais_80_t5);

int main()
{
    time1();
}
int time1()
{
    int idade_t1, total_idade = 0;
    float peso_t1, altura_t1, total_altura_t1 = 0, media_idade_time1;

    int contador_idade_t1 = 0;
    int mais_80_t1 = 0;

    for (int i = 0; i < J; i++)
    {
        printf("Insira a idade dos jogadores do time 1: ");
        scanf("%d", &idade_t1);
        printf("Insira o peso dos jogadores do time 1: ");
        scanf("%f", &peso_t1);
        printf("Insira a altura dos jogadores do time 1: ");
        scanf("%f", &altura_t1);

        printf("\n");

        if (idade_t1 < 18)
        {
            contador_idade_t1++;
        }
        if (peso_t1 > 80)
        {
            mais_80_t1;
        }
        
        total_idade = total_idade + idade_t1;
        total_altura_t1 = total_altura_t1 + altura_t1;
    }

    media_idade_time1 = (float)total_idade/J;
    printf("\nMedia idades time 1: %.2f\n\n\n", media_idade_time1);

    time2(contador_idade_t1, total_altura_t1, mais_80_t1);
}
int time2(int contador_idade_t1, float total_altura_t1, int mais_80_t1)
{
    int idade_t2, total_idade = 0;
    float peso_t2, altura_t2, total_altura_t2= 0, media_idade_time2;

    int contador_idade_t2 = 0;
    int mais_80_t2 = 0;

    for (int i = 0; i < J; i++)
    {
        printf("Insira a idade dos jogadores do time 2: ");
        scanf("%d", &idade_t2);
        printf("Insira o peso dos jogadores do time 2: ");
        scanf("%f", &peso_t2);
        printf("Insira a altura dos jogadores do time 2: ");
        scanf("%f", &altura_t2);

        printf("\n");

        if (idade_t2 < 18)
        {
            contador_idade_t2++;
        }
        if (peso_t2 > 80)
        {
            mais_80_t2++;
        }
        
        total_idade = total_idade + idade_t2;
        total_altura_t2 = total_altura_t2 + altura_t2;
    }

    media_idade_time2 = (float)total_idade/J;
    printf("\nMedia idades time 2: %.2f\n\n\n", media_idade_time2);

    time3(contador_idade_t1, contador_idade_t2, total_altura_t1, total_altura_t2, mais_80_t1, mais_80_t2);
}
int time3(int contador_idade_t1, int contador_idade_t2, float total_altura_t1, float total_altura_t2, 
        int mais_80_t1, int mais_80_t2)
{
    int idade_t3, total_idade = 0;
    float peso_t3, altura_t3, total_altura_t3 = 0, media_idade_time3;

    int contador_idade_t3 = 0;
    int mais_80_t3 = 0;

    for (int i = 0; i < J; i++)
    {
        printf("Insira a idade dos jogadores do time 3: ");
        scanf("%d", &idade_t3);
        printf("Insira o peso dos jogadores do time 3: ");
        scanf("%f", &peso_t3);
        printf("Insira a altura dos jogadores do time 3: ");
        scanf("%f", &altura_t3);

        printf("\n");

        if (idade_t3 < 18)
        {
            contador_idade_t3++;
        }
        if (peso_t3 > 80)
        {
            mais_80_t3++;
        }
        
        total_idade = total_idade + idade_t3;
        total_altura_t3 = total_altura_t3 + altura_t3;
    }

    media_idade_time3 = (float)total_idade/J;
    printf("\nMedia idades time 3: %.2f\n\n\n", media_idade_time3);

    time4(contador_idade_t1, contador_idade_t2, contador_idade_t3, total_altura_t1, 
    total_altura_t2, total_altura_t3, mais_80_t1, mais_80_t2, mais_80_t3);
}
int time4(int contador_idade_t1, int contador_idade_t2, int contador_idade_t3, float total_altura_t1, 
        float total_altura_t2, float total_altura_t3, int mais_80_t1, int mais_80_t2, int mais_80_t3)
{
    int idade_t4, total_idade = 0;
    float peso_t4, altura_t4, total_altura_t4 = 0, media_idade_time4;

    int contador_idade_t4 = 0;
    int mais_80_t4 = 0;

    for (int i = 0; i < J; i++)
    {
        printf("Insira a idade dos jogadores do time 4: ");
        scanf("%d", &idade_t4);
        printf("Insira o peso dos jogadores do time 4: ");
        scanf("%f", &peso_t4);
        printf("Insira a altura dos jogadores do time 4: ");
        scanf("%f", &altura_t4);

        printf("\n");

        if (idade_t4 < 18)
        {
            contador_idade_t4++;
        }
        if (peso_t4 > 80)
        {
            mais_80_t4++;
        }
        
        total_idade = total_idade + idade_t4;
        total_altura_t4 = total_altura_t4 + altura_t4;
    }

    media_idade_time4 = (float)total_idade/J;
    printf("\nMedia idades time 4: %.2f\n\n\n", media_idade_time4);

    time5(contador_idade_t1, contador_idade_t2, contador_idade_t3, contador_idade_t4, total_altura_t1, 
    total_altura_t2, total_altura_t3, total_altura_t4, mais_80_t1, mais_80_t2, mais_80_t3, mais_80_t4);
}
int time5(int contador_idade_t1, int contador_idade_t2, int contador_idade_t3, int contador_idade_t4, 
    float total_altura_t1, float total_altura_t2, float total_altura_t3, float total_altura_t4, int mais_80_t1, 
    int mais_80_t2, int mais_80_t3, int mais_80_t4)
{
    int idade_t5, total_idade = 0;
    float peso_t5, altura_t5, total_altura_t5 = 0, media_idade_time5;

    int contador_idade_t5 = 0;
    int mais_80_t5 = 0;

    for (int i = 0; i < J; i++)
    {
        printf("Insira a idade dos jogadores do time 5: ");
        scanf("%d", &idade_t5);
        printf("Insira o peso dos jogadores do time 5: ");
        scanf("%f", &peso_t5);
        printf("Insira a altura dos jogadores do time 5: ");
        scanf("%f", &altura_t5);

        printf("\n");

        if (idade_t5 < 18)
        {
            contador_idade_t5++;
        }
        if (peso_t5 > 80)
        {
            mais_80_t5++;
        }
        
        total_idade = total_idade + idade_t5;
        total_altura_t5 = total_altura_t5 + altura_t5;
    }

    media_idade_time5 = (float)total_idade/J;
    printf("\nMedia idades time 5: %.2f\n\n\n", media_idade_time5);

    total(contador_idade_t1, contador_idade_t2, contador_idade_t3, contador_idade_t4, contador_idade_t5, 
        total_altura_t1, total_altura_t2, total_altura_t3, total_altura_t4, total_altura_t5, mais_80_t1, 
        mais_80_t2, mais_80_t3, mais_80_t4, mais_80_t5);
}
int total(int contador_idade_t1, int contador_idade_t2, int contador_idade_t3, int contador_idade_t4, 
        int contador_idade_t5, float total_altura_t1, float total_altura_t2, float total_altura_t3, 
        float total_altura_t4, float total_altura_t5, int mais_80_t1, int mais_80_t2, int mais_80_t3, 
        int mais_80_t4, int mais_80_t5)
{
    int contador_menor_18;
    float media_geral_alturas, porcentagem_mais_80;

    contador_menor_18 = contador_idade_t1 + contador_idade_t2 + contador_idade_t3 + contador_idade_t4 + contador_idade_t5;
    media_geral_alturas = (total_altura_t1 + total_altura_t2 + total_altura_t3 + total_altura_t4 + total_altura_t5)/Camp;
    porcentagem_mais_80 = (float)mais_80_t1 + mais_80_t2 + mais_80_t3 + mais_80_t4 + mais_80_t5;
    porcentagem_mais_80 = porcentagem_mais_80 * 100/Camp;

    printf("\nA quantidade de jogares com idade menor q 18: %d", contador_menor_18);
    printf("\nA media das alturas de todos os jogadores do campeonato: %.2f", media_geral_alturas);
    printf("\nA porcentagem de jogadores com mais de 80 no camp: %.2f porcento\n", porcentagem_mais_80);
}