#include <stdio.h>

typedef struct {
	
	int codigo;
	char produto[20];
	float value;
	
} Produto;

void cadastro(){
	
	FILE *arq = fopen("produtos.dat", "ab");
	
	if(arq == NULL){
		
		printf("Erro 0x80004005\n");
		return;
	}
	
	Produto p; 
	
	printf("Escreva o codigo do produto: ");
	scanf("%d", &p.codigo);
	
	printf("Escreva o nome do produto: ");
	scanf("%s", p.produto);
	
	printf("Escreva o valor do produto: ");
	scanf("%f", &p.value);
	
	fwrite(&p, sizeof(Produto), 1, arq);
	
	puts(" ");
	
	fclose(arq);
	return;	
}

void listar(){
	
	FILE *arq = fopen("produtos.dat", "rb");
	
	if(arq == NULL){
		
		printf("Erro 0x80004005\n");
		return;
	}
	
	fseek(arq, 0, SEEK_END);   //vai ate o final
	long tamanho = ftell(arq); //tamanho em bytes
	rewind(arq);               //volta para o inicio
	
	if(tamanho == 0){
		
		printf("Nao ha produtos cadastrados!\n");
	}
	
	else{
		
		Produto p;
	
		while(fread(&p, sizeof(Produto), 1, arq) == 1){
		
			printf("ID: %d Produto: %s Valor: %.2f\n", p.codigo, p.produto, p.value);
		}
	}
	
	puts(" ");
	
	fclose(arq);
}

void pesquisaCodigo(const char codpesquisa){
	
	// ultilizei const char para mostrar para o codigo que não irei alterar 
	
	FILE *arq = fopen("produtos.dat", "rb");
	
	if(!arq){
		
		printf("Erro 0x80004005\n");
		return;
	}
	
	Produto p;
	
	while(fread(&p, sizeof(Produto), 1, arq) == 1){
		
		if(p.codigo == codpesquisa){
			
			printf("Produto encontrado\n");
			printf("ID: %d Nome: %s Valor: %.2f\n", p.codigo, p.produto, p.value);
			
			puts(" ");
			fclose(arq);
			
			return;
		}
	}
	printf("Produto de ID: %s nao encontrado\n\n", codpesquisa);
	
	fclose(arq);
}

void pesquisaProduto(int prodpesquisa){
	
	FILE *arq = fopen("produtos.dat", "rb");
	
	if(!arq){
		
		printf("Erro 0x80004005\n");
		return;
	}
	
	Produto p;
	
	while(fread(&p, sizeof(Produto), 1, arq) == 1){
		
		if(strstr(p.produto, prodpesquisa) != NULL){
			
		printf("\nProduto encontrado\n");
			printf("ID: %d Nome: %s Valor: %.2f\n", p.codigo, p.produto, p.value);
			
			puts(" ");
			fclose(arq);
			
			return;	
		}
	}
	
	printf("Produto cujo nome: %s nao encontrado\n\n", prodpesquisa);
	
	fclose(arq);
}

void pesquisa(){

	int opcao;
	
	do{
		printf("Escolha uma forma de pesquisa:\n");
		printf("1-Codigo\n");
		printf("2-Produto\n");
		printf("0-Sair\n\n");
		
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		if(opcao < 0 || opcao > 2){
			
			printf("Voce escolheu uma opcao invalida, vamos tentar novamente!");
		}
		
		puts(" ");
		
		if(opcao == 1){
			
			int cod;
			printf("Digite o codigo: ");
			scanf("%d", &cod);
			
			pesquisaCodigo(cod);
		}
		
		if(opcao == 2){
			
			char prod[20];
			
			printf("Escreva o nome do Produto: ");
			scanf("%s", prod);
			
			pesquisaProduto(prod);
		}
		
	}while(opcao != 0);
}

void limpar(){
	
	FILE *arq = fopen("produtos.dat", "wb");
	
	if(!arq){
		
		printf("Erro 0x80004005\n");
		return;
	}
	
	printf("Arquivo limpo com sucesso!\n");
	puts(" ");
	
	fclose(arq);
	
}

int main(){
	
	int opcao;
	
	do{	
		printf("1-Cadastrar Produto\n");
		printf("2-Listar Produtos\n");
		printf("3-Pesquisar Produto\n");
		printf("4-Limpar Lista\n\n");
		printf("0-Sair\n\n");
		
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		if(opcao > 4){
			
			printf("Voce escolheu uma opcao invalida, vamos tentar novamente!");
		}
		
		puts(" ");
		
		switch(opcao){
			
			case 1:
				
				cadastro();	
				break;
				
			case 2:
				
				listar();
				break;
				
			case 3:
				
				pesquisa();
				break;
				
			case 4:
				
				limpar();
				break;
		}
		
	}while(opcao != 0);	
}