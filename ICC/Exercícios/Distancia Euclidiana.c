#include <stdio.h>
#include <math.h>

float funcao (float ponto1_x1, float ponto1_y1, float ponto1_x2, float ponto1_y2, float ponto2_x1, float ponto2_y1, float ponto2_x2, float ponto2_y2)
{
    float distancia_1 = sqrt(pow(ponto1_x2 - ponto1_x1, 2) + pow(ponto1_y2 - ponto1_y1, 2));
    float distancia_2 = sqrt(pow(ponto2_x2 - ponto2_x1, 2) + pow(ponto2_y2 - ponto2_y1, 2));

    printf("Distancia entre o primeiro par de  pontos: %f\n", distancia_1);
    printf("Distancia entre o segundo par de pontos: %f", distancia_2);

    return 0;
}
int main ()
{
    float ponto1_x1, ponto1_y1, ponto1_x2, ponto1_y2, ponto2_x1, ponto2_y1, ponto2_x2, ponto2_y2;

    scanf("%f%f%f%f", &ponto1_x1, &ponto1_y1, &ponto1_x2, &ponto1_y2);
    scanf("%f%f%f%f", &ponto2_x1, &ponto2_y1, &ponto2_x2, &ponto2_y2);

    funcao(ponto1_x1, ponto1_y1, ponto1_x2, ponto1_y2, ponto2_x1, ponto2_y1, ponto2_x2, ponto2_y2);
}