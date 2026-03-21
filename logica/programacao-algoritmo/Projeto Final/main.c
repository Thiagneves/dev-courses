#include <stdio.h>

typedef struct {
	
	// 1. Dados da planta
    int opcao;
    char especie[30];
	char ciclo_vida[30];
	float espacamento;
	
	// 2. Dados do Plantio
	char data_plantio[30];
	char tipo_plantio[30];
	char tipo_solo[30];
	int quant_plantada;
	int lote;
	
	// 3. Irrigação e Adubação
	int frequencia_irrigacao;
	char tipo_adubacao[30];
	char data_dosagem[30];
	float dosagem_adubacao;
		
	// 4. Desenvolvimento da planta
	char data_germinacao[30];
	char data_floracao[30];
	char data_frutificacao[30];
	
	// 5. Controle de pragas e doenças
	char praga_doenca[30];
	char data_praga_doenca[30];
	char produto_praga_doenca[30];
	float dosagem_praga_doenca;
	
	// 6. Colheita
	char data_colheita[30];
	int quant_colhida;
	char qualidade[30];
	char destino[30];

} Agro;

// Imprimir Dados
void ImprimirDados() {
	
    FILE *arqDadosPlanta = fopen("DadosPlanta.dat", "r");
    FILE *arqDadosPlantio = fopen("DadosPlantio.dat", "r");
    FILE *arqIrrigacaoAdubacao = fopen("IrrigacaoAdubacao.dat", "r");
    FILE *arqDesenvolvimentoPlanta = fopen("DesenvolvimentoPlanta.dat", "r");
    FILE *arqControlePraga = fopen("ControlePraga.dat", "r");
    FILE *arqColheita = fopen("Colheita.dat", "r");
    char linha[100];
    
    printf("\n=== Dados salvos ===\n");
    
    // 1. Dados da planta
    
    if (arqDadosPlanta == NULL) {
    	
        printf("Erro ao abrir o arquivo para leitura!\n");
    } 
	else {
		
        while (fgets(linha, sizeof(linha), arqDadosPlanta) != NULL) {
        	
            printf("%s", linha);
        }
        
        fclose(arqDadosPlanta);
    }
    
    // 2. Dados do Plantio
    
    if (arqDadosPlantio == NULL) {
    	
        printf("Erro ao abrir o arquivo para leitura!\n");
    } 
	else {
		
        while (fgets(linha, sizeof(linha), arqDadosPlantio) != NULL) {
            printf("%s", linha);
        }
        
        fclose(arqDadosPlantio);
    }
    
    // 3. Irrigação e Adubação
    
    if (arqIrrigacaoAdubacao == NULL) {
    	
        printf("Erro ao abrir o arquivo para leitura!\n");
    } 
	else {
		
        while (fgets(linha, sizeof(linha), arqIrrigacaoAdubacao) != NULL) {
        	
            printf("%s", linha);
        }
        
        fclose(arqIrrigacaoAdubacao);
    }
    
    // 4. Desenvolvimento da planta
    
    if (arqDesenvolvimentoPlanta == NULL) {
    	
        printf("Erro ao abrir o arquivo para leitura!\n");
    } 
	else {
		
        while (fgets(linha, sizeof(linha), arqDesenvolvimentoPlanta) != NULL) {
        	
            printf("%s", linha);
        }
        
        fclose(arqDesenvolvimentoPlanta);
    }
    
    // 5. Controle de pragas e doenças
    
    if (arqControlePraga == NULL) {
    	
        printf("Erro ao abrir o arquivo para leitura!\n");
    } 
	else {
		
        while (fgets(linha, sizeof(linha), arqControlePraga) != NULL) {
        	
            printf("%s", linha);
        }
        
        fclose(arqControlePraga);
    }
    
    // 6. Colheita
    
    if (arqColheita == NULL) {
    	
        printf("Erro ao abrir o arquivo para leitura!\n");
    } 
	else {
		
        while (fgets(linha, sizeof(linha), arqColheita) != NULL) {
            
			printf("%s", linha);
        }
        
        fclose(arqColheita);
    }
}

// 1. Dados da planta
void salvarDadosPlanta(Agro p){
	
	FILE *arqDadosPlanta = fopen("DadosPlanta.dat", "w");
		
	    if (arqDadosPlanta == NULL) {
	    	
    		printf("Erro ao abrir o arquivo para leitura!\n");
    		return;
		}
		
		fprintf(arqDadosPlanta, "\n1. Dados da Planta\n");
		fprintf(arqDadosPlanta, "Especie: %s\n", p.especie);
		fprintf(arqDadosPlanta, "Ciclo de vida: %s\n", p.ciclo_vida);
		fprintf(arqDadosPlanta, "Espacamento: %.2f cm\n", p.espacamento);
		
	fclose(arqDadosPlanta);
}

// 2. Dados do Plantio
void salvarDadosPlantio(Agro p){
	
	FILE *arqDadosPlantio = fopen("DadosPlantio.dat", "w");
		
	    if (arqDadosPlantio == NULL) {
	    	
    		printf("Erro ao abrir o arquivo para leitura!\n");
    		return;
		}
		
		fprintf(arqDadosPlantio, "\n2. Dados do Plantio\n");
		fprintf(arqDadosPlantio, "Data do Plantio: %s\n", p.data_plantio);
		fprintf(arqDadosPlantio, "Tipo de Plantio: %s\n", p.tipo_plantio);
		fprintf(arqDadosPlantio, "Tipo de Solo: %s\n", p.tipo_solo);
		fprintf(arqDadosPlantio, "Quantidade Plantada: %d plantas\n", p.quant_plantada);
		fprintf(arqDadosPlantio, "Lote Informado: %d\n", p.lote);
		
	fclose(arqDadosPlantio);
}

// 3. Irrigação e Adubação
void salvarIrrigacaoAdubacao(Agro p){
	
	FILE *arqIrrigacaoAdubacao = fopen("IrrigacaoAdubacao.dat", "w");
		
	    if (arqIrrigacaoAdubacao == NULL) {
	    	
    		printf("Erro ao abrir o arquivo para leitura!\n");
    		return;
		}
		
		fprintf(arqIrrigacaoAdubacao, "\n3. Irrigacao e Adubacao\n");
		fprintf(arqIrrigacaoAdubacao, "Frequencia de Irrigacao: %d vezes ao dia\n", p.frequencia_irrigacao);
		fprintf(arqIrrigacaoAdubacao, "Tipo de adubacao: %s\n", p.tipo_adubacao);
		fprintf(arqIrrigacaoAdubacao, "Data de adubacao ou calagem: %s\n", p.data_dosagem);
		fprintf(arqIrrigacaoAdubacao, "Dosagem de adubacao ou calagem: %.2f ml\n", p.dosagem_adubacao);
		
	fclose(arqIrrigacaoAdubacao);
}

// 4. Desenvolvimento da planta
void salvarDesenvolvimentoPlanta(Agro p){
	
	FILE *arqDesenvolvimentoPlanta = fopen("DesenvolvimentoPlanta.dat", "w");
		
	    if (arqDesenvolvimentoPlanta == NULL) {
	    	
    		printf("Erro ao abrir o arquivo para leitura!\n");
    		return;
		}
		
		fprintf(arqDesenvolvimentoPlanta, "\n4. Desenvolvimento da planta\n");
		fprintf(arqDesenvolvimentoPlanta, "Data de germinacao: %s\n", p.data_germinacao);
		fprintf(arqDesenvolvimentoPlanta, "Data de floracao: %s\n", p.data_floracao);
		fprintf(arqDesenvolvimentoPlanta, "Data de frutificacao: %s\n", p.data_frutificacao);
		
	fclose(arqDesenvolvimentoPlanta);
}

// 5. Controle de pragas e doenças
void salvarDoencaPraga(Agro p){
	
	FILE *arqControlePraga = fopen("ControlePraga.dat", "w");
		
	    if (arqControlePraga == NULL) {
	    	
    		printf("Erro ao abrir o arquivo para leitura!\n");
    		return;
		}
		
		fprintf(arqControlePraga, "\n5. Controle de pragas e doencas\n");
		fprintf(arqControlePraga, "Doenca ou Praga detectada: %s\n", p.praga_doenca);
		fprintf(arqControlePraga, "Data de aplicacao de defensivos: %s\n", p.data_praga_doenca);
		fprintf(arqControlePraga, "Produto usado: %s\n", p.produto_praga_doenca);
		fprintf(arqControlePraga, "Dosagem: %.2f ml\n", p.dosagem_praga_doenca);
		
	fclose(arqControlePraga);
}

// 6. Colheita
void salvarColheita(Agro p){
	
	FILE *arqColheita = fopen("Colheita.dat", "w");
		
	    if (arqColheita == NULL) {
	    	
    		printf("Erro ao abrir o arquivo para leitura!\n");
    		return;
		}
		
		fprintf(arqColheita, "\n6. Colheita\n");
		fprintf(arqColheita, "Data da colheita: %s\n", p.data_colheita);
		fprintf(arqColheita, "Quantidade colhida: %d\n", p.quant_colhida);
		fprintf(arqColheita, "Qualidade: %s\n", p.qualidade);
		fprintf(arqColheita, "Destino: %s\n", p.destino);
		
	fclose(arqColheita);
}

// Adição de Todos os dados
void add_dados(){ 

// 1. Adicionar Dados

	Agro p;
	
	printf("=== Adicionar Dados ===\n\n"); 
	
	printf("1. Dados da planta\n"); 
	
		printf("1.1 Especie cultivada:\n");
		scanf(" %[^\n]", p.especie);
		
		puts(" ");
		
		printf("1.2 Ciclo de vida:\n");
		scanf(" %[^\n]", p.ciclo_vida);
		
		puts(" ");
		
		printf("1.3 Espacamento usado:\n");
		scanf(" %f", &p.espacamento);
		
		puts(" ");
		
	printf("2. Dados do Plantio\n");
	
		printf("2.1 Data do plantio:\n");
		scanf(" %[^\n]", p.data_plantio);
		
		puts(" ");
		
		printf("2.2 Tipo de plantio:\n");
		scanf(" %[^\n]", p.tipo_plantio);
		
		puts(" ");
		
		printf("2.3 Tipo de solo:\n");
		scanf(" %[^\n]", p.tipo_solo);
		
		puts(" ");
		
		printf("2.4 Quantidade plantada:\n");
		scanf(" %d", &p.quant_plantada);
		
		puts(" ");
		
		printf("2.5 Lote informado:\n");
		scanf(" %d", &p.lote);
		
		puts(" ");
	
	printf("3. Irrigacao e Adubacao\n");
		
		printf("3.1 Frequencia de Irrigacao:\n");
		scanf(" %d", &p.frequencia_irrigacao);
		
		puts(" ");
		
		printf("3.2 Tipo de Adubacao:\n");
		scanf(" %[^\n]", p.tipo_adubacao);
		
		puts(" ");
		
		printf("3.3 Data de adubacao ou calagem:\n");
		scanf(" %[^\n]", p.data_dosagem);
		
		puts(" ");
		
		printf("3.4 Dosagem de abudacao ou calagem:\n");
		scanf(" %f", &p.dosagem_adubacao);
		
		puts(" ");
		
	printf("4. Desenvolvimento da planta\n");
	
		printf("4.1 Data de germinacao:\n");
		scanf(" %[^\n]", p.data_germinacao);
		
		puts(" ");
		
		printf("4.2 Data da floracao:\n");
		scanf(" %[^\n]", p.data_floracao);
		
		puts(" ");
		
		printf("4.3 Data de frutificacao:\n");
		scanf(" %[^\n]", p.data_frutificacao);
		
		puts(" ");
	
	char escolha;
	
	do{
		
		printf("Deseja adicionar doencas ou praga? (s ou n)\n");
		scanf(" %c", &escolha);
	
		if (escolha >= 'a' && escolha <= 'z') {
		
    		escolha = escolha - 32;
		}
	
		if(escolha == 'S'){
			
			printf("5. Controle de pragas e doencas\n");
			
			printf("5.1 Tipo de Doenca ou Praga detectada:\n");
			scanf(" %[^\n]", p.praga_doenca);
			
			puts(" ");
			
			printf("5.2 Data de aplicacao de defensivos:\n");
			scanf(" %[^\n]", p.data_praga_doenca);
			
			puts(" ");
			
			printf("5.3 Nome do produto usado:\n");
			scanf(" %[^\n]", p.produto_praga_doenca);
			
			puts(" ");
			
			printf("5.4 Dosagem:\n");
			scanf(" %f", &p.dosagem_praga_doenca);
			
			puts(" ");
			
		}
		
		else if(escolha != 'N' && escolha != 'S'){
			
			printf("Voce escolheu uma opcao invalida, vamos tentar novamente!");
		}
		
	}while(escolha != 'N' && escolha != 'S');
	
	escolha = ' ';
	
	do{
		
		printf("Deseja adicionar colheita? (s ou n)\n");
		scanf(" %c", &escolha);
	
		if (escolha >= 'a' && escolha <= 'z') {
		
    		escolha = escolha - 32;
		}
	
		if(escolha == 'S'){
			
			printf("6. Colheita\n");
			
			printf("6.1 Data da colheita:\n");
			scanf(" %[^\n]", p.data_colheita);
			
			puts(" ");
			
			printf("6.2 Quantidade colhida:\n");
			scanf(" %d", &p.quant_colhida);
			
			puts(" ");
			
			printf("6.3 Qualidade:\n");
			scanf(" %[^\n]", p.qualidade);
			
			puts(" ");
			
			printf("6.4 Destino:\n");
			scanf(" %[^\n]", p.destino);
			
			puts(" ");
			
		}
		
		else if(escolha != 'N' && escolha != 'S'){
			
			printf("Voce escolheu uma opcao invalida, vamos tentar novamente!");
		}
		
	}while(escolha != 'N' && escolha != 'S');
	
		//Salvar no arquivo
		
		// 1. Dados Planta 
		salvarDadosPlanta(p);
		
		// 2. Dados do Plantio
		salvarDadosPlantio(p);
		
		// 3. Irrigação e Adubação
		salvarIrrigacaoAdubacao(p);
		
		// 4. Desenvolvimento da planta
		salvarDesenvolvimentoPlanta(p);
		
		// 5. Controle de pragas e doenças
		salvarDoencaPraga(p);
		
		// 6. Colheita
		salvarColheita(p);
		
		//Imprimir arquivo na tela
		ImprimirDados(p);
    
}

// Limpar dados adicionados
void LimparDados(){
	
    FILE *arqDadosPlanta = fopen("DadosPlanta.dat", "w");
    fclose(arqDadosPlanta);
    
    FILE *arqDadosPlantio = fopen("DadosPlantio.dat", "w");
    fclose(arqDadosPlantio);
    
    FILE *arqIrrigacaoAdubacao = fopen("IrrigacaoAdubacao.dat", "w");
    fclose(arqIrrigacaoAdubacao);
    
    FILE *arqDesenvolvimentoPlanta = fopen("DesenvolvimentoPlanta.dat", "w");
    fclose(arqDesenvolvimentoPlanta);
    
    FILE *arqControlePraga = fopen("ControlePraga.dat", "w");
    fclose(arqControlePraga);
    
    FILE *arqColheita = fopen("Colheita.dat", "w");
    fclose(arqColheita);
}

// Menu usado na Função de Modificar Dados
int MenuModificacao(){
		
	printf("\n=== MENU DE MODIFICACAO ===\n");
	
    printf("1 - Dados da Planta\n");
	printf("2 - Dados do Plantio\n");
	printf("3 - Irrigacao e Adubacao\n");
    printf("4 - Desenvolvimento da Planta\n");
    printf("5 - Controle de Pragas\n");
    printf("6 - Dados de Colheita\n");
    printf("0 - Voltar ao menu principal\n\n");
	    
    printf("Escolha o modulo para modificar: ");
}

void ModificarDados(){
	
	Agro d;
	int OpcaoValida;
	int escolha;
	
	do{
		
		MenuModificacao();
		scanf("%d", &d.opcao);
		
		OpcaoValida = (d.opcao >= 0 && d.opcao <= 6);
        
        if(!OpcaoValida) {
        	
            printf("Opcao invalida! Digite um valor entre 0 e 6.\n");
        }
        
	}while(!OpcaoValida);
	
	switch(d.opcao){
		
		case 1:
		{
			printf("\n=== EDITAR DADOS DA PLANTA ===\n");
			
			// Menu dados da Planta
			do{
				printf("\nSelecione quais dados serao alterados:\n");
			
				printf("1 - Especie\n");
				printf("2 - Ciclo de vida\n");
				printf("3 - Espacamento\n");
				printf("0 - Sair\n\n");
				
				printf("Digite a opcao: ");
				scanf(" %d", &escolha);
				
				switch(escolha){
					
					case 1:
						
						printf("Nova especie: ");
	                	scanf(" %[^\n]", d.especie);
	                	break;
	                	
	                case 2:
	                	
	                	printf("Novo ciclo de vida: ");
	                	scanf(" %[^\n]", d.ciclo_vida);
	                	break;
	                	
	                case 3:
	                	
	                	printf("Novo espacamento: ");
	                	scanf("%f", &d.espacamento);
	                	break;
	                
	                case 0:
	                	
	                	break;
	                
	                default:
	                	
	                	printf("Opcao invalida!\n");
	                
				}
				
			}while(escolha != 0);
		
		salvarDadosPlanta(d);
		break;	
		}
		case 2:
		{
			printf("\n=== EDITAR DADOS DO PLANTIO ===\n");
			
			// Menu dados do plantio
			do{
				printf("\nSelecione quais dados serao alterados:\n");
			
				printf("1 - Data do Plantio\n");
				printf("2 - Tipo do Plantio\n");
				printf("3 - Tipo de Solo\n");
				printf("4 - Quantidade Plantata\n");
				printf("5 - Lote\n");
				printf("0 - Sair\n\n");
				
				printf("Digite a opcao: ");
				scanf(" %d", &escolha);
				
				switch(escolha){
					
					case 1:
						
						printf("Nova data de plantio: ");
	                	scanf(" %[^\n]", d.data_plantio);
	                	break;
	                	
	                case 2:
	                	
	                	printf("Novo tipo de plantio: ");
	                	scanf(" %[^\n]", d.tipo_plantio);
	                	break;
	                	
	                case 3:
	                	
	                	printf("Novo tipo de solo: ");
	                	scanf(" %[^\n]", d.tipo_solo);
	                	break;
	                
	                case 4:
	                	
	                	printf("Nova quantidade plantada: ");
	                	scanf(" %d", &d.quant_plantada);
	                	break;
	                	
	                case 5:
	                	
	                	printf("Novo lote: ");
	                	scanf(" %d", &d.lote);
	                	break;
	                
	                case 0:
	                	
	                	break;
	                
	                default:
	                	
	                	printf("Opcao invalida!\n");
	                
				}
				
			}while(escolha != 0);
		
		salvarDadosPlantio(d);
		break;
		}
		case 3:
		{
			printf("\n=== EDITAR DADOS DE IRRIGACAO E ADUBACAO ===\n");
			
			// Menu dados de Irrigacao e Adubacao
			do{
				printf("\nSelecione quais dados serao alterados:\n");
			
				printf("1 - Frequencia de Irrigacao\n");
				printf("2 - Tipo de Adubacao\n");
				printf("3 - Data da Dosagem\n");
				printf("4 - Dosagem de adubacao ou calagem\n");
				printf("0 - Sair\n\n");
				
				printf("Digite a opcao: ");
				scanf(" %d", &escolha);
				
				switch(escolha){
					
					case 1:
						
						printf("Nova Frequencia de Irrigacao: ");
	                	scanf(" %d", &d.frequencia_irrigacao);
	                	break;
	                	
	                case 2:
	                	
	                	printf("Novo Tipo de Adubacao: ");
	                	scanf(" %[^\n]", d.tipo_adubacao);
	                	break;
	                	
	                case 3:
	                	
	                	printf("Nova Data da Dosagem: ");
	                	scanf(" %[^\n]", d.data_dosagem);
	                	break;
	                
	                case 4:
	                	
	                	printf("Nova Dosagem de adubacao ou calagem: ");
	                	scanf(" %f", &d.dosagem_adubacao);
	                	break;
	                
	                case 0:
	                	
	                	break;
	                
	                default:
	                	
	                	printf("Opcao invalida!\n");
	                
				}
				
			}while(escolha != 0);
		
		salvarIrrigacaoAdubacao(d);	
		break;	
		}
		case 4:
		{
			printf("\n=== EDITAR DADOS DE DESENVOLVIMENTO DA PLANTA ===\n");
			
			// Menu dados de Desenvolvimento da planta
			do{
				printf("\nSelecione quais dados serao alterados:\n");
			
				printf("1 - Data de Germinacao\n");
				printf("2 - Data de Floracao\n");
				printf("3 - Data da Frutificacao\n");
				printf("0 - Sair\n\n");
				
				printf("Digite a opcao: ");
				scanf(" %d", &escolha);
				
				switch(escolha){
					
					case 1:
						
						printf("Nova Data de Germinacao: ");
	                	scanf(" %[^\n]", d.data_germinacao);
	                	break;
	                	
	                case 2:
	                	
	                	printf("Nova Data de Floracao: ");
	                	scanf(" %[^\n]", d.data_floracao);
	                	break;
	                	
	                case 3:
	                	
	                	printf("Nova Data da Frutificacao: ");
	                	scanf(" %[^\n]", d.data_frutificacao);
	                	break;
	                
	                case 0:
	                	
	                	break;
	                
	                default:
	                	
	                	printf("Opcao invalida!\n");
	                
				}
				
			}while(escolha != 0);
		
		salvarDesenvolvimentoPlanta(d);
		break;
		}
		case 5:
		{
			printf("\n=== EDITAR DADOS DO CONTROLE DE PRAGAS E DOENCAS ===\n");
			
			// Menu dados de controle de pragas e doencas
			do{
				printf("\nSelecione quais dados serao alterados:\n");
			
				printf("1 - Doenca ou Praga detectada\n");
				printf("2 - Data de aplicacao de defensivos\n");
				printf("3 - Produto usado\n");
				printf("4 - Dosagem\n");
				printf("0 - Sair\n\n");
				
				printf("Digite a opcao: ");
				scanf(" %d", &escolha);
				
				switch(escolha){
					
					case 1:
						
						printf("Nova Doenca ou Praga detectada: ");
	                	scanf(" %[^\n]", d.praga_doenca);
	                	break;
	                	
	                case 2:
	                	
	                	printf("Nova Data de aplicacao de defensivos: ");
	                	scanf(" %[^\n]", d.data_praga_doenca);
	                	break;
	                	
	                case 3:
	                	
	                	printf("Novo Produto usado: ");
	                	scanf(" %[^\n]", d.produto_praga_doenca);
	                	break;
	                
	                case 4:
	                	
	                	printf("Nova Dosagem: ");
	                	scanf(" %f", &d.dosagem_praga_doenca);
	                	break;
	                
	                case 0:
	                	
	                	break;
	                
	                default:
	                	
	                	printf("Opcao invalida!\n");
	                
				}
				
			}while(escolha != 0);
		
			salvarDoencaPraga(d);
			break;
		}
		case 6:
		{
		    printf("\n=== EDITAR DADOS DA COLHEITA ===\n");
		    do {
		    	
		        printf("\nSelecione quais dados serao alterados:\n");
		        printf("1 - Data da colheita\n");
		        printf("2 - Quantidade colhida\n");  // Corrigido
		        printf("3 - Qualidade\n");
		        printf("4 - Destino\n");
		        printf("0 - Sair\n\n");
		        
		        printf("Digite a opcao: ");
		        scanf("%d", &escolha);
		        
		        switch(escolha) {
		            case 1:
		            	
		                printf("Nova data da colheita: ");
		                scanf(" %[^\n]", d.data_colheita);
		                
		                break;
		                
		            case 2:
		            	
		                printf("Nova quantidade colhida: "); 
		                scanf("%d", &d.quant_colhida);
		                
		                break;
		                
		            case 3:
		            	
		                printf("Nova qualidade: ");
		                scanf(" %[^\n]", d.qualidade);
		                
		                break;
		                
		            case 4:
		            	
		                printf("Novo destino: ");
		                scanf(" %[^\n]", d.destino);
		                
		                break;
		                
		            case 0:
		            	
		                break;
		                
		            default:
		            	
		                printf("Opcao invalida!\n");
		        }
		    } while(escolha != 0);
		    
		    salvarColheita(d);
		    break;
		}
	
		default:
			
            break;
	}
}

int main(){
	
	Agro a;
	
	do {
        printf("=== Sistema de Organizacao Agricula ===\n\n");
        printf("Escolha uma opcao:\n\n");
        printf("1 - Adicionar dados\n");
        printf("2 - Imprimir dados adicionados\n");
        printf("3 - Modificar dados\n");
        printf("4 - Limpar Dados\n");
        printf("0 - Sair\n\n");
        
        printf("Digite a opcao: ");
        scanf("%d", &a.opcao);
        
        switch(a.opcao) {
        	
            case 1:
            	
                add_dados();
                break;
                
            case 2:
            	
                ImprimirDados();
                break;
                
            case 3:
            	
                ModificarDados();
                break;
            
            case 4:
            	
            	LimparDados();
            	break;
                
            case 0:
            	
                
                break;
                
            default:
            	
                printf("Opcao invalida. Vamos tentar novamente\n");
        }
        
        puts(" ");
        
    } while(a.opcao != 0);
	
}