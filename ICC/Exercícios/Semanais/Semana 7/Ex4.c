#include <stdio.h>
int main()
{
    float A,B,C;
    int Op;

    printf("Insira 3 numeros: ");
    scanf("\n%f\n%f\n%f", &A,&B,&C);
    printf("\nInsira o codigo da operacao (1-4): ");
    scanf("\n%d", &Op);

    switch(Op)
    {

        case 1:
                printf("\nA media aritmetica dos 3 numeros: %.2f\n",((A + B + C)/3));
                break;

        case 2:
                printf("\nA media ponderada dos 3 numeros: %.2f\n",(((A*2) + (B*4) + (C*6))/12));
                break;

        case 3:
                if (A > B && C > B)
                {
                    printf("\nA diferenca do maior pelo menor, A - B = %.2f\n", (A-B));
                }
                if (A > C && B > C)
                {
                    printf("\nA diferenca do maior pelo menor, A - C = %.2f\n", (A-C));
                }
                if (B > A && C > A)
                {
                    printf("\nA diferenca do maior pelo menor, B - A = %.2f\n", (B-A));
                }
                if (B > C && A > C)
                {
                    printf("\nA diferenca do maior pelo menor, B - C = %.2f\n", (B-C));
                }
                if (C > A && B > C)
                {
                    printf("\nA diferenca do maior pelo menor, C - A = %.2f\n", (C-A));
                }
                if (C > B && A > B)
                {
                    printf("\nA diferenca do maior pelo menor, C - B = %.2f\n", (C-B));
                }
                break;
        case 4:
                printf("\nResultado da expressao r = (A^2) + (B^3) + (C^4) : %.2f\n",((A*A)+ (B*B*B) + (C*C*C*C)));
                break;

        default:
            printf("\nErro, codigo invalido, digite novamente!\n");
    }

}
