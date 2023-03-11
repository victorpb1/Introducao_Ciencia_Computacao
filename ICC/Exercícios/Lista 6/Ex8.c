/*
8. Construa uma função que receba o salário e categoria de um funcionário, se a categoria for = “m” de 
mensalista, conceder 10% de aumento e retorne o valor reajustado, se for = “h” de horista, conceder 20% de 
aumento e retorne o valor reajustado, se não for “m” nem “h”, exibir a mensagem categoria inválida e retorne 
o valor -1 (utilize o comando switch).
*/
#include <stdio.h>
int mensalista(float salario)
{
    float aumento_mensalista;
    aumento_mensalista = (salario * 10/100) + salario;
    printf("Novo salario de mensalista: %.2f\n", aumento_mensalista);
}
int horista(float salario)
{
    float aumento_horista;
    aumento_horista = (salario * 20/100) + salario;
    printf("Novo salario de horista: %.2f\n", aumento_horista);
}
int main()
{
    float salario;
    char categoria;
    
    printf("Insira o salario: ");
    scanf("%f", &salario);
    printf("Insira a categoria: ");
    scanf("\n%c", &categoria);
    
    switch (categoria)
    {
    case 'm':
        mensalista(salario);
        break;
    case 'h':
        horista(salario);
        break;
    default:
        printf("\n\nCategoria invalida!!!\n-1\n\n");
        break;
    }
    
}