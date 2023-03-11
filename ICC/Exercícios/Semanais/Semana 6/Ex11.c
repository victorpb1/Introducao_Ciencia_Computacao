#include <stdio.h>
float calc(int pais, float prec)
{
        float imp, impt;

        if (pais == 1)
        {
          return  printf("Esse pais nao tem imposto: R$%.2f\n");
        }
        if (pais == 2)
        {
            imp = ((prec*0.15));
            impt = (prec+(prec*0.15));
          return  printf("Esse pais tem imposto de 15 porcento sobre seus produtos, R$%.2f, logo R$%.2f\n",imp, impt);
        }
        if (pais == 3)
        {
            imp = ((prec*0.25));
            impt = (prec+(prec*0.25));
          return  printf("Esse pais tem imposto de 25 porcento sobre seus produtos, R$%.2f, logo R$%.2f\n",imp, impt);
        }


}
int main()
{

    int prod, pais;
    float kg, prec, conv;

    printf("Insira o codigo do produto(1 a 10): ");
    scanf("\n%d", &prod);

    printf("Insira o peso do produto em kilos: ");
    scanf("\n%f", &kg);

    printf("Insira o codigo do pais de origem(1 a 3): ");
    scanf("\n%d", &pais);

    conv = kg * 1000;

    if ( prod >= 1 && prod <= 4)
    {
        prec = (0.10 * conv);
    }

    if ( prod >= 5 && prod <= 7)
    {
        prec = (0.25 * conv);
    }

    if ( prod >= 8 && prod <= 10)
    {
        prec = (0.35 * conv);
    }

    calc(pais, prec);

    return 0;
}
