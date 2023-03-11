/*
2 - Construa um algoritmo que leia 5 conjuntos de 2 valores, 
o primeiro representando a matrícula de um aluno e o segundo 
representando a sua altura em centímetros. Encontrar o aluno 
mais alto e mais baixo e mostrar seus números e suas alturas, 
dizendo se o aluno é o mais alto ou é o mais baixo.
*/
#include <stdio.h>
int main()
{
    int matricula, auxiliar_matricula_alto, auxiliar_matricula_baixo;
    float altura, mais_alto, mais_baixo;

    printf("Insira a matricula do aluno: ");
    scanf("%d", &matricula);
    printf("Insira a altura desse aluno: ");
    scanf("%f", &altura);

    mais_alto = altura;
    mais_baixo = altura;
    auxiliar_matricula_alto = matricula;
    auxiliar_matricula_baixo = matricula;

    for (int i = 0; i < 4; i++)
    {
        printf("\nInsira a matricula do aluno: ");
        scanf("%d", &matricula);
        printf("Insira a altura desse aluno: ");
        scanf("%f", &altura);

        if (altura > mais_alto)
        {
            mais_alto = altura;
            auxiliar_matricula_alto = matricula;
        }
        if (altura < mais_baixo)
        {
            mais_baixo = altura;
            auxiliar_matricula_baixo = matricula;
        }
    }

    printf("\nMatricula do aluno mais alto, %d, sua altura, %.2f", auxiliar_matricula_alto, mais_alto);
    printf("\nMatricula do aluno mais baixo, %d, sua altura, %.2f\n", auxiliar_matricula_baixo, mais_baixo);
}