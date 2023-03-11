#include <stdio.h>
float item1(float sal)
{
        float imp;

        if (sal < 500.00)
        {
            imp = (sal + ((sal * 5)/100));
            printf("O seu salario com imposto de 5 porcento: R$%.2f\n", imp);
        }
        if (sal >= 500.00 && sal <= 850.00)
        {
            imp = (sal + ((sal * 10)/100));
            printf("O seu salario com imposto de 10 porcento: R$%.2f\n", imp);
        }
        if (sal > 850.00)
        {
            imp = (sal + ((sal * 15)/100));
            printf("O seu salario com imposto de 15 porcento: R$%.2f\n", imp);
        }
}
float item2(float sal)
{
    float novo;

        if (sal > 1500.00)
        {
            novo = (sal + 25);
            printf("O seu novo salario com aumento de R$25: R$%.2f\n", novo);
        }
        if (sal >= 750.00 && sal <= 1500.00)
        {
            novo = (sal + 50);
            printf("O seu novo salario com aumento de R$50: R$%.2f\n", novo);
        }
        if (sal >= 450.00 && sal < 750.00)
        {
            novo = (sal + 75.00);
            printf("O seu novo salario com aumento de R$75: R$%.2f\n", novo);
        }
        if (sal < 450.00)
        {
            novo = (sal + 100.00);
            printf("O seu novo salario com aumento de R$100: R$%.2f\n", novo);
        }
}
int main()
{

    int opc;
    float sal;
    printf("Insira o seu salario R$");
    scanf("\n%f", &sal);
    printf("Insira a opcao desejada(1 ou 2):" );
    scanf("\n%d", &opc);

    if (opc == 1)
    {
        item1(sal);
    }
     if (opc == 2)
    {
        item2(sal);
    }

    return 0;
}
