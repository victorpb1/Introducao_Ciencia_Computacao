/*
14. Faça um algoritmo que receba o valor do salário mínimo, o turno de trabalho (M – matutino, V – vespertino 
ou N – noturno), a categoria (O – operário, G – gerente) e o número de horas trabalhadas no mês de um 
funcionário. Suponha a digitação apenas de dados válidos e, quando houver a digitação de letras, utilize
maiúsculas (escreva um algoritmo modularizado). Calcule e mostre: (olhar img da quest)
*/
#include <stdio.h>
int coeficiente_salario(char categoria, char turno_trabalho, float numero_horas_trabalhadas, float salario_minimo);
float imposto(char categoria, float salario_bruto, float gratificacao, float auxilio_alimentacao);
int main()
{
    float salario_minimo, numero_horas_trabalhadas;
    char turno_trabalho, categoria;

    printf("Insira o salario minimo e o nmr de horas trabalhadas: ");
    scanf("%f%f", &salario_minimo, &numero_horas_trabalhadas);
    printf("Insira o turno de trabalho: \nMatutino - M\nVespertino - V\nNoturno - N\n\n");
    scanf(" %c", &turno_trabalho);
    printf("Insira a categoria: \nOperario - O\nGerente - G\n");
    scanf(" %c", &categoria);

    coeficiente_salario(categoria, turno_trabalho, numero_horas_trabalhadas, salario_minimo);
}
int coeficiente_salario(char categoria, char turno_trabalho, float numero_horas_trabalhadas, float salario_minimo)
{
    float coeficiente_salario, salario_bruto, gratificacao, auxilio_alimentacao, salario_liquido;

    if (turno_trabalho == 'M')
    {
        coeficiente_salario = salario_minimo * 10/100;
        printf("\nSeu coeficiente de salario: %.2f", coeficiente_salario);

        }else if (turno_trabalho == 'V')
        {
            coeficiente_salario = salario_minimo * 15/100;
            printf("\nSeu coeficiente de salario: %.2f", coeficiente_salario);

            }else if (turno_trabalho == 'N')
            {
                coeficiente_salario = salario_minimo * 12/100;
                printf("\nSeu coeficiente de salario: %.2f", coeficiente_salario);
            }

    salario_bruto = numero_horas_trabalhadas * coeficiente_salario;

    if (turno_trabalho == 'N' && numero_horas_trabalhadas > 80)
    {
        gratificacao = 50;
        printf("\nSua gratificacao: R$%.2f", gratificacao);

    }else{

        gratificacao = 30;
        printf("\nSua gratificacao: R$%.2f", gratificacao);
    }
    
    if (categoria == 'O' || coeficiente_salario <= 25)
    {
        auxilio_alimentacao = salario_bruto/2;
        printf("\nSeu auxilio alimentacao: R$%.2f", auxilio_alimentacao);
        
    }else{
    
        auxilio_alimentacao = salario_bruto/3;
        printf("\nSeu auxilio alimentacao: R$%.2f", auxilio_alimentacao);
    }

    imposto(categoria, salario_bruto, gratificacao, auxilio_alimentacao);
}
float imposto(char categoria, float salario_bruto, float gratificacao, float auxilio_alimentacao)
{
    float imposto_produto, salario_liquido;

    if (categoria == 'O')
    {
        if (salario_bruto >= 300)
        {
            imposto_produto = salario_bruto*5/100;
            printf("\nO imposto de 5 no seu produto: R$%.2f", imposto_produto);

        }else if (salario_bruto < 300)
        {
            imposto_produto = salario_bruto*3/100;
            printf("\nO imposto de 3 no seu produto: R$%.2f", imposto_produto);
        }        
    }else if (categoria == 'G')
    {
        if (salario_bruto >= 400)
        {
            imposto_produto = salario_bruto*6/100;
            printf("\nO imposto de 6 no seu produto: R$%.2f", imposto_produto);

        }else if (salario_bruto < 400)
        {
            imposto_produto = salario_bruto*4/100;
            printf("\nO imposto de 4 no seu produto: R$%.2f", imposto_produto);
        } 
    }
    salario_liquido = salario_bruto - imposto_produto + gratificacao + auxilio_alimentacao;
    printf("\nO seu salario liquido: R$%.2f\n", salario_liquido);
}