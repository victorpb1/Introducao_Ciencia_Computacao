#include <stdio.h>
float conversor(float segundos)
{
    float horas,minutos,resp;

    minutos = segundos/60;
    horas = (segundos/60)/60;

    resp = printf("%.2f segundos, sao %.2f minutos e %.2f horas\n",segundos,minutos,horas);

    return resp;
}

int main()
{
    float segs, resposta;

    printf("Digite os segundos: ");
    scanf("%f", &segs);

    resposta = conversor(segs);

    return 0;
}
