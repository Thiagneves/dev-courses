#include <stdio.h>

void cadastro(){
	
	FILE *arquivo = fopen("ListaCompras.txt", "a+");
	
	int cod;
	char produto[20];
	float value;
	
	printf("Escreva o codigo do produto: ");
	scanf("%d", &cod);
	
	printf("Escreva o nome do produto: ");
	scanf("%s", produto);
	
	printf("Escreva o valor do produto: ");
	scanf("%f", &value);
	
	fprintf(arquivo, "ID: %-5d NOME: %-20s VALOR: %-12.2f\n", cod, produto, value);
	
	fclose(arquivo);
	
	puts(" ");
}

void lista(){
	
	FILE *arquivo = fopen("ListaCompras.txt", "a+");
	
	if(arquivo == NULL){
		
		printf("Falha ao abrir o arquivo!\n");
		return;
	}
	
	int caracter; 
	while(1){
	
		caracter = fgetc(arquivo);
		
		if(caracter == EOF){
			break;
		}
		putchar(caracter);	
	}
	
	fclose(arquivo);
	puts(" ");
	
}

void limparLista(){
	
	FILE *arquivo = fopen("ListaCompras.txt", "w");
	
	fclose(arquivo);
}

int main(){
	
	int opcao;
		
	do{
		printf("1 - Cadastro\n");
		printf("2 - Lista\n");
		printf("3 - Limpar Lista\n");
		printf("0 - Sair\n\n");
		
		printf("Escolha uma opcao: ");
		scanf("%d", &opcao);
		
		puts(" ");
		
		if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 0){
			
			printf("Voce escolheu uma opcao invalida, vamos tentar novamente!\n\n");
		}
		
		switch(opcao){
			
			case 1:
				
				cadastro();
				break;
			
			case 2: 
			
				lista();
				break;
				
			case 3:
				
				limparLista();
				break;
		}
	
	}while(opcao != 0);
	
}