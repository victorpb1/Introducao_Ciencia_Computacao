//Considerando como dados as notas de uma determinada
//turma (56 alunos) em um prova escreva um
//algoritmo que imprima a média da notas dessa turma.
#include <stdio.h>
int main()
{
    float r, c, n = 0;
    int i;

    for(i = 1; i <= 56; i++){

    printf("Insira as notas: ");
    scanf("\n%f", &c);

    n = (n + c);
    r = n/3;
    }

    printf("O resultado: %.2f\n", r);
    return 0;
}
