//Não entendi direito essa questão

#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, p1, p2, p3, p4, f;

    printf("Insira as notas dos alunos: ");
    scanf("\n%f\n%f\n%f\n%f", &n1, &n2, &n3, &n4);

    p1 = n1*15/100;
    p2 = n2*20/100;
    p3 = n3*25/100;
    p4 = n4*40/100;

    f = p1 + p2 + p3 + p4;

    if(f >= 7)
        {
            printf("Parabens sua nota foi %.2f e vc foi aprovado!\n", f);
        }

    if(f < 7 && f > 2)
        {
            printf("A media para passar eh 7, sua nota foi %.2f, logo, fara a prova final.\n",f);
        }
}
