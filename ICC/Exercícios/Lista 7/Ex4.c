#include <stdio.h>
int opcao1()
{
    float salario, imposto;

    printf("Insira o salario: ");
    scanf("%f", &salario);

    if (salario < 500)
    {
        imposto = salario * 5/100;
        printf("\nSeu imposto: R$%.2f\n", imposto);

    }else if (salario >= 500 && salario <= 850)
    {
        imposto = salario * 10/100;
        printf("\nSeu imposto: R$%.2f\n", imposto);

    } else if (salario > 850)
    {
        imposto = salario *15/100;
        printf("\nSeu imposto: R$%.2f\n", imposto);
    }
}
int opcao2()
{
    float salario, new_salario;

    printf("Insira o salario: ");
    scanf("%f", &salario);

    if (salario > 1500)
    {
        new_salario = salario + 25;
        printf("\nSeu novo salario: R$%.2f\n", new_salario);

    }else if (salario >= 750 && salario <= 1500)
    {
        new_salario = salario + 50;
        printf("\nSeu novo salario: R$%.2f\n", new_salario);

    }else if (salario >= 450 && salario < 750)
    {
        new_salario = salario + 75;
        printf("\nSeu novo salario: R$%.2f\n", new_salario);

    }else if (salario < 450)
    {
        new_salario = salario + 100;
        printf("\nSeu novo salario: R$%.2f\n", new_salario);
    }
}
int main()
{
    int opcao;
    
    printf("1 - Imposto\n2 - Novo salario\n\nInsira a opcao desejada: ");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        opcao1();
        break;
    case 2:
        opcao2();
        break;
    default:
        printf("\nOpcao invalida!\n");
        break;
    }
}
