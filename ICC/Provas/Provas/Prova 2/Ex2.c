#include <stdio.h>
float imposto(float prec, float au, float imp)
{
    float nv_p;
    nv_p = ((prec + au) - imp);
    if(nv_p > 50 && nv_p < 120)
    {
        printf("\nA categoria eh, Normal\n");
    }
    if(nv_p <= 50)
    {
        printf("\nA categoria eh, Barato\n");
    }
    if(nv_p > 120)
    {
        printf("\nA categoria eh, Caro\n");
    }
}
float aumento(float prec)
{
    float au, imp;
    int cat;
    char sit;

    printf("\nInsira a categoria(1, 2, 3): ");
    scanf("\n%d", &cat);
    printf("\nInsira a situacao(R, N): ");
    scanf("\n%c", &sit);

    if(prec>25)
    {
       switch(cat)
        {
        case 1:
            au = (prec*0.12)+prec;
            printf("\nO aumento de 12 porct, R$%.2f", au);
            break;
        case 2:
            au = (prec*0.15)+prec;
            printf("\nO aumento de 15 porct, R$%.2f", au);
            break;
        case 3:
            au = (prec*0.18)+prec;
            printf("\nO aumento de 18 porct, R$%.2f", au);
            break;
        }
    }
   if(prec<=25)
   {
       switch(cat)
        {
        case 1:
            au = (prec*0.05)+prec;
            printf("\nO aumento de 5 porct, R$%.2f\n", au);
            break;
        case 2:
            au = (prec*8/100)+prec;
            printf("\nO aumento de 8 porct, R$%.2f\n", au);
            break;
        case 3:
            au = (prec*0.1)+prec;
            printf("\nO aumento de 10 porct, R$%.2f\n", au);
            break;
        }
   }
   if(cat == 2 || sit == 'R')
    {
        imp = (prec*0.05 + prec);
        printf("\nO imposto, R$%.2f\n",imp);
    }else{
        imp = (prec*0.08+prec);
        printf("\nO imposto, R$%.2f\n",imp);
    }
    imposto(prec, au, imp);
}
int main()
{
    float prec;
    int cat, sit;

    printf("Insira o preco: R$");
    scanf("\n%f", &prec);

    aumento(prec);

    return 0;
}
