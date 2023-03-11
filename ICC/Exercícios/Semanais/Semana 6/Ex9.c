#include <stdio.h>
float cargo(int carg, float sal)
{
    if (carg == 1)
    {
        printf("\nVoce e professor, seu salario e R$%.2f, com o aumento fica R$%.2f\n", sal, (sal + ((sal * 50)/100)));
    }
    if (carg == 2)
    {
        printf("\nVoce e secretario, seu salario e R$%.2f, com o aumento fica R$%.2f\n", sal, (sal + ((sal * 35)/100)));
    }
    if (carg == 3)
    {
        printf("\nVoce e programador, seu salario e R$%.2f, com o aumento fica R$%.2f\n", sal, (sal + ((sal * 20)/100)));
    }
    if (carg == 4)
    {
        printf("\nVoce e Analista de Sistemas, seu salario e R$%.2f, com o aumento fica R$%.2f\n", sal, (sal + ((sal * 10)/100)));
    }
    if (carg == 5)
    {
        printf("\nVoce e gerente, seu salario e R$%.2f, e seu cargo nao tem aumento!\n", sal);
    }
}
int main()
{
    int cod;
    float sal;

    printf("Digite o codigo(1 a 5): ");
    scanf("\n%d", &cod);
    printf("Insira o salario: R$");
    scanf("\n%f", &sal);

    cargo(cod, sal);

    return 0;
}
