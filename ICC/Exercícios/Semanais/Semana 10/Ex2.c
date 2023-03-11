#include <stdio.h>
float funcao(float sal, int cod)
{
    switch(cod)
    {
        case 1:
            printf("\nVoce eh professor, seu aumento de 50 porcento, %.2f\n", (((sal*50)/100) + sal));
            break;

        case 2:
            printf("\nVoce eh Secretario, seu aumento de 35 porcento, %.2f\n", (((sal*35)/100) + sal));
            break;

        case 3:
            printf("\nVoce eh programador, seu aumento de 20 porcento, %.2f\n", (((sal*20)/100) + sal));
            break;

        case 4:
            printf("\nVoce eh Analista de Sistemas, seu aumento de 10 porcento, %.2f\n", (((sal*10)/100) + sal));
            break;

        case 5:
            printf("\nVoce eh gerente, e portanto nao tem aumento, %.2f\n", sal);
            break;

        default:
            printf("\nCodigo invalido, digite novamente!\n");
    }
}
int main()
{
    float s;
    int cod;

    printf("Insira o seu salario: R$");
    scanf("\n%f", &s);

    printf("\nInsira o codigo (1-5): ");
    scanf("\n%d", &cod);

    funcao(s, cod);

}
