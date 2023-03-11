/*Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de
trânsito. Foram obtidos os seguintes dados:
(a)Código da cidade
(b)Numero de veículos de passeio (em 2020)
(c)Numero de acidentes em trânsito com vitmas(em 2020)
Deseja-se saber:
(a) Qual o maior e o menor índice de acidentes de trânsito e a que cidades pertecem
(b) Qual a media de veículos nas cinco cidades juntas
(c) qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio*/
#include <stdio.h>
float media_a(float n, float qnt)
{
    float r;
    r = n/qnt;
    printf("\nA media de acidentes em cidades com menos de 2000 de veiculos = %.2f\n", r);

    return r;
}
float media_v(float n)
{
    float med;
    med = n/5;
    printf("\nA media dos veiculos = %.2f", med);

    return med;
}
int main()
{
    int cd, nv, na, max, min, i = 1;
    float qnt, med_a;
    float menos1, menos2, menos3, menos4, menos5;

    int nv1, nv2, nv3, nv4, nv5;
    int na1=0, na2=0, na3=0, na4=0, na5=0;

    while(i <= 5)
    {
        printf("Insira o cod da cidade: ");
        scanf("%d", &cd);
        printf("Numero de veiculos de passeio dessa cidade: ");
        scanf("%d", &nv);
        printf("Numero de acidentes com vitimas: ");
        scanf("%d", &na);
        printf("\n");
        switch(cd)
            {
                case 1:
                    nv1 = nv;
                    if (nv1 < 2000)
                    {
                        med_a = med_a + (float)nv1;
                        menos1++;
                    }

                    na1 = na;

                    if(na1 > max)
                    {
                        max = na1;
                    }
                    if(na1 < min)
                    {
                        min = na1;
                    }
                    break;
                case 2:
                    nv2 = nv;
                    if (nv2 < 2000)
                    {
                        med_a = med_a + (float)nv2;
                        menos2 ++;
                    }

                    na2 = na;
                    if(na2 > max)
                    {
                        max = na2;
                    }
                    if(na2 < min)
                    {
                        min = na2;
                    }
                    break;
                case 3:
                    nv3 = nv;
                    if (nv3 < 2000)
                    {
                        med_a = med_a + (float)nv3;
                        menos3 ++;
                    }

                    na3 = na;
                    if(na3 > max)
                    {
                        max = na3;
                    }
                    if(na3 < min)
                    {
                        min = na3;
                    }
                    break;
                case 4:
                    nv4 = nv;
                    if (nv4 < 2000)
                    {
                        med_a = med_a + (float)nv4;
                        menos4 ++;
                    }

                    na4 = na;
                    if(na4 > max)
                    {
                        max = na4;
                    }
                    if(na4 < min)
                    {
                        min = na4;
                    }
                    break;
                case 5:
                    nv5 = nv;
                    if (nv5 < 2000)
                    {
                        med_a = med_a + (float)nv5;
                        menos5 ++;
                    }

                    na5 = na;
                    if(na5 > max)
                    {
                        max = na5;
                    }
                    if(na5 < min)
                    {
                        min = na5;
                    }
                    break;
                default:
                    printf("Codigo errado!\n");
                    break;
            }

        i++;
        nv = (float)nv1+(float)nv2+(float)nv3+(float)nv4+(float)nv5;
        qnt = menos1+menos2+menos3+menos4+menos5;

    }
    printf("\nO maior e o menor: %d, %d\n", max, min);
    if(max == na1)
    {
        printf("O maior eh da cidade 1\n");
    }
    if(max == na2)
    {
        printf("O maior eh da cidade 2\n");
    }
    if(max == na3)
    {
        printf("O maior eh da cidade 3\n");
    }
    if(max == na4)
    {
        printf("O maior eh da cidade 4\n");
    }
    if(max == na5)
    {
        printf("O maior eh da cidade 5\n");
    }

    if(min == na1)
    {
        printf("O menor eh da cidade 1");
    }
    if(min == na2)
    {
        printf("O menor eh da cidade 2");
    }
    if(min == na3)
    {
        printf("O menor eh da cidade 3");
    }
    if(min == na4)
    {
        printf("O menor eh da cidade 4");
    }
    if(min == na5)
    {
        printf("O menor eh da cidade 5");
    }

    media_v(nv);
    media_a(med_a, qnt);

    return 0;
}

