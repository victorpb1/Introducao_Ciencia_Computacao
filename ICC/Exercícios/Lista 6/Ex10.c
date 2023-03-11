/*
10. Faça uma função que receba como parâmetro o código correspondente ao cargo de um funcionário e seu salário 
atual e mostre o cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir: (olhar img)
*/
#include <stdio.h>
float professor(float salario)
{
    float new_salario;
    new_salario = salario + (salario*1/2);
    printf("\nSeu novo salario de professor: R$%.2f\n", new_salario);
}
float secretario(float salario)
{
    float new_salario;
    new_salario = salario + (salario*35/100);
    printf("\nSeu novo salario de secretario: R$%.2f\n", new_salario);
}
float programador(float salario)
{
    float new_salario;
    new_salario = salario + (salario*20/100);
    printf("\nSeu novo salario de programador: R$%.2f\n", new_salario);
}
float analista(float salario)
{
    float new_salario;
    new_salario = salario + (salario*10/100);
    printf("\nSeu novo salario de analista de sistemas: R$%.2f\n", new_salario);
}
float gerente(float salario)
{
    float new_salario;
    new_salario = salario;
    printf("\nSeu novo salario de gerente: R$%.2f. Exatamente, nao mudou!\n", new_salario);
}
int main()
{
    int codigo;
    float salario;

    printf("Insira o salario: ");
    scanf("%f", &salario);
    printf("\n1 - Professor\n2 - Secretario\n3 - Programador\n4 - Analista de Sistemas\n5 - gerente\n\nInsira o codigo: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        professor(salario);
        break;
    case 2:
        secretario(salario);
        break;
    case 3:
        programador(salario);
        break;
    case 4:
        analista(salario);
        break;
    case 5:
        gerente(salario);
        break;
    default:
        printf("\n\nCodigo errado, tente novamente!!!\n\n");
        break;
    }
}