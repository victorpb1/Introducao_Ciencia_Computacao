#include <math.h>
#include <stdio.h>
float calcular (float x, int y, float w, float k)
{
    float resp, exp;

    exp = (float) ((pow(x,3)) + (pow(y, 2)) + w)/k;

    resp = printf("Resposta: %.2f", exp);

    return resp;
}
int main()
{
    float xx, ww, kk;
    int yy;

    printf("Insira o valor de x: ");
    scanf("%f", &xx);

    printf("Insira o valor de w: ");
    scanf("%f", &ww);

    printf("Insira o valor de k: ");
    scanf("%f", &kk);

    printf("Insira o valor de y: ");
    scanf("%d", &yy);

    calcular(xx, yy, ww, kk);

    return 0;
}
