#include<stdio.h>
#include<stdbool.h>
#include<string.h>

#define QTD_PACIENTES 3 // trocar para 200 depois do teste
#define LEN_NOME_PACIENTE 50

#define QTD_HOSPITAIS 3 // trocar para 10 depois do teste
#define LEN_NOME_HOSPITAL 50

#define QTD_MEDICOS 3 // trocar para 20 depois do teste
#define QTD_VINCULOS_MEDICO 3
#define LEN_NOME_MEDICO 50
#define LEN_ESPECIALIDADE_MEDICO 50


#define QTD_INTERNACOES 3 //trocar para 100 depois do teste
#define LEN_DATA_INTERNACAO 12


int find_indice_do_num_no_vetor(int vet_int[] , int len , int cur_num);

bool elementos_vet1_contidos_em_vet2(int vet_1[] , int len_1 , int vet_2[] , int len_2 );

bool vetor_com_num_repetido(int vet_int[] , int len );

int cadastrar_paciente(char nomes_pacientes[][LEN_NOME_PACIENTE] , int cpfs_pacientes[] , int indice_cadastrar_paciente);

int cadastrar_hospital(char nome_hospitais[][LEN_NOME_PACIENTE] , int codigos_hospitais[] , int indice_cadastrar_hospital);

int cadastrar_medico(char nomes_medicos[][LEN_NOME_MEDICO] , char especialidades_medicos[][LEN_ESPECIALIDADE_MEDICO] , int matriculas_medicos[] , int qtd_hospitais_vinculados[] , 
		     int cod_hospitais_vinculados[][QTD_VINCULOS_MEDICO] , int codigos_hospitais[] , int qtd_hospitais_cadastrados,  int indice_cadastrar_medico);


void editar_paciente(int cpfs_pacientes[], char nomes_pacientes[][LEN_NOME_PACIENTE] , int qtd_pacientes_cadastrados);

void editar_medico(int matriculas_medicos[], char nomes_medicos[][LEN_NOME_MEDICO], char especialidades_medicos[][LEN_ESPECIALIDADE_MEDICO] , int qtd_medicos_cadastrados);

int internar_paciente(int indice_cadastrar_internacao , int qtd_hospitais_cadastrados , int qtd_pacientes_cadastrados , int qtd_medicos_cadastrados ,  
		      int matriculas_medicos[] ,  int codigos_hospitais[] , int cpfs_pacientes[] , int cpfs_pacientes_internados[] , int matriculas_medicos_internaram[] , 
		      int codigos_hospitais_com_internacao[] , bool paciente_teve_alta[] , char datas_inicio_internacoes[][LEN_DATA_INTERNACAO] );



void dar_alta(int cpfs_pacientes_internados[], bool paciente_teve_alta[], char datas_final_internacoes[][LEN_DATA_INTERNACAO], int qtd_internacoes_cadastradas);

void mostrar_paciente_por_data_de_internacao(char datas_inicio_internacoes[][LEN_DATA_INTERNACAO] , char nomes_pacientes[][LEN_NOME_PACIENTE] , int cpfs_pacientes[] , 
                                             int cpfs_pacientes_internados[] , int qtd_pacientes_cadastrados , int  qtd_internacoes_cadastradas);


void mostrar_medico_por_paciente(int matriculas_medicos_internaram[] , int cpfs_pacientes_internados[] , int qtd_internacoes_cadastradas , int qtd_medicos_cadastrados , 
                                 char nomes_medicos[][LEN_NOME_MEDICO] , char especialidades_medicos[][LEN_ESPECIALIDADE_MEDICO] , int matriculas_medicos[]);



void mostrar_paciente_por_medico(int qtd_internacoes_cadastradas , int matriculas_medicos_internaram[] , int qtd_pacientes_cadastrados , char nomes_pacientes[][LEN_NOME_PACIENTE] , 
				 int cpfs_pacientes[] , int cpfs_pacientes_internados[] ,  char datas_inicio_internacoes[][LEN_DATA_INTERNACAO] ,
				 char datas_final_internacoes[][LEN_DATA_INTERNACAO] , bool paciente_teve_alta[]);


int armaz_matriculas_meds_vinculados_ao_hospital(int matriculas_med_vinculados_hospital[] , int cur_codigo_hospital , int qtd_hospitais_vinculados[] ,
                                             int cod_hospitais_vinculados[][QTD_VINCULOS_MEDICO] ,  int matriculas_medicos[] ,  int qtd_medicos_cadastrados);


int armazenar_pacientes_internados_pelo_medico(int cpfs_pacientes_intern_pelo_medico[] , int cur_matricula_medico , int qtd_internacoes_cadastradas ,  
                                               int matriculas_medicos_internaram[] , int cpfs_pacientes_internados[] );


void relatorio_hospital(char nomes_hospitais[][LEN_NOME_HOSPITAL] , int qtd_medicos_cadastrados  , int qtd_hospitais_cadastrados  , int qtd_pacientes_cadastrados ,
	                int cod_hospitais_vinculados[][QTD_VINCULOS_MEDICO] , int codigos_hospitais[] ,  char nomes_medicos[][LEN_NOME_MEDICO] , int cpfs_pacientes[] , 
	                int qtd_internacoes_cadastradas , int matriculas_medicos_internaram[] , int qtd_hospitais_vinculados[] , int cpfs_pacientes_internados[] , 
	                char nomes_pacientes[][LEN_NOME_PACIENTE] , int matriculas_medicos[] );







void print_pacientes_cadastrados(int len_nome_paciente , char nomes_pacientes[][len_nome_paciente] , int cpfs_pacientes[] , int qtd_pacientes_cadastrados){


	int i;
	for(i = 0 ; i < qtd_pacientes_cadastrados ; i++){
	
		printf("\n*************\n");
		printf("\nPaciente :");
		printf("\nNome : %s" , nomes_pacientes[i]);
		printf("\nCpf : %d" , cpfs_pacientes[i]);
		printf("\n*************\n");
	
	
	}


}

void print_hospitais_cadastrados(int len_nome_hospital , char nomes_hospitais[][len_nome_hospital] , int codigos_hospitais[] , int qtd_hospitais_cadastrados){

	int i;
	
	for(i = 0 ; i < qtd_hospitais_cadastrados ; i++){
	
		
		printf("\n*************\n");
		printf("\nHospital :");
		printf("\nNome : %s" , nomes_hospitais[i]);
		printf("\nCodigo : %d" , codigos_hospitais[i]);
		printf("\n*************\n");
	
	
	}


}

void print_medicos_cadastrados(int len_nome_medico , int len_especialidade_medico , int qtd_vinculos_medico , char nomes_medicos[][len_nome_medico] , 
                               char especialidades_medicos[][len_especialidade_medico] , int matriculas_medicos[] , int qtd_hospitais_vinculados[] , 
                               int cod_hospitais_vinculados[][qtd_vinculos_medico], int indice_cadastrar_medico)
{

	int i , j;

	for(i = 0 ; i < indice_cadastrar_medico ; i ++){
	
		printf("\n*************\n");
		printf("\nMedico :");
		printf("\nNome : %s" , nomes_medicos[i]);
		printf("\nMatricula : %d" , matriculas_medicos[i]);
		printf("\nEspecialidade : %s" , especialidades_medicos[i]);
		
		printf("\nCodigo hospitais vinculados :");
		for(j = 0 ; j < qtd_hospitais_vinculados[i] ; j++){
			
			printf(" %d " , cod_hospitais_vinculados[i][j]);
		
		}
		
		printf("\n*************\n");
	}



}



int main(){

	bool running;
	int opcao;
	
	//var's. paciente
	int indice_cadastrar_paciente;
	char nomes_pacientes[QTD_PACIENTES][LEN_NOME_PACIENTE];
	int cpfs_pacientes[QTD_PACIENTES];
	
	//var's. hospitais
	int indice_cadastrar_hospital;
	char nomes_hospitais[QTD_HOSPITAIS][LEN_NOME_HOSPITAL];
	int codigos_hospitais[QTD_HOSPITAIS];
	
	//vas's. medicos
	int indice_cadastrar_medico;
	char nomes_medicos[QTD_MEDICOS][LEN_NOME_MEDICO];
	int matriculas_medicos[QTD_MEDICOS];
	char especialidades_medicos[QTD_MEDICOS][LEN_ESPECIALIDADE_MEDICO];
	int qtd_hospitais_vinculados[QTD_MEDICOS];
	int cod_hospitais_vinculados[QTD_MEDICOS][QTD_VINCULOS_MEDICO];
	
	
	//var's. para internações
	int indice_cadastrar_internacao;
	int cpfs_pacientes_internados[QTD_INTERNACOES];
	int matriculas_medicos_internaram[QTD_INTERNACOES];
	int codigos_hospitais_com_internacao[QTD_INTERNACOES];
	char datas_inicio_internacoes[QTD_INTERNACOES][LEN_DATA_INTERNACAO];
	bool paciente_teve_alta[QTD_INTERNACOES];				//inicializar como falso na hora de internar um paciente , e colocar como verdadeiro ao dar alta para alguém
	char datas_final_internacoes[QTD_INTERNACOES][LEN_DATA_INTERNACAO];
	
	
	running = true;
	indice_cadastrar_paciente = 0;
	indice_cadastrar_hospital = 0;
	indice_cadastrar_medico = 0;
	indice_cadastrar_internacao = 0;
	do{
	
		printf("\nMenu : \n");
		printf("\n1 - Cadastrar paciente.");
		printf("\n2 - Cadastrar hospital.");
		printf("\n3 - Cadastrar medico.");
		printf("\n4 - Editar paciente");
		printf("\n5 - Editar medico");
		printf("\n6 - Internar paciente");
		printf("\n7 - Dar alta");
		printf("\n8 - Relatorios");
		printf("\n9 - Print info.");
		printf("\n10 - Sair.");
		printf("\n\nDigite uma opcao : ");
		scanf("%d" , &opcao);
		
		
		switch(opcao){
		
			case 1:
			
				indice_cadastrar_paciente = cadastrar_paciente(nomes_pacientes , cpfs_pacientes , indice_cadastrar_paciente);
				break;
		
			case 2:
			
				indice_cadastrar_hospital = cadastrar_hospital(nomes_hospitais , codigos_hospitais, indice_cadastrar_hospital);
				break;
			
			
			case 3:
				
				indice_cadastrar_medico = cadastrar_medico(nomes_medicos, especialidades_medicos, matriculas_medicos , qtd_hospitais_vinculados ,  cod_hospitais_vinculados ,
		                                                           codigos_hospitais , indice_cadastrar_hospital ,  indice_cadastrar_medico);
				break;
			
			
			case 4:
				
				editar_paciente(cpfs_pacientes, nomes_pacientes , indice_cadastrar_paciente);
				break;
				
			case 5:
			
				
				editar_medico(matriculas_medicos , nomes_medicos , especialidades_medicos , indice_cadastrar_medico);
				break;
				
			case 6:
				
				indice_cadastrar_internacao = internar_paciente(indice_cadastrar_internacao , indice_cadastrar_hospital , indice_cadastrar_paciente , indice_cadastrar_medico ,  
		      				                                matriculas_medicos ,  codigos_hospitais , cpfs_pacientes , cpfs_pacientes_internados ,  
		      				                                matriculas_medicos_internaram , codigos_hospitais_com_internacao , paciente_teve_alta , datas_inicio_internacoes );
				
				break;
				
			case 7:
				
				dar_alta(cpfs_pacientes_internados, paciente_teve_alta, datas_final_internacoes , indice_cadastrar_internacao);
				
				break;
				
			case 8:
				
				
				mostrar_paciente_por_data_de_internacao(datas_inicio_internacoes, nomes_pacientes ,    cpfs_pacientes , cpfs_pacientes_internados , 
                                                                        indice_cadastrar_paciente , indice_cadastrar_internacao);
				
				
				
				
				mostrar_medico_por_paciente(matriculas_medicos_internaram , cpfs_pacientes_internados , indice_cadastrar_internacao , indice_cadastrar_medico , 
                                                            nomes_medicos , especialidades_medicos , matriculas_medicos);
				
				
				
				
				
				mostrar_paciente_por_medico(indice_cadastrar_internacao , matriculas_medicos_internaram , indice_cadastrar_paciente , nomes_pacientes , 
				                            cpfs_pacientes , cpfs_pacientes_internados ,  datas_inicio_internacoes ,  datas_final_internacoes , paciente_teve_alta);
				                                
				
				
				
				
				
				relatorio_hospital(nomes_hospitais, indice_cadastrar_medico  , indice_cadastrar_hospital  , indice_cadastrar_paciente ,
	                                           cod_hospitais_vinculados, codigos_hospitais ,  nomes_medicos , cpfs_pacientes , 
	                                           indice_cadastrar_internacao , matriculas_medicos_internaram , qtd_hospitais_vinculados , cpfs_pacientes_internados , 
	                                           nomes_pacientes , matriculas_medicos);
				
				
				
				break;
			
			
			case 9:
				
				print_pacientes_cadastrados(LEN_NOME_PACIENTE , nomes_pacientes , cpfs_pacientes , indice_cadastrar_paciente);
				print_hospitais_cadastrados(LEN_NOME_HOSPITAL , nomes_hospitais , codigos_hospitais , indice_cadastrar_hospital);
				
				print_medicos_cadastrados(LEN_NOME_MEDICO , LEN_ESPECIALIDADE_MEDICO , QTD_VINCULOS_MEDICO , nomes_medicos , especialidades_medicos , matriculas_medicos , 
				                          qtd_hospitais_vinculados , cod_hospitais_vinculados , indice_cadastrar_medico);
				
				break;
			
			case 10:
				printf("\nSaindo ...\n");
				running = false;
				break;
			
			default:
				printf("\n\nOpcao Invalida !!!\n\n");
				break;
		}
	
	
	
	}while(running);


	return 0;
}

int find_indice_do_num_no_vetor(int vet_int[] , int len , int cur_num){

	
	int i;

	
	for(i = 0 ; i < len ; i++){
	
		
		if(vet_int[i] == cur_num){
		
			return i;
		
		}

	}


	return -1;//caso não encontre o num no vetor
}





bool elementos_vet1_contidos_em_vet2(int vet_1[] , int len_1 , int vet_2[] , int len_2 ){

	int i , j;
	
	bool num_de_vet1_em_vet2;
	
	
	
	for(i = 0 ; i < len_1 ; i++){
	
		num_de_vet1_em_vet2 = false;
		
		for(j = 0 ; j < len_2 ; j++){
		
		
			if(vet_1[i] == vet_2[j]){
			
				num_de_vet1_em_vet2 = true;
				
			
			}
		
		}
		
		
		if(num_de_vet1_em_vet2 == false){
			return false;
		}
	
	}
		
	return true;


}

bool vetor_com_num_repetido(int vet_int[] , int len ){

	int i , j;
	
	for(i = 0 ; i < len ; i++){
	
		for(j = (i + 1) ; j < len ; j++){
		
			if(vet_int[i] == vet_int[j]){
				return true;
			}
		
		}
	
	
	}
	
	return false;


}



int cadastrar_paciente(char nomes_pacientes[][LEN_NOME_PACIENTE] , int cpfs_pacientes[] , int indice_cadastrar_paciente){

	
	char cur_nome[LEN_NOME_PACIENTE];
	int cur_cpf;
	
	
	
	printf("\nDigite o CPF do paciente para ser cadastrado:");
	scanf("%d" , &cur_cpf);

	printf("\nDigite o nome do paciente para ser cadastrado:");
	scanf("\n%[^\n]s" , cur_nome);
	
	
	
	//se já tenho o máximo de pacientes cadastrados
	if(indice_cadastrar_paciente == QTD_PACIENTES){
	
		printf("\n\nERRO : Quantidade maxima de pacientes cadastrados ja atingida !!!\n\n");
		
	}else if(find_indice_do_num_no_vetor(cpfs_pacientes , indice_cadastrar_paciente , cur_cpf) >= 0){//se esse paciente já foi registrado(verifica pelo cpf)
	
		
		printf("\n\nERRO : Paciente ja cadastrado !!!\n\n");
		
		
	}else{//cadastrando paciente
	
	
		strcpy(nomes_pacientes[indice_cadastrar_paciente] , cur_nome);
		
		cpfs_pacientes[indice_cadastrar_paciente] = cur_cpf;
		
		indice_cadastrar_paciente++;

	
	
	}
	
	
	return indice_cadastrar_paciente;
	
	
}




int cadastrar_hospital(char nome_hospitais[][LEN_NOME_HOSPITAL] , int codigos_hospitais[] , int indice_cadastrar_hospital){

	

	char cur_nome[LEN_NOME_HOSPITAL];
	int cur_codigo;

	
	printf("\nDigite o codigo do hospital :");
	scanf("%d" , &cur_codigo);
	
	printf("\nDigite o nome do hospital :");
	scanf("\n%[^\n]s" , cur_nome);
	
	
	//se já tenho o máximo de hospitais cadastrados
	if(indice_cadastrar_hospital == QTD_HOSPITAIS){
	
		printf("\n\nERRO : Quantidade maxima de hospitais cadastrados ja atingida !!!\n\n");
		
		
	}else if(find_indice_do_num_no_vetor(codigos_hospitais , indice_cadastrar_hospital , cur_codigo) >= 0 ){//se o hospital digitado já estiver cadastrado(verifica pelo código)
	
	
		printf("\n\nERRO : Hospital ja cadastrado !!!\n\n");
		
	
	}else{//cadastrando hospital
	
		
		strcpy(nome_hospitais[indice_cadastrar_hospital] , cur_nome );
		
		codigos_hospitais[indice_cadastrar_hospital] = cur_codigo;
		
		indice_cadastrar_hospital++;
	
	
	}





	return indice_cadastrar_hospital;

}




int cadastrar_medico(char nomes_medicos[][LEN_NOME_MEDICO] , char especialidades_medicos[][LEN_ESPECIALIDADE_MEDICO] , int matriculas_medicos[] , int qtd_hospitais_vinculados[] , 
		     int cod_hospitais_vinculados[][QTD_VINCULOS_MEDICO] , int codigos_hospitais[] , int qtd_hospitais_cadastrados,  int indice_cadastrar_medico)
{
	
	int i;
	
	char cur_nome[LEN_NOME_MEDICO];
	
	char cur_especialidade[LEN_ESPECIALIDADE_MEDICO];
	
	int cur_matricula;
	
	int cur_qtd_vinculos;
	
	int cur_codigos_vinculos[QTD_VINCULOS_MEDICO];
	
	
	
	printf("\nDigite o numero de matricula do medico : ");
	scanf("%d" , &cur_matricula);
	
	printf("\nDigite o nome do medico :");
	scanf("\n%[^\n]s" , cur_nome);
	
	printf("\nDigite a especialidade do medico :");
	scanf("\n%[^\n]s" , cur_especialidade);
	
	do{
		printf("\nDigite a quantidade de hospitais vinculados(min 1 - max 3) :");
		scanf("%d" , &cur_qtd_vinculos);
	
	}while(cur_qtd_vinculos < 1 || cur_qtd_vinculos > 3);//tem que ter no min 1 vinculo e no max. 3

	
	
	//lendo o codigo dos hospitais no qual o médico está vinculado
	for(i = 0 ; i < cur_qtd_vinculos ; i++){
	
		printf("\nDigite os codigos dos hospitais para vincular o medico [%d] : " , i + 1);
		scanf("%d" , &cur_codigos_vinculos[i]);
		
			
	}
		
		
	//se já tenho o máximo de medicos cadastrados
	if(indice_cadastrar_medico == QTD_MEDICOS){
	
		printf("\n\nERRO : Quantidade maxima de medicos cadastrados ja atingida !!!\n\n");
		
	
	}else if( elementos_vet1_contidos_em_vet2(cur_codigos_vinculos , cur_qtd_vinculos , codigos_hospitais , qtd_hospitais_cadastrados) == false ){//caso os códigos do hospitals digitados
	                                                                                                                                              //não estejam cadastrados
	
		
		printf("\nERRO : Codigo de hospital nao cadastrado !!!\n");
		
	
		
	}else if(vetor_com_num_repetido(cur_codigos_vinculos , cur_qtd_vinculos )){//caso tente vincular um médico duas vezes no mesmo hospital
	
		
		printf("\nERRO : Um medico nao pode estar vinculado ao mesmo hospital mais de uma vez !!!\n");
		
	
	}else if(find_indice_do_num_no_vetor(matriculas_medicos, indice_cadastrar_medico , cur_matricula) >= 0){//se o médico digitado já estiver cadastrado(verifica pelo n° de matrícula)
	
		printf("\n\nEROO : Medico já cadastrado !!!\n\n");
	
		
	}else{//cadastrando médico
	
	
		
	
		matriculas_medicos[indice_cadastrar_medico] = cur_matricula;
		
		strcpy(nomes_medicos[indice_cadastrar_medico] , cur_nome);
		
		strcpy(especialidades_medicos[indice_cadastrar_medico] , cur_especialidade);
		
		qtd_hospitais_vinculados[indice_cadastrar_medico] = cur_qtd_vinculos;
		
		//cadastando os códigos dos hospitais vinculados ao médico
		for(i = 0 ; i < cur_qtd_vinculos ; i++){
		
			cod_hospitais_vinculados[indice_cadastrar_medico][i] = cur_codigos_vinculos[i];
		
		}
		
		indice_cadastrar_medico++;
	
		
	}
	

	return indice_cadastrar_medico;


}


void editar_paciente(int cpfs_pacientes[], char nomes_pacientes[][LEN_NOME_PACIENTE] , int qtd_pacientes_cadastrados){

	int cur_cpf_paciente;

	char novo_nome_paciente[LEN_NOME_PACIENTE];
	
	int indice_paciente;

	printf("\nInsira o cpf do paciente : ");
	scanf("%d", &cur_cpf_paciente);
	printf("Insira o novo nome do paciente: ");
	scanf("\n%[^\n]s", novo_nome_paciente);


	indice_paciente = find_indice_do_num_no_vetor(cpfs_pacientes, qtd_pacientes_cadastrados , cur_cpf_paciente);

	if(indice_paciente < 0){
	
		printf("\n\nERRO : Paciente nao encontrado !!!\n\n");

	}else{
		
		strcpy(nomes_pacientes[indice_paciente], novo_nome_paciente);

	}

	
}

void editar_medico(int matriculas_medicos[], char nomes_medicos[][LEN_NOME_MEDICO], char especialidades_medicos[][LEN_ESPECIALIDADE_MEDICO] , int qtd_medicos_cadastrados)
{
	int cur_matricula_medico; 

	int opcao;

	int indice_medico;

	char novo_nome_medico[LEN_NOME_MEDICO], nova_especialidade_medico[LEN_ESPECIALIDADE_MEDICO];

	printf("\nInsira a matricula para validacao: ");
	scanf("%d", &cur_matricula_medico);


	indice_medico = find_indice_do_num_no_vetor(matriculas_medicos, qtd_medicos_cadastrados , cur_matricula_medico);

	if(indice_medico < 0)
	{
		printf("\nCadastro nao encontrado!!");

	}else{

		printf("\n\n 1 - Alterar nome\n 2 - Alterar especialidade\n\nInsira a opcao desejada: ");
		scanf("%d", &opcao);
		
		switch (opcao){
		
			case 1:
				printf("\nInsira o nome para alteracao: ");
				scanf("\n%[^\n]s", novo_nome_medico);

				strcpy(nomes_medicos[indice_medico], novo_nome_medico);

				break;
				
			case 2:
				printf("\nInsira a especializacao para alteracao: ");
				scanf("\n%[^\n]s", nova_especialidade_medico);

				strcpy(especialidades_medicos[indice_medico], nova_especialidade_medico);

				break;
			
			default:
			
				printf("\n\nERRO : opcao invalida !!!\n\n");
			
		
		}
		
		
	}
}



int internar_paciente(int indice_cadastrar_internacao , int qtd_hospitais_cadastrados , int qtd_pacientes_cadastrados , int qtd_medicos_cadastrados ,  
		      int matriculas_medicos[] ,  int codigos_hospitais[] , int cpfs_pacientes[] , int cpfs_pacientes_internados[] , int matriculas_medicos_internaram[] , 
		      int codigos_hospitais_com_internacao[] , bool paciente_teve_alta[] , char datas_inicio_internacoes[][LEN_DATA_INTERNACAO] )
{

	int cur_codigo_hospital, cur_cpf_paciente, cur_matricula_medico;
	int indice_hospital, indice_paciente, indice_medico;

	char cur_data_inicio_internacao[LEN_DATA_INTERNACAO];

	printf("Insira o codigo do hosp: ");
	scanf("%d", &cur_codigo_hospital);

	printf("Insira o CPF do paciente: ");
	scanf("%d", &cur_cpf_paciente);

	printf("Insira mat do med: ");
	scanf("%d", &cur_matricula_medico);


	printf("Insira a data de inicio da internacao: ");
	scanf("\n%[^\n]s", cur_data_inicio_internacao);


	indice_hospital = find_indice_do_num_no_vetor(codigos_hospitais, qtd_hospitais_cadastrados , cur_codigo_hospital);
	
	indice_paciente = find_indice_do_num_no_vetor(cpfs_pacientes, qtd_pacientes_cadastrados , cur_cpf_paciente);
	
	indice_medico = find_indice_do_num_no_vetor(matriculas_medicos, qtd_medicos_cadastrados , cur_matricula_medico);
	

	if(indice_cadastrar_internacao == QTD_INTERNACOES){
	
		printf("\n\nERRO : Quantidade maxima de internacoes ja atingida!!!\n\n");

	}else if(indice_hospital < 0){
	
		printf("\n\nERRO : Hospital nao encontrado!\n\n");

	}else if(indice_paciente < 0){
	
		printf("\n\nERRO : paciente nao encontrado !\n\n");

	}else if(indice_medico < 0){
	
		printf("\n\nERRO : medico nao cadastrado! \n\n");
		
	}else{//cadastrando internação do paciente

		codigos_hospitais_com_internacao[indice_cadastrar_internacao] = cur_codigo_hospital;
		
		cpfs_pacientes_internados[indice_cadastrar_internacao] = cur_cpf_paciente;
		
		matriculas_medicos_internaram[indice_cadastrar_internacao] = cur_matricula_medico;
		
		paciente_teve_alta[indice_cadastrar_internacao] = false;

		strcpy(datas_inicio_internacoes[indice_cadastrar_internacao], cur_data_inicio_internacao);

		indice_cadastrar_internacao++;

		
	}

	return indice_cadastrar_internacao;
}



void dar_alta(int cpfs_pacientes_internados[], bool paciente_teve_alta[], char datas_final_internacoes[][LEN_DATA_INTERNACAO], int qtd_internacoes_cadastradas){

	int cur_cpf_paciente_internado;
	int indice_paciente_internado;

	char cur_data_final_internacao[LEN_DATA_INTERNACAO];

	printf("\nInsira o cpf para validacao: ");
	scanf("%d", &cur_cpf_paciente_internado);

	printf("\nInsira a data final de internacao: ");
	scanf("\n%[^\n]s", cur_data_final_internacao);

	indice_paciente_internado = find_indice_do_num_no_vetor(cpfs_pacientes_internados, qtd_internacoes_cadastradas, cur_cpf_paciente_internado);

	if(indice_paciente_internado < 0){

		printf("\n\nERRO : paciente nao encontrado!\n\n");

	}else{

		paciente_teve_alta[indice_paciente_internado] = true;

		strcpy(datas_final_internacoes[indice_paciente_internado], cur_data_final_internacao);

		printf("\n\nPaciente Recebeu Alta !!!\n\n");

	}

}




void mostrar_paciente_por_data_de_internacao(char datas_inicio_internacoes[][LEN_DATA_INTERNACAO] , char nomes_pacientes[][LEN_NOME_PACIENTE] ,
                                             int cpfs_pacientes[] , int cpfs_pacientes_internados[] , int qtd_pacientes_cadastrados , int  qtd_internacoes_cadastradas)
                                     
{

	int i ;
	
	char cur_data_internacao[LEN_DATA_INTERNACAO];
	
	int cur_cpf_paciente_internado;
	
	int indice_paciente;
	


	printf("\nDigite uma data para saber os pacientes internados na mesma : ");
	scanf("\n%[^\n]s" , cur_data_internacao);

	
	
	//percorrendo as internações
	for(i = 0 ; i < qtd_internacoes_cadastradas ; i++){
	
		//quando a data digitada e a data de internação são iguais
		if(strcmp(datas_inicio_internacoes[i] , cur_data_internacao) == 0){
		
			
			cur_cpf_paciente_internado = cpfs_pacientes_internados[i];
		
			//retornar o indice do paciente cadastrado com base no cpf de internação
			indice_paciente =  find_indice_do_num_no_vetor(cpfs_pacientes , qtd_pacientes_cadastrados , cur_cpf_paciente_internado);
			
			
			
			printf("\n*************");
			printf("\nPaciente :");
			printf("\nCpf : %d" , cur_cpf_paciente_internado);
			printf("\nNome : %s" , nomes_pacientes[indice_paciente]);
			printf("\n*************\n");
				
		
		}
	
	
	}
	


}


void mostrar_medico_por_paciente(int matriculas_medicos_internaram[] , int cpfs_pacientes_internados[] , int qtd_internacoes_cadastradas , int qtd_medicos_cadastrados , 
                                 char nomes_medicos[][LEN_NOME_MEDICO] , char especialidades_medicos[][LEN_ESPECIALIDADE_MEDICO] , int matriculas_medicos[])
{



	int i , j ;

	int cur_cpf_paciente;
	
	int cur_matricula_medico_que_internou_paciente;
	
	int indice_medico;
	
	
	
	printf("\nDigite o cpf do paciente para saber os medicos que o internaram :");
	scanf("%d" , &cur_cpf_paciente);
	
	
	
	//percorrendo as internações
	for(i = 0 ; i < qtd_internacoes_cadastradas ; i++){
	
		//quando o cpf digitado for igual ao do paciente internado
		if(cpfs_pacientes_internados[i] == cur_cpf_paciente){
		
			cur_matricula_medico_que_internou_paciente = matriculas_medicos_internaram[i];
			
			//retorna o indice do médico cadastrado com base no numero de matricula de internação
			indice_medico =  find_indice_do_num_no_vetor(matriculas_medicos , qtd_medicos_cadastrados , cur_matricula_medico_que_internou_paciente);
			
			
		
			printf("\n*************");
			printf("\nMedico :");
			printf("\nNome : %s" , nomes_medicos[indice_medico]);
			printf("\nMatricula : %d" , cur_matricula_medico_que_internou_paciente);
			printf("\nEspecialidade : %s" , especialidades_medicos[indice_medico]);
			printf("\n*************\n");
		
		}
	
	
	
	}
	
	

}




void mostrar_paciente_por_medico(int qtd_internacoes_cadastradas , int matriculas_medicos_internaram[] , int qtd_pacientes_cadastrados , char nomes_pacientes[][LEN_NOME_PACIENTE] , 
				 int cpfs_pacientes[] , int cpfs_pacientes_internados[] ,  char datas_inicio_internacoes[][LEN_DATA_INTERNACAO] ,
				 char datas_final_internacoes[][LEN_DATA_INTERNACAO] , bool paciente_teve_alta[])
{

	int i , j;

	
	int cur_matricula_medico;

	
	int cur_cpf_paciente_internado;
	
	int indice_paciente;
	
	printf("\nDigite o matricula do medico para saber os pacientes que ele internou :");
	scanf("%d" , &cur_matricula_medico);
	
	
	//percorrendo as internações
	for(i = 0 ; i < qtd_internacoes_cadastradas ; i++){
	
		//quando o matricila digitada for igual ao do médico que internou o paciente
		if(matriculas_medicos_internaram[i] == cur_matricula_medico){
		
		
			cur_cpf_paciente_internado = cpfs_pacientes_internados[i];
		
			////retorna o indice do paciente cadastrado com base no cpf de internação
			indice_paciente =  find_indice_do_num_no_vetor(cpfs_pacientes , qtd_pacientes_cadastrados , cur_cpf_paciente_internado);
			
			
			printf("\n*************");
			printf("\nPaciente :");
			printf("\nNome : %s" , nomes_pacientes[indice_paciente]);
			printf("\nCpf : %d" , cur_cpf_paciente_internado);
			
			printf("\nData internacao : %s" , datas_inicio_internacoes[i]);
	
			if(paciente_teve_alta[i]){
			
				printf("\nData da alta : %s " , datas_final_internacoes[i]);
			
			}
	
	
			printf("\n*************\n");
				
		}
	
	
	}
	
	

}


int armaz_matriculas_meds_vinculados_ao_hospital(int matriculas_med_vinculados_hospital[] , int cur_codigo_hospital , int qtd_hospitais_vinculados[] ,
                                                 int cod_hospitais_vinculados[][QTD_VINCULOS_MEDICO] ,  int matriculas_medicos[] ,  int qtd_medicos_cadastrados)
                                               
{
	int i , j;

	int qtd_matriculas_armazenadas;
	
	qtd_matriculas_armazenadas = 0;
	
	//percorrendo medicos cadastrados
	for( i = 0 ; i < qtd_medicos_cadastrados ; i++){
		
		//percorrendo hospitais vinculados ao medico
		for(j = 0 ; j < qtd_hospitais_vinculados[i] ; j++){
			
			
			if(cod_hospitais_vinculados[i][j] == cur_codigo_hospital){
			
				matriculas_med_vinculados_hospital[qtd_matriculas_armazenadas] = matriculas_medicos[i];
				qtd_matriculas_armazenadas++;
			
			}
		
		}
	
	}
	
	return qtd_matriculas_armazenadas;

}


int armazenar_pacientes_internados_pelo_medico(int cpfs_pacientes_intern_pelo_medico[] , int cur_matricula_medico , int qtd_internacoes_cadastradas ,  
                                               int matriculas_medicos_internaram[] , int cpfs_pacientes_internados[] )
{

	
	int i;
	
	int qtd_cpfs_armazenados;
	
	qtd_cpfs_armazenados = 0;
	
	//percorrendo internações
	for(i = 0 ; i < qtd_internacoes_cadastradas ; i++){

		if(matriculas_medicos_internaram[i] == cur_matricula_medico){
			
			
			cpfs_pacientes_intern_pelo_medico[qtd_cpfs_armazenados] = cpfs_pacientes_internados[i];
			qtd_cpfs_armazenados++;
		}

	}


	return qtd_cpfs_armazenados;

}




void relatorio_hospital(char nomes_hospitais[][LEN_NOME_HOSPITAL] , int qtd_medicos_cadastrados  , int qtd_hospitais_cadastrados  , int qtd_pacientes_cadastrados ,
	                int cod_hospitais_vinculados[][QTD_VINCULOS_MEDICO] , int codigos_hospitais[] ,  char nomes_medicos[][LEN_NOME_MEDICO] , int cpfs_pacientes[] , 
	                int qtd_internacoes_cadastradas , int matriculas_medicos_internaram[] , int qtd_hospitais_vinculados[] , int cpfs_pacientes_internados[] , 
	                char nomes_pacientes[][LEN_NOME_PACIENTE] , int matriculas_medicos[] )
{
	
	
	int i , j , k;
	
	int cur_codigo_hospital;
	int cur_matricula_medico;
	int cur_cpf_paciente;
	
	
	int indice_hospital;
	int indice_medico;
	int indice_paciente;
	
	
	int matriculas_med_vinculados_hospital[qtd_medicos_cadastrados];
	int qtd_matriculas_armazenadas;
	
	int cpfs_pacientes_intern_pelo_medico[qtd_pacientes_cadastrados]; 
	int qtd_cpfs_armazenados;
	
	
	//percorrendo hospitais
	for(i = 0 ; i < qtd_hospitais_cadastrados ; i++){
	
	
		cur_codigo_hospital = codigos_hospitais[i];
		

		//armazenar as matriculas dos medicos vinculados ao hospital atual
		qtd_matriculas_armazenadas =  armaz_matriculas_meds_vinculados_ao_hospital(matriculas_med_vinculados_hospital, cur_codigo_hospital , qtd_hospitais_vinculados ,
                                                                                           cod_hospitais_vinculados , matriculas_medicos , qtd_medicos_cadastrados);
		
		
	        //retonar indice do hospital cadastrado com base na codigo do hospital atual
		indice_hospital = find_indice_do_num_no_vetor(codigos_hospitais, qtd_hospitais_cadastrados , cur_codigo_hospital);
		
		printf("\n************************");
		
		printf("\nNome hospital : %s\n" , nomes_hospitais[indice_hospital]);
	
		
		//percorrendo medicos vinculados ao hospital
		for(j = 0 ; j < qtd_matriculas_armazenadas ; j++){
		
			
			cur_matricula_medico = matriculas_med_vinculados_hospital[j];
			
			//armazenar os cpfs dos pacientes internados pelo medico atual
			qtd_cpfs_armazenados = armazenar_pacientes_internados_pelo_medico(cpfs_pacientes_intern_pelo_medico , cur_matricula_medico , qtd_internacoes_cadastradas ,  
                                                                                          matriculas_medicos_internaram , cpfs_pacientes_internados );
			
				
			//retonar indice do médico cadastrado com base na matricula do medico atual
			indice_medico =  find_indice_do_num_no_vetor(matriculas_medicos , qtd_medicos_cadastrados , cur_matricula_medico);
			
			printf("\n\nNome medico : %s\n" , nomes_medicos[indice_medico]);
			
			
			//percorrendo pacientes vinculados ao médico
			for(k = 0 ; k < qtd_cpfs_armazenados ; k++){
			
				cur_cpf_paciente =  cpfs_pacientes_intern_pelo_medico[k];
				
				//retorna o indice do paciente cadastrado com base no cpf do paciente atual
				indice_paciente =  find_indice_do_num_no_vetor(cpfs_pacientes , qtd_pacientes_cadastrados , cur_cpf_paciente);
				
				printf("\nNome paciente : %s ---- CPF : %d\n" , nomes_pacientes[indice_paciente] , cur_cpf_paciente);
				
			
			}
			
			
		
		}
		printf("\n************************\n");
	
	}
		
}

