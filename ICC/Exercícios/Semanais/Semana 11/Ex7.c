/*Para uma turma de 62 alunos, construir
um algoritmo que determine:(a)(Idade media dos alunos com altura menor que 1.70;
(b) A altura media dos alunos com mais de vinte anos.*/
#include <stdio.h>
int main()
{
    float alt, id, ma = 0, mi = 0, maxid = 0, maxalt = 0, id1, alt1;

    for(int i = 1; i <= 62; i++)
    {
        printf("Insira a idade: ");
        scanf("%f", &id);
        printf("Insira a altura: ");
        scanf("%f", &alt);

        if(alt < 1.70)
        {
            mi++;
            maxid += id;

            id1 = maxid/mi;

        }
        if(id > 20)
        {
            ma++;
            maxalt += alt;

            alt1 = maxalt/ma;
        }
    }
    printf("\nMedia idade alunos < 1.70: %.2f\n", id1);
    printf("\nMedia altura alunos > 20 anos: %.2f\n", alt1);
}
