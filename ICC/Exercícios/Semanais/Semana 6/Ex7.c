#include <stdio.h>
float reajuste(char c, float s)
{
    float r;

    if (c == 'm')
    {
        r = (s + (s /10));
    }
    if (c == 'h')
    {
        r = (s + ((s * 20)/100));
    }

    printf("\nSeu novo salario R$%.2f\n", r);

    return r;
}
int main()
{
    char c;
    float s;

    printf("Insira a categoria(m ou h): ");
    scanf("%c", &c);

    if(c != 'm' && c != 'h')
    {
        printf("\nCategoria invalida\n");
    }

    printf("Insira o valor do salario: R$");
    scanf("%f",&s);


    printf("\nSua categoria '%c' \nSeu salario R$%.2f", c, s);

    reajuste (c, s);

}
