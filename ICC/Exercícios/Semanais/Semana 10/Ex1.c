#include <stdio.h>
int main()
{
    float s;
    char r;

    printf("Insira o seu salario: ");
    scanf("\n%f", &s);

    printf("\nInsira a sua categoria (m ou h): ");
    scanf("\n%c", &r);

    switch(r)
    {
        case 'm':
            printf("\nVc eh mensalista, logo, tem aumento de 10 porcento, no caso, R$%.2f\n",s/10 + s);
            break;

        case 'h':
            printf("\nVc eh horista, logo, tem aumento de 20 porcento, no caso, R$%.2f\n",s*20/100 + s);
            break;

        default:
            printf("\nCategoria invalida\n");
            break;
    }
}
