#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define N 2 //qntd de vezes q o programa vai rodar, tá na maioria ou todos os For(i = 0; i < N...)
//
#define QTD_PACIENTES 3
#define LEN_NOME_PACIENTE 50
//
#define QTD_MEDICOS 3
#define LEN_NOME_MEDICO 50
#define LEN_ESPECIALIDADE_MEDICO 50
//
#define QTD_HOSPITAIS 3
//internacoes
#define DATA 3 //mudar para qntd de internacoes
#define LEN_DATA_INTERNACAO 12

#define QTD_INTERNACOES 3
/*
Editar Paciente:
*************************
a. Deve-se solicitar o CPF do paciente, buscar o paciente e solicitar
a digitação do nome para alteração.
i. Caso o paciente não seja encontrado para edição, exibir
mensagem informando a situação e voltar ao menu;
*/
/*
*************************
Editar Médico:
*************************
a. Deve-se solicitar a matrícula do médico, buscar o médico e
solicitar a digitação do nome ou especialidade para alteração.
i. Caso o médico não seja encontrado para edição, exibir
mensagem informando a situação e voltar ao menu;
*/
/*
*************************
Efetuar internação do paciente:
*************************
a. Deve-se solicitar o código do hospital, buscar o hospital para
internação.
i. Caso o hospital não seja encontrado para internação, exibir
mensagem informando a situação e voltar ao menu;
b. Deve-se solicitar o CPF do paciente, buscar o paciente para
internação.
i. Caso o paciente não seja encontrado para internação,
exibir mensagem informando a situação e voltar ao menu;
c. Deve-se solicitar a matrícula do médico, buscar o médico
responsável pela internação.
i. Caso o médico não seja encontrado, exibir mensagem
informando a situação e voltar ao menu;
ii.
d. Com o código do hospital, CPF, e matrícula do médico válidos,
solicitar data de início da internação e registrar as informações
em uma estrutura.
i. Caso a quantidade registros de internações atinja o limite
máximo, exibir mensagem informando a situação e voltar
ao menu;
*/
/*
*************************
Dar alta para o paciente:
*************************
a. Deve-se solicitar o CPF do paciente, buscar a internação daquele
paciente e solicitar a digitação da data de fim da internação.
i. Caso a internação não seja encontrada para realizar alta
do paciente, exibir mensagem informando a situação e
voltar ao menu;
ii. Caso a internação esteja finalizada – paciente com alta -,
exibir mensagem informando a situação e voltar ao menu
*************************
*/
int find_indice_num_no_vetor(int vet_int[] , int len , int cur_num){

	int i;

	for(i = 0 ; i < len ; i++){

		if(vet_int[i] == cur_num){

			return i;
		}
	}
	return -1;//caso não encontre o num no vetor
}
void dar_alta(int cpf_paciente_internados[], bool paciente_teve_alta[], char datas_final_internacoes[][LEN_DATA_INTERNACAO], int indice_internar)
{
    int verifc_cpf;
    int indice_paciente_internado;

    char data_final_internacao[LEN_DATA_INTERNACAO];

    printf("\nInsira o cpf para validacao: ");
    scanf("%d", &verifc_cpf);

    printf("\nInsira a data final de internacao: ");
    scanf("\n%[^\n]s", data_final_internacao);

    indice_paciente_internado = find_indice_num_no_vetor(cpf_paciente_internados, indice_internar, verifc_cpf);

    if(indice_paciente_internado < 0)
    {
        printf("\nPaciente n internado!");

    }else{

        paciente_teve_alta = true;
        strcpy(datas_final_internacoes[indice_paciente_internado], data_final_internacao);
        printf("\nFinalizacao registrada com sucesso, data: %s", datas_final_internacoes[indice_paciente_internado]);

    }

}
int internacao_pac(char nome_paciente[][LEN_NOME_PACIENTE], int cpf_paciente[], char nome_medico[][LEN_NOME_MEDICO], int matricula_medico[], int cod_hosp[], bool paciente_teve_alta[], int indice_internar, int cpfs_pacientes_internados[], int matriculas_medicos_internaram[], int codigos_hospitais_com_internacao[], char datas_inicio_internacoes[][LEN_DATA_INTERNACAO])
{
    int verif_cod_hosp, verif_cpf_pac, verif_mat_med;
    int indice_hosp, indice_cpf, indice_mat_med;

    char data_inicio_internacao[LEN_DATA_INTERNACAO];

    printf("Insira o codigo do hosp: ");
    scanf("%d", &verif_cod_hosp);

    printf("Insira o CPF do paciente: ");
    scanf("%d", &verif_cpf_pac);

    printf("Insira mat do med: ");
    scanf("%d", &verif_mat_med);


    printf("Insira a data de inicio da internacao: ");
    scanf("\n%[^\n]s", data_inicio_internacao);


    indice_hosp = find_indice_num_no_vetor(cod_hosp, QTD_HOSPITAIS, verif_cod_hosp);
    indice_cpf = find_indice_num_no_vetor(cpf_paciente, QTD_PACIENTES, verif_cpf_pac);
    indice_mat_med = find_indice_num_no_vetor(matricula_medico, QTD_MEDICOS, verif_mat_med);

    if(indice_internar == QTD_INTERNACOES)
    {
        printf("\nQuantidade maxima de internacoes atingida!!!");

    }else if(indice_hosp < 0)
    {
        printf("\nHospital n encontrado!");

    }else if(indice_cpf < 0)
    {
        printf("\nCPF nao encontrado");

    }else if(indice_mat_med < 0)
    {
        printf("\nMatricula do medico nao cadastrado");
    }else{

        codigos_hospitais_com_internacao[indice_internar] = verif_cod_hosp;
        cpfs_pacientes_internados[indice_internar] = verif_cpf_pac;
        matriculas_medicos_internaram[indice_internar] = verif_mat_med;
        paciente_teve_alta[indice_internar] = false;

        strcpy(datas_inicio_internacoes[indice_internar], data_inicio_internacao);

        indice_internar++;

        printf("\nQntd de internacoes: %d", indice_internar);
    }

    return indice_internar;
}
void edit_medico(int matric_med[QTD_MEDICOS], char nome_med[QTD_MEDICOS][LEN_NOME_MEDICO], char especialidade[QTD_MEDICOS][LEN_ESPECIALIDADE_MEDICO])
{
    int verif_mat_med; //verificar a matricula do medico
    int opcao; //switch case

    int indice_med;

    char alterar_nome[LEN_NOME_MEDICO], alterar_espec[LEN_ESPECIALIDADE_MEDICO];

    printf("\nInsira a matricula para validacao: ");
    scanf("%d", &verif_mat_med);

    indice_med = find_indice_num_no_vetor(matric_med, QTD_MEDICOS, verif_mat_med);

    if(indice_med < 0)
    {
        printf("\nCadastro nao encontrado!!");

    }else{

        printf("\nInsira a opcao desejada: \n 1 - Alterar nome\n 2 - Alterar especialidade\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                printf("\nInsira o nome para alteracao: ");
                scanf("\n%[^\n]s", alterar_nome);

                strcpy(nome_med[indice_med], alterar_nome);
                printf("O novo nome do med: %s" ,nome_med[indice_med]);

                break;
            case 2:
                printf("\nInsira a especializacao para alteracao: ");
                scanf("\n%[^\n]s", alterar_espec);

                strcpy(especialidade[indice_med], alterar_espec);

                printf("A nova espec: %s", especialidade[indice_med]);
                break;
        }
    }
}
void edit_paciente(int cpf_pac[N], char nome_pac[QTD_PACIENTES][LEN_NOME_PACIENTE])
{
    int verif_cpf_pa; //verificar cpf do paciente

    char alterar_nome[LEN_NOME_PACIENTE];
    int indice_cpf;


    printf("\nInsira o cpf da conta para validacao: ");
    scanf("%d", &verif_cpf_pa);
    printf("Insira o nome para alteracao: ");
    scanf("\n%[^\n]s", alterar_nome);


    indice_cpf = find_indice_num_no_vetor(cpf_pac, QTD_PACIENTES, verif_cpf_pa);

    if(indice_cpf < 0)
    {
        printf("\nCadastro nao encontrado\n");

    }else{

        strcpy(nome_pac[indice_cpf], alterar_nome);

    }

    //printf("O novo nome: %s", nome_pac[indice_cpf]);
}
int main()
{
    int i;

    //******************

    int cpf[N], opcao;
    char nome[QTD_PACIENTES][LEN_NOME_PACIENTE];

	for(i = 0; i < N; i++)
    {
        printf("Insira o cpf: ");
        scanf("%d", &cpf[i]);
        printf("Insira um nome: ");
        scanf("\n%[^\n]s", nome[i]);

        printf("\n");
    }
     edit_paciente(cpf, nome);

    //******************

    int matricula_medico[QTD_MEDICOS];
    char nome_medico[QTD_MEDICOS][LEN_NOME_MEDICO], especialidade_med[QTD_MEDICOS][LEN_ESPECIALIDADE_MEDICO];

    for(i = 0; i < N; i++)
    {
        printf("\nInsira o nome do medico: ");
        scanf("\n%[^\n]s", nome_medico[i]);
        printf("Insira a matricula do medico: ");
        scanf("%d", &matricula_medico[i]);
        printf("Insira a especialidade desse medico: ");
        scanf("\n%[^\n]s", especialidade_med[i]);
    }

    edit_medico(matricula_medico, nome_medico, especialidade_med);

    //******************

    int cod_hosp[QTD_HOSPITAIS];

    for(i = 0; i < N; i++)
    {
        printf("\nInsira o cod hosp: ");
        scanf("%d", &cod_hosp[i]);
    }

    int indice_internar = 0;
	int cpfs_pacientes_internados[QTD_INTERNACOES];
	int matriculas_medicos_internaram[QTD_INTERNACOES];
	int codigos_hospitais_com_internacao[QTD_INTERNACOES];
	char datas_inicio_internacoes[QTD_INTERNACOES][LEN_DATA_INTERNACAO];
	bool paciente_teve_alta[QTD_INTERNACOES];				//inicializar como falso na hora de internar um paciente , e colocar como verdadeiro ao dar alta para alguém
	char datas_final_internacoes[QTD_INTERNACOES][LEN_DATA_INTERNACAO];

    indice_internar = internacao_pac(nome, cpf, nome_medico, matricula_medico, cod_hosp, paciente_teve_alta, indice_internar, cpfs_pacientes_internados, matriculas_medicos_internaram, codigos_hospitais_com_internacao, datas_inicio_internacoes);

    dar_alta(cpfs_pacientes_internados, paciente_teve_alta, datas_final_internacoes, indice_internar);

    return 0;
}
