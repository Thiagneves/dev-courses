#include <stdio.h>

int main(){
	
	char opcao;
	int aux = 1;
	
	do{
		
		printf("Escolha uma opcao:\n");
		printf("\nClientes\n");
		printf("Fornecedores\n");
		printf("Encomendas\n");
		printf("Sair\n");
		scanf(" %c", &opcao);
		
		printf(" %c", opcao);
		
		switch(opcao){
			
			case 'C':
			case 'c':
				
				printf("\nOpção CLIENTES selecionada\n");
				break;
			
			case 'F':
			case 'f':
				
				printf("\nOpção FORNECEDORES selecionada\n");
				break;
			
			case 'E':
			case 'e':
				
				printf("\nOpção ENCOMENDAS selecionada\n");
				break;
				
			case 'S':
			case 's':
				
				aux = 2;
				break;
				
		}while(aux == 1);
		
	}
	
}
