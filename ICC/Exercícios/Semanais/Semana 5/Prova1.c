#include <stdio.h>
int main()
{
    int parafusos, porcas, ruelas;
    float prec_para, prec_porc, prec_ruela, desc_para, desc_porc, desc_ruela, valor_compra, valor_desconto;

    printf("Insira a quantidade dos parafusos: ");
    scanf("%d",&parafusos);
    printf("Insira a quantidade das porcas: ");
    scanf("%d",&porcas);
    printf("Insira a quantidade da ruela: ");
    scanf("%d",&ruelas);

    printf("Insir o valor dos parafusos: ");
    scanf("%f", &prec_para);
    printf("Insir o valor das porcas: ");
    scanf("%f", &prec_porc);
    printf("Insir o valor das ruelas: ");
    scanf("%f", &ruelas);

    desc_porc = (float) (prec_porc -((prec_porc * 10)/100)) * porcas;
    desc_para = (float) (prec_para -((prec_para * 20)/100)) * parafusos;
    desc_porc = (float) (prec_ruela -((prec_ruela * 30)/100)) * ruelas;


    valor_compra = (float)(parafusos*prec_para) + (porcas*prec_porc) + (ruelas*prec_ruela);
    valor_desconto = valor_compra - (desc_para + desc_porc + desc_ruela) ;

    printf("Valor total : %.2f\nValor com desconto: %.2f", valor_compra, valor_desconto);

    return 0;
}
