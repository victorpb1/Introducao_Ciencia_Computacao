#include <stdio.h>
int main()
{
    int qntG1, qntG2, dia;
    float psaco, conv1, conv2, convT, dia5, dia15, pordia;

    printf("Peso do saco em kg: ");
    scanf("%f", &psaco);
    printf("Quantas gramas de racao para o gato1 por dia: ");
    scanf("%d", &qntG1);
    printf("Quantas gramas de racao para o gato2 por dia: ");
    scanf("%d", &qntG2);

    conv1 = (float) qntG1/1000;
    conv2 = (float) qntG2/1000;
    convT = conv1 + conv2;

    printf("Insira quantos dias de racao: ");
    scanf("%d", &dia);

    pordia = dia * convT;
    dia5 = psaco - pordia;
    dia15 = psaco - pordia;

    printf("Em 5 dias, ainda resta %.3f KG\n", dia5);
    printf("Em 15 dias, ainda resta %.3f KG\n", dia15);

    return 0;
}
