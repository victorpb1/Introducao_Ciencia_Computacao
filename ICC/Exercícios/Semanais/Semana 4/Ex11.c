#include <math.h>
#include <stdio.h>
float media(int n1, int n2, int n3, int n4)
{
    float m;

    m = (n1 + n2 + n3 + n4)/4;

    return m;
}
float quadrado (float n1)
{
    float m;

    m = n1 * n1;

    return m;
}
float cubo (float n1)
{
    float m = n1 * n1 * n1;

    return m;
}
float calcular (float x, float y, float w, float k)
{
    float resp, exp;

    exp = cubo(x) + quadrado(y) + media(x, y, w, k) + w/k;

    resp = printf("Resposta: %.2f", exp);

    return resp;
}
int main()
{
    float xx, ww, kk, yy;

    printf("Insira o valor de x: ");
    scanf("%f", &xx);

    printf("Insira o valor de y: ");
    scanf("%f", &yy);

    printf("Insira o valor de w: ");
    scanf("%f", &ww);

    printf("Insira o valor de k: ");
    scanf("%f", &kk);

    calcular(xx, yy, ww, kk);

    return 0;
}
