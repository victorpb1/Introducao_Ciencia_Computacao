#include <stdio.h>
#include <math.h>

int main()
{
    float n;
    scanf("%f", &n);

    float praCIMA, praBAIXO, absoluto, quadrada, potencia;

    praCIMA = ceil(n);
    praBAIXO = floor(n);
    absoluto = fabs(n);
    quadrada = sqrt(n);
    potencia = pow(n, 3);

    printf("Valor arredondado para cima: %.2f\n", praCIMA);
    printf("Valor arredondado para baixo: %.2f\n", praBAIXO);
    printf("Valor absoluto: %.2f\n", absoluto);
    printf("Raiz quadrada: %.2f\n", quadrada);
    printf("Potencia: %.2f", potencia);
}
