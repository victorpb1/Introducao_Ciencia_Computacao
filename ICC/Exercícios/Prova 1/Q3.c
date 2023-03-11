#include <stdio.h>
/*
Criar um algoritmo modularizado (organizado por funções) que leia a quantidade de fitas que uma locadora de 
vídeo possui e o valor que ela cobra por cada aluguel, mostrando as informações pedidas a seguir: (ver img)
*/
int funcao(int qntd_fitas, float valor_aluguel, int qntd_fitas_final_ano)
{   
    int qnt_atrasos, qntd_fitas_final;
    float faturamento_anual, valor_atraso, ganho_multas_mes;
    qntd_fitas_final = qntd_fitas_final_ano;

    valor_atraso = valor_aluguel*10/100 +  valor_aluguel;
    qnt_atrasos = qntd_fitas/10;
    ganho_multas_mes = (float)qnt_atrasos*valor_atraso;

    qntd_fitas = qntd_fitas - qnt_atrasos;

    faturamento_anual = (float)(((qntd_fitas/3) * valor_aluguel + ganho_multas_mes)*12);

    printf("\n\nO faturamento anual:R$%.2f\nA quantidade de fitas no fim do ano: %i\n\n", faturamento_anual, qntd_fitas_final);
}
int main()
{
    int qntd_fitas, fitas_quebradas, fitas_reposicao, qntd_fitas_final_ano;
    float valor_aluguel;

    printf("Insira a quantidade de fitas da locadora e o valor do aluguel: ");
    scanf("%i%f", &qntd_fitas, &valor_aluguel);

    fitas_quebradas = qntd_fitas*2/100;
    fitas_reposicao = fitas_quebradas/10;

    qntd_fitas_final_ano = qntd_fitas - fitas_quebradas + fitas_reposicao;
    funcao(qntd_fitas, valor_aluguel, qntd_fitas_final_ano);

    
}