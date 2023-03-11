//Olhar img
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
        printf("=               1: Novo Salario              =\n");
        printf("=               2: Ferias                    =\n");
        printf("=               3: Decimo terceiro           =\n");
        printf("=               4: Sair                      =\n");
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
    float salario, novo_salario;

    printf("\nInsira seu salario: ");
    scanf("%f", &salario);

    if (salario < 350)
    {
        novo_salario = (15 * salario)/100 + salario;
    }
    if (salario >= 350 && salario <= 600)
    {
        novo_salario = (10 * salario)/100 + salario;
    }
    if (salario > 850)
    {
        novo_salario = (15 * salario)/100 + salario;
    }
    
    printf("Seu novo salario: %.2f\n\n", novo_salario);
}
int opcao2()
{
    float salario, ferias;

    printf("\nInsira seu salario: ");
    scanf("%f", &salario);

    ferias = salario + salario/3;

    printf("Valor das ferias: %.2f\n\n", ferias);
}
int opcao3()
{
    int meses_trabalho;
    float salario, decimo_terceiro;

    printf("\nInsira seu salario: ");
    scanf("%f", &salario);
    printf("Insira o numero de meses de trabalho: ");
    scanf("%d", &meses_trabalho);

    decimo_terceiro = (salario * (float)meses_trabalho)/12;

    printf("O valor do seu decimo terceiro: %.2f\n\n", decimo_terceiro);
}