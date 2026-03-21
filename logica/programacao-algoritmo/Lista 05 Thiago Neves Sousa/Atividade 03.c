#include <stdio.h>
#define text1 "------- Gestao de Produtos -------"

int main(){
	
		int opcao;
	
		do{
			printf("1 -> Cadastar novo produto\n");
			printf("2 -> Listar produtos\n");
			printf("0 -> Sair\n\n");
		
			printf("Escolha uma opcao: ");
			scanf("%d", &opcao);
			
		}while(opcao != 1 && opcao != 2 && opcao != 0);
	
	return 0;
}
