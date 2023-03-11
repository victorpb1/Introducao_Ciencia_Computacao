/* 
Autores: Luis Eduardo de Souza Bezerra, Victor Pereira Barbosa.
Disciplina: Introdução à Ciência da Computação.
Professor: Caribe Zampirolli de Souza.
Data: 11/12/21.
*/

#include <stdio.h>
#include <string.h>

#define nP 3 //Numero de Pessoas
#define tN 120 //Tamanho Nome
#define mP 50 //Maximo de Peças
#define nS 100 //Numero maximo de Serviços
#define KM 999999 //Limite da KMtagem do carro
#define hrs 999999 //Limite de horas na manutenção do veiculo.

int buscarPessoa(char CPF[nP][tN],int linha, char consulta[tN]){
	int i=0;
	for(;i < linha;i++){
		if( strcmp (CPF[i] ,consulta) == 0 ){
			return i;
		}
	}
	return -1;	
}

int cadastrarPessoa(char nomeP[nP][tN], char nomeC[nP][tN], char CPF[nP][tN],char CTT[nP][tN],char Marca[nP][tN],char placaC[nP][tN],int linha)
{
	char consulta[tN];
    if(linha < nP){
        
		printf("Digite o CPF do cliente: ");
        scanf("\n%[^\n]s",CPF[linha]);
        strcpy(consulta,CPF[linha]);
        
        if(buscarPessoa(CPF,linha,consulta) != -1){
            printf("\nCPF ja cadastrado.\n");
            return linha;
        }
        
        else{
        printf("Digite o nome do cliente: ");
        scanf("\n%[^\n]s",nomeP[linha]);
        printf("Digite o numero de contato do cliente: ");
        scanf("\n%[^\n]s",CTT[linha]);
		printf("\nDigite o nome da marca do Veiculo do cliente: ");
		scanf("\n%[^\n]s",Marca[linha]);
		printf("Digite o nome do modelo do veiculo do cliente: ");
        scanf("\n%[^\n]s",nomeC[linha]);
        printf("Digite o numero da placa do cliente: ");
        scanf("\n%[^\n]s",placaC[linha]);
   		printf("\nCadastro efetuado com sucesso\n");
        printf("\n");
        return linha+1;
        }
            
    }
    else{
        printf("\nO Sistema ja chegou na capacidade maxima de pessoas cadastradas.\n");
        return linha;
    }
} 
int editarPessoa(char nomeP[nP][tN], char nomeC[nP][tN], char CPF[nP][tN],char CTT[nP][tN],char Marca[nP][tN],char placaC[nP][tN],int linha)
{
	int indiceCPF;
	char consulta[tN];
		printf("Digite o CPF do cliente: ");
        scanf("\n%[^\n]s",CPF[linha]);
        strcpy(consulta,CPF[linha]);
	    indiceCPF = (buscarPessoa(CPF,linha,consulta));
    if(buscarPessoa(CPF,linha,consulta) != -1){
       	printf("\nCliente encontrado, digite os novos dados: \n");
		printf("Nome do cliente: ");
        scanf("\n%[^\n]s",nomeP[indiceCPF]);
        printf("Telefone para contato com o cliente: ");
        scanf("\n%[^\n]s",CTT[indiceCPF]);
		printf("\nMarca do Veiculo do cliente: ");
		scanf("\n%[^\n]s",Marca[indiceCPF]);
		printf("Modelo do veiculo do cliente: ");
        scanf("\n%[^\n]s",nomeC[indiceCPF]);
        printf("Numero da placa do veiculo: ");
        scanf("\n%[^\n]s",placaC[indiceCPF]);
   		
   		printf("\nAlteracao efetuada com sucesso!!");
        printf("\n");
        return linha+1;
    }
    else{
        printf("\nCPF NAO ENCONTRADO.\n");
        return linha;
    }
    
    
}

float buscarPecas(char numeroSerie[mP][tN],int linha, char consulta[tN]){
	int i=0;
	for(;i < linha;i++){
		if( strcmp (numeroSerie[i] ,consulta) == 0 ){
			return i;
		}
	}
	return -1;	
}

float cadastrarPecas(char nomePeca[mP][tN],char numeroSerie[mP][tN],float valor [],int linha)
{
	char consulta[tN];
	if(linha < mP){
	    printf("Digite o numero de serie: ");
	    scanf("\n%[^\n]s",numeroSerie[linha]);
        strcpy(consulta,numeroSerie[linha]);
		    
	    if(buscarPecas(numeroSerie,linha,consulta) != -1){
            printf("\nPeca ja cadastrada.\n");
            return linha;
        }
		
		else{
		    printf("Digite o nome da peca: ");
			scanf("\n%[^\n]s",nomePeca[linha]);
			printf("Digite o valor da peca: ");
			scanf("%f",&valor[linha]);
			printf("\n");
			return linha + 1;
		}
	}
	
	else{
			printf("\nO sistema atingiu a capacidade maxima de pecas registradas.");
			return linha;
	}
}

float editarPecas(char nomePeca[mP][tN],char numeroSerie[mP][tN],float valor [],int linha){
	int indicePecas;
	char consulta[tN],op;
		printf("Digite o numero de serie da peca: ");
        scanf("\n%[^\n]s",numeroSerie[linha]);
        strcpy(consulta,numeroSerie[linha]);
	    indicePecas = (buscarPecas(numeroSerie,linha,consulta));

	if(buscarPecas(numeroSerie,linha,consulta) != -1){
		printf("\nPeca encontrada, Digite [N] para mudar o nome ou [V] para mudar o valor: \n");
		scanf("\n%[^\n]s",&op);
		if (op == 'n'|| op == 'N'){
		    printf("Digite o novo nome da peca: ");
		    scanf("\n%[^\n]s",nomePeca[indicePecas]);
		    return linha+1;
		}
		else if(op == 'v'|| op == 'V'){
		printf("Digite o novo valor da peca: ");
		scanf("%f",&valor[indicePecas]);
		printf("\n");
		return linha + 1;
		}
		else{
		    printf("\nNumero de serie invalido.");
		    return linha;
		}
	}
	else{
		printf("\nPECA NAO ENCONTRADA.\n");
		return linha;
	}
}

int buscarServico(int codigo_servico[],int iServico, int consulta_servico){
	int i=0;
	for(;i < iServico;i++){
		if(codigo_servico[i] == consulta_servico){
			return i;
		}
	}
	return -1;	
}

int Servico(char nomeP[nP][tN],char nomeC[nP][tN],char Marca[nP][tN],char placaC[nP][tN],char CPF[nP][tN],char numeroSerie[mP][tN],int nPeca[nS],float km[KM],float horas[hrs],float valor[mP],int nC[nS],int iServico,int iPessoa,int iPeca)
{
    char consultaCPF[tN],consultaPeca[tN];

    int indiceCPF, indicePecas, i = 0, op,consultaS = 0;

    float valorPeca = 0, total = 0;

	if(iServico < nS){
		printf("Digite o CPF do cliente: ");
        scanf("\n%[^\n]s",CPF[iPessoa]);
        strcpy(consultaCPF,CPF[iPessoa]);
        
        indiceCPF = buscarPessoa(CPF,iPessoa,consultaCPF); //isso vai retornar o indice do num do vetor (DEMORAMOS 4 ANOS PRA PENSAR NISSO e + 4 pra perceber que tinha que colocar ali em cima tambem kkkkkkkkkkkkkk).
        
        if(buscarPessoa(CPF,iPessoa,consultaCPF) != -1){
	        printf("Nome do cliente: %s\n",nomeP[indiceCPF]);
	        strcpy(nomeP[iServico],nomeP[indiceCPF]);
            printf("\nNome da marca do Veiculo do cliente: %s\n",Marca[indiceCPF]);
            strcpy(Marca[iServico],Marca[indiceCPF]);
		    printf("Nome do modelo do veiculo do cliente: %s\n",nomeC[indiceCPF]);
		    strcpy(nomeC[iServico],nomeC[indiceCPF]);
            printf("Nome da placa do cliente: %s\n",placaC[indiceCPF]);
            strcpy(placaC[iServico],placaC[indiceCPF]);
            printf("\n");
            
            printf("Digite um codigo numerico para cadastramento de servico: ");
            scanf("%d",&nC[iServico]);
            consultaS = nC[iServico];
            
            if(buscarServico(nC,iServico,consultaS) != -1){
                printf("\nCodigo de Servico ja cadastrado.\n");
                return iServico;
            }
            
            else{
            
                printf("Digite a quilometragem do veiculo: ");
                scanf("%f",&km[iServico]);
                printf("Digite a quantidade de horas necessarias para o servico: ");
                scanf("%f",&horas[iServico]);
                printf("Digite a quantidade de Pecas necessarias para o servico: ");
                scanf("%d",&nPeca[iServico]);

                if(nPeca[iServico] > 5){
                    printf("OPCAO INVALIDA.\n O numero maximo de pecas por servico e 5.\n");
                    return iServico;
                }
    
            else{
                do{ 
                    printf("Digite o numero de serie da peca: ");
                    scanf("\n%[^\n]s",numeroSerie[iPeca]);
                    strcpy(consultaPeca,numeroSerie[iPeca]);
	                indicePecas = (buscarPecas(numeroSerie,iPeca,consultaPeca));
	                
	                if(buscarPecas(numeroSerie,iPeca,consultaPeca) != -1){
                        valorPeca += valor[indicePecas];
                        total = valorPeca + (10*(valorPeca)/100) + 30*horas[iServico];
		            }
		            else{
		                printf("\nNumero de serie invalido.\n");
		                return iServico;
		            }
		            i++;
		        }while (i < nPeca[iServico]);
                
            }
                printf("O valor total do servico e: %.2f\n",total);  
                return iServico + 1;
            }
        }    
        else{
            printf("\nCPF NAO ENCONTRADO.\n");
            return iServico;
        }
    
    }
    else{
        printf("Limite maximo de servico atingido.");
        return iServico;
    }

}

int relatorio(char placaC[nP][tN],char nomeP[nP][tN],char CPF[nP][tN],char CTT[nP][tN],char Marca[nP][tN],char nomeC[nP][tN],char numeroSerie[mP][tN],char nomePeca[mP][tN],int nPeca[nS],float km[KM],float horas[hrs],float valor[],int nC[nS],int linha, int iServico, int iPeca){
    int indiceP,indiceS,op,consultaS,indicePecas,i = 0;
    char consulta[tN],consultaPeca[tN];
    
    printf("Digite [1] para ver as informacoes do proprietario pela placa.\n");
    printf("Digite [2] para ver as informacoes do servico.\n");
    printf("Digite [3] para ver as informacoes de orcamento do servico.\n");
    scanf("%d",&op);
    switch(op){
    
    case 1:
		printf("Digite o numero da placa: ");
        scanf("\n%[^\n]s",placaC[linha]);
        strcpy(consulta,placaC[linha]);
	    indiceP = (buscarPessoa(placaC,linha,consulta));
        if(buscarPessoa(placaC,linha,consulta) != -1){
       	    printf("\nCliente encontrado: \n");
		    printf("Nome do cliente: %s\n",nomeP[indiceP]);
		    printf("Numero do CPF: %s\n",CPF[indiceP]);
            printf("Telefone para contato: %s\n",CTT[indiceP]);
		    printf("\nMarca do Veiculo do cliente: %s\n",Marca[indiceP]);
		    printf("Modelo do veiculo do cliente: %s\n",nomeC[indiceP]);
            printf("\n");
            return linha+1;
        }
        else{
            printf("\nNumero de placa invalida.\n");
            return linha;
        }
        break;
    case 2:
        printf("Digite o numero do codigo de servico:");
        scanf("%d",&nC[iServico]);
            
            consultaS = nC[iServico];
            indiceS = (buscarServico(nC,iServico,consultaS));
            
            strcpy(consulta,CPF[iServico]);
            indiceP = (buscarPessoa(CPF,iServico,consulta));
           
            
        
        
        if((buscarServico(nC,iServico,consultaS) != -1) && (buscarPessoa(CPF,iServico,consulta) != -1)){
            
            
            printf("\nServico encontrado.\n");
            printf("Nome do cliente: %s\n",nomeP[indiceS]);
            printf("CPF do cliente: %s\n",CPF[indiceS]);
            printf("Telefone de contato: %s\n",CTT[indiceS]);
            printf("\n");
            printf("Marca do veiculo: %s\n",Marca[indiceS]);
            printf("Modelo do veiculo: %s\n",nomeC[indiceS]);
            printf("Placa do veiculo: %s\n",placaC[indiceS]);
            printf("\n");
            
            printf("Quilometragem do veiculo: %.2f\n",km[indiceS]);
            printf("Horas de servico: %.2f\n",horas[indiceS]);
            printf("Quantidade de pecas utilizadas: %d\n",nPeca[indiceS]);
            while(i<nPeca[indiceS]){
                printf("Nome das Pecas utilizadas: %s\n",nomePeca[indiceS]);
                i++;
            }
            
		    
            return iServico + 1;
        }
        else{
            printf("\nCodigo de servico invalido.\n");
            return iServico;
        }
        break;
    default:
        printf("Opcao invalida.");
        return linha;
    }
}

int main()
{
	char nome_cliente[nP][tN],nome_carro[nP][tN],CPF[nP][tN],CTT[nP][tN],Marca[nP][tN],placaC[nP][tN];
	char nome_Peca[mP][tN],numero_Serie[mP][tN];
	float valor_Peca [mP],km[KM],horas[hrs];
    int opcao, i = 0,iPessoa = 0,iPeca = 0,iServico = 0,numero_Peca[5],numero_Servico[nS];

    do{
        printf("==================== Menu: ===================");
        printf("\n=        Insira a opcao desejada:           =\n");
        printf("=          1: Cadastrar pessoa e veiculo    =\n");
        printf("=          2: Cadastrar peca                =\n");
        printf("=          3: Editar pessoa                 =\n");
        printf("=          4: Editar peca                   =\n");
        printf("=          5: Realizar servico no carro     =\n");
        printf("=          6: Relatorios                    =\n");
        printf("=          7: Sair do sistema               =\n");
        printf("==============================================\n");
        scanf("%d", &opcao);

    	switch (opcao){
        	case 1:
        		iPessoa = cadastrarPessoa(nome_cliente,nome_carro,CPF,CTT,Marca,placaC,iPessoa);
          	break;
        	case 2:
        	    iPeca = cadastrarPecas(nome_Peca,numero_Serie,valor_Peca,iPeca);
        	break;
        	case 3:
        		editarPessoa(nome_cliente,nome_carro,CPF,CTT,Marca,placaC,iPessoa);
            break;
        	case 4:
        		editarPecas(nome_Peca,numero_Serie,valor_Peca,iPeca);
            break;
        	case 5:
        		iServico = Servico(nome_cliente,nome_carro,Marca,placaC,CPF,numero_Serie,numero_Peca,km,horas,valor_Peca,numero_Servico,iServico,iPessoa,iPeca);
            break;
        	case 6:
                relatorio(placaC,nome_cliente,CPF,CTT,Marca,nome_carro,numero_Serie,nome_Peca,numero_Peca,km,horas,valor_Peca,numero_Servico,iPessoa,iServico,iPeca);
            break;
        	case 7:
            	i = 7;
            	printf("\nFinalizando programa!!!");
            break;
        	default:
            printf("\n\nOpcao inexistente!!!\n\n");
            break;
        }
    }while (i != 7);
	return 0;
}