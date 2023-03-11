#include <stdio.h>
int main()
{
    float SalM, H, SalB, Coe, Imp, Gra, SalL, AuxA;
    char Op, OP;

    printf("Insira o valor do salario minimo: R$");
    scanf("\n%f", &SalM);
    printf("\nInsira o numero de horas trabalhadas no mes: ");
    scanf("\n%f", &H);
    printf("\nInsira o turno de trabalho (M para matutino, V para vespertino ou N para noturno): ");
    scanf("\n%c", &Op);
    printf("\nInsira a categoria (O para operario, G para gerente): ");
    scanf("\n%c", &OP);

    switch(Op)
    {

        case 'M':
            Coe = ((SalM*10)/100);
            printf("\nO coeficiente do trabalho matutino, 10 porcento do Salario Minimo: %.2f\n", Coe);
            break;

        case 'V':
            Coe = ((SalM*15)/100);
            printf("\nO coeficiente do trabalho vespertino, 15 porcento do Salario Minimo: %.2f\n", Coe);
            break;

        case 'N':
            Coe = ((SalM*12)/100);
            printf("\nO coeficiente do trabalho noturno, 12 porcento do Salario Minimo: %.2f\n", Coe);
            if(H > 80)
            {
                Gra = 50;
                printf("\nesta qualificado pra ter a gratificacao de R$%.2f\n", Gra);
            }
            if(H != 80)
            {
                Gra = 30;
                printf("\nSua gratificacaO sera de R$%.2f\n", Gra);
            }
            break;

        default:
            printf("\nCodigo invalido1, digite novamente!\n");
    }

    SalB = Coe * H;

    switch(OP)
    {

        case 'O':
            if(SalB >= 300.00)
            {
            Imp = ((SalB*5/100));
            AuxA = (SalB/3);
            printf("\nO imposto de operario com o Salario Bruto maior igual a R$300.00, ou seja, 5 porcento sobre o Salario Bruto: R$%.2f\n", Imp);
            printf("\nVc cumpre um dos requisitos, portanto, tem um auxilio alimentacao de 1/3 do Salario bruto, ou seja, R$%.2f\n", AuxA);
            }

            if(SalB < 300.00)
            {
            Imp = ((SalB*3/100));
            printf("\nO imposto de operario com o Salario Bruto menor que R$300.00, ou seja, 3 porcento sobre o Salario Bruto: R$%.2f\n", Imp);
            }

            break;

        case 'G':
            if(SalB >= 400.00)
            {
            Imp = ((SalB*6/100));
            printf("\nO imposto de gerente com o Salario Bruto maior igual a R$400.00, ou seja, 6 porcento sobre o Salario Bruto: R$%.2f\n", Imp);
            }

            if(SalB < 400.00)
            {
            Imp = ((SalB*4/100));
            printf("\nO imposto de gerente com o Salario Bruto menor que R$400.00, ou seja, 4 porcento sobre o Salario Bruto: R$%.2f\n",Imp);
            }

            break;

        default:
            printf("\nCodigo invalido2, digite novamente!\n");
    }

    if(Coe <= 25)
    {
        AuxA = (SalB/3);
        printf("\nPelo seu coeficiente de salario ser menor igual a 25, vc tem direito a 1/3 do Auxilio, ou seja: R$%.2f\n", AuxA);
    }
    if(Coe != 25 && OP != 'O')
    {
        AuxA = (SalB/2);
        printf("\nVc nao enquadra nos requisitos do auxilio, portanto, o valor sera a metade do Salario B, ou seja: R$%.2f\n", AuxA);
    }

    SalL = ((SalB - Imp) + Gra + AuxA);
    printf("\nEsse eh o valor do seu salario liquido, R$%.2f\n", SalL);
}
