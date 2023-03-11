#include <stdio.h>
int main()
{
    int h, m, hf, mf;
    float t, tf;

    printf("Insira a quantidade de horas e de minutos de inicio: ");
    scanf("\n%d\n%d", &h,&m);

    printf("Insira a quantidade de horas e de minutos no final: ");
    scanf("\n%d\n%d", &hf,&mf);

    t = ((float)(h - hf));
    tf = ((float)(m - mf));

    if (t <= 24)
    {
        if (t < 0)
        {
            printf("O jogo teve a duracao de %.2f horas ", t*(-1));

            if (tf < 0)
            {
                printf("e %.2f minutos", tf*(-1));
            }
            if (tf > 0)
            {
                printf("e %.2f minutos", tf);
            }

        if (t > 0)
        {
            printf("O jogo teve a duracao de %.2f horas ", t);

            if (tf < 0)
            {
                printf("e %.2f minutos", tf*(-1));
            }
            if (tf > 0)
            {
                printf("e %.2f minutos", tf);
            }
        }

        if (t == 0)
        {
            if (tf > 0)
            {
            printf("O jogo teve a duracao de %.2f minutos", tf);
            }
            if (tf < 0)
            {
            printf("O jogo teve a duracao de %.2f minutos", tf*(-1));
            }
        }
    }
    else
        if(t > 24)
        {
            printf("O jogo excedeu as 24h");
        }
    }
}
