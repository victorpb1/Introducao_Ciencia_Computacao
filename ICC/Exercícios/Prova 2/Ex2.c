/*
2 - Faça um algoritmo que receba o valor do salário-mínimo, o número de horas trabalhadas, 
o número de dependentes do funcionário, a quantidade de horas extras trabalhadas e o turno de trabalho 
(M – matutino, V – vespertino ou N – noturno). Calcule e mostre o salário a receber do funcionário de 
acordo com as regras a seguir: 
*/
#include <stdio.h>
int item_1_6(float valor_salario_min_enunciado, float numero_horas_trabalhadas_enunciado, char turno_trabalho_enunciado, int numero_dependentes_enunciado, float qnt_horas_extra_trab_enunciado);
int item_7_11(float salario_bruto);

int main() {

    

    int numero_dependentes_enunciado;
    float valor_salario_min_enunciado, numero_horas_trabalhadas_enunciado, qnt_horas_extra_trab_enunciado;
    char turno_trabalho_enunciado;


    printf("Insira o valor do salario minimo: ");
    scanf("%f", &valor_salario_min_enunciado);
    printf("Insira o numero de horas trabalhadas: ");
    scanf("%f", &numero_horas_trabalhadas_enunciado);
    printf("Insira o numero de dependentes: ");
    scanf("%d", &numero_dependentes_enunciado);
    printf("Insira quantidade de horas extras trabalhadas: ");
    scanf("%f", &qnt_horas_extra_trab_enunciado);
    printf("Insira o turno de trabalho: ");
    scanf(" %c", &turno_trabalho_enunciado);

    item_1_6(valor_salario_min_enunciado, numero_horas_trabalhadas_enunciado, turno_trabalho_enunciado, numero_dependentes_enunciado, qnt_horas_extra_trab_enunciado);
}
int item_1_6(float valor_salario_min_enunciado, float numero_horas_trabalhadas_enunciado, char turno_trabalho_enunciado, int numero_dependentes_enunciado, float qnt_horas_extra_trab_enunciado) {

    float valor_hora_trabalhada, salario_mes, valor_pelo_turno = 0, valor_dependente, valor_hora_extra = 0, salario_bruto;

    valor_hora_trabalhada = valor_salario_min_enunciado/5;
    salario_mes = numero_horas_trabalhadas_enunciado * valor_hora_trabalhada;

    if (turno_trabalho_enunciado == 'N' || turno_trabalho_enunciado == 'n') {
        valor_pelo_turno = (15*salario_mes)/100;
    }

    valor_dependente = (float) 32 * numero_dependentes_enunciado;
    valor_hora_extra = ((float)qnt_horas_extra_trab_enunciado * ((valor_hora_trabalhada/2) + valor_hora_trabalhada));

    salario_bruto = salario_mes + valor_dependente + valor_hora_extra + valor_pelo_turno;

    printf("\n\nO valor da hora trabalhada: %.2f", valor_hora_trabalhada);
    printf("\nO salario do mes: %.2f", salario_mes);
    printf("\nO valor pelo turno: %.2f", valor_pelo_turno);
    printf("\nO valor do dependente: %.2f", valor_dependente);
    printf("\nO valor da hora extra: %.2f", valor_hora_extra);
    printf("\nO salario bruto: R$%.2f\n", salario_bruto);

    item_7_11(salario_bruto);
}
int item_7_11(float salario_bruto) {

    int faixa;
    float imposto_renda_tabela_retido, imposto_renda_tabela_devido, salario_liquido, gratificacao, salario_receber;

    if (salario_bruto <= 22847.76) {
        imposto_renda_tabela_retido = 0;
        faixa = 1;
    }
    else if (salario_bruto > 22847.76 && salario_bruto <= 33919.80) {
        imposto_renda_tabela_retido = salario_bruto * 7.5/100;
        faixa = 2;
    }
    else if (salario_bruto > 33919.80 && salario_bruto <= 45012.60) {
        imposto_renda_tabela_retido = salario_bruto * 15/100;
        faixa = 3;
    }
    else if (salario_bruto > 45012.60 && salario_bruto <= 55976.16) {
        imposto_renda_tabela_retido = salario_bruto * 22.5/100;
        faixa = 4;
    }
    else if (salario_bruto > 55976.16) {
        imposto_renda_tabela_retido = salario_bruto * 27.5/100;
        faixa = 5;
    }

    if (faixa == 1){
        imposto_renda_tabela_devido = imposto_renda_tabela_retido - 0;
    }
    else if (faixa == 2){
        imposto_renda_tabela_devido = imposto_renda_tabela_retido - 1713.58;
    }
    else if (faixa == 3){
        imposto_renda_tabela_devido = imposto_renda_tabela_retido - 4257.57;
    }
    else if (faixa == 4){
        imposto_renda_tabela_devido = imposto_renda_tabela_retido - 7633.51;
    }
    else if (faixa == 5){
        imposto_renda_tabela_devido = imposto_renda_tabela_retido - 10432.32;
    }

    salario_liquido = salario_bruto - imposto_renda_tabela_devido; //item IX (se o IRRF não for o salario devido, então eu n entendi)

    if (salario_liquido <= 2500){
        gratificacao = 500;
    }
    if (salario_liquido >= 2500.01 && salario_liquido <= 4000){
        gratificacao = 150;
    }
    if (salario_liquido > 4000){
        gratificacao = 100;
    }

    salario_receber = salario_liquido + gratificacao;

    printf("\n\nO imposto retido: %.2f", imposto_renda_tabela_retido);
    printf("\nO imposto devido: %.2f", imposto_renda_tabela_devido);
    printf("\nO salario liquido: %.2f", salario_liquido);
    printf("\nA gratificacao: %.2f", gratificacao);
    printf("\nO salario a receber: %.2f\n", salario_receber);
}