/*
7 - O sistema de avaliação de determinada disciplina é composto por três provas. A primeira prova tem peso 2,
a segunda prova tem peso 3 e a terceira prova tem peso 5. Faça um algoritmo para calcular a média 
(média ponderada) final de um aluno dessa disciplina.
*/
#include <stdio.h>

int main()
{
    float p1, p2, p3, media;

    printf("Insira o valor da prova 1: ");
    scanf("%f", &p1);
    printf("Insira o valor da prova 2: ");
    scanf("%f", &p2);
    printf("Insira o valor da prova 3: ");
    scanf("%f", &p3);

    media = (p1*2 + p2*3 + p3*5)/10;

    printf("\nA media: %.2f", media);
}