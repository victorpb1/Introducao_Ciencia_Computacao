#include <stdio.h>
int born(int d, int m, int a, int dh, int mh, int ah)
{
    int id, id1;

    id = ah - a;
    id1 = ah - a - 1;

    if(mh > m)
    {
        printf("\nSua idade: %d anos, com ela ", id);
        if (id >= 16)
        {
            printf("vc ja pode votar ");
        }
        if (id >= 18)
        {
            printf("e vc ja pode tirar a carteira de habilitacao\n");
        }
        if (id < 16)
        {
            printf("vc ainda nao pode fazer nd\n");
        }
    }
    if(mh < m)
    {
        printf("\nSua idade: %d anos, com ela ", id1);

        if (id1 >= 16)
        {
            printf("vc ja pode votar ");
        }
        if (id1 >= 18)
        {
            printf("e vc ja pode tirar a carteira de habilitacao\n");
        }
        if (id1 < 16)
        {
            printf("vc ainda nao pode fazer nd\n");
        }
    }
    if(mh == m && dh < d )
    {
        printf("\nSua idade: %d anos, com ela ", id1);

        if (id1 >= 16)
        {
            printf("vc ja pode votar ");
        }
        if (id1 >= 18)
        {
            printf("e vc ja pode tirar a carteira de habilitacao\n");
        }
        if (id1 < 16)
        {
            printf("vc ainda nao pode fazer nd\n");
        }
    }
    if(mh == m && dh >= d )
    {
        printf("\nSua idade: %d anos, com ela ", id);

        if (id >= 16)
        {
            printf("vc ja pode votar ");
        }
        if (id >= 18)
        {
            printf("e vc ja pode tirar a carteira de habilitacao\n");
        }
        if (id < 16)
        {
            printf("vc ainda nao pode fazer nd\n");
        }
    }
}
int main()
{
    int d, m, a, dh, mh, ah;

    printf("Insira o dia, mes e ano do seu nascimento: ");
    scanf("\n%d\n%d\n%d", &d, &m, &a);

    printf("\nInsira a data de hoje: ");
    scanf("\n%d\n%d\n%d", &dh, &mh, &ah);

    born(d, m, a, dh, mh, ah);
}
