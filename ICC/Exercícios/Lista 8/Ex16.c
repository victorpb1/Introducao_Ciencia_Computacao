/*
16. Faça um programa que apresente o menu a seguir, permita ao usuário escolher a opção desejada, 
receba os dados necessários para executar a operação e mostre o resultado. Verifique a possibilidade 
de opção inválida e não se preocupe com restrições, como salário negativo.  (olhar img)
*/
#include <stdio.h>
int opcao1();
int opcao2();
int opcao3();

int main()
{
    int opcao, i = 0;

    do
    {
        printf("==================== Menu: ===================");
        printf("\n=         Insira a opcao desejada:           =\n");
        printf("=           1: valor do imposto              =\n");
        printf("=           2: classificacao (aumento)       =\n");
        printf("=           3: classificacao (remuneracao)   =\n");
        printf("=           4: finalizar programa            =\n");
        printf("==============================================\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            opcao1();
            break;
        case 2:
            opcao2();
            break;
        case 3:
            opcao3();
            break;
        case 4:
            i = 4;
            printf("\nFinalizando programa!!!");
            break;
        default:
            printf("\n\nOpcao inexistente!!!\n\n");
            break;
        }
    } while (i != 4);
    
    
}
int opcao1()
{
    float salario, imposto;

    printf("\nInsira seu salario: ");
    scanf("%f", &salario);

    if (salario < 500)
    {
        imposto = (5 * 100)/salario;
    }
    if (salario >= 500 && salario <= 850)
    {
        imposto = (10 * 100)/salario;
    }
    if (salario > 850)
    {
        imposto = (15 * 100)/salario;
    }
    
    printf("Seu imposto: %.2f\n\n", imposto);
}
int opcao2()
{
    float salario, aumento;

    printf("\nInsira seu salario: ");
    scanf("%f", &salario);

    if (salario > 2500)
    {
        aumento = salario + 25;
    }
    if (salario >= 740 && salario <= 2500)
    {
        aumento = salario + 50;
    }
    if (salario >= 450 && salario < 750)
    {
        aumento = salario + 75;
    }
    if (salario < 450)
    {
       aumento = salario + 100;
    }

    printf("Seu novo salario: %.2f\n\n", aumento);
}
int opcao3()
{
    float salario;

    printf("\nInsira seu salario: ");
    scanf("%f", &salario);

    if (salario <= 1700)
    {
        printf("A classificacao da sua remuneracao: Mal remunerado\n\n");
    }
    if (salario > 1700)
    {
        printf("A classificacao da sua remuneracao: Bem remunerado\n\n");
    }
}