#include <stdio.h>

int main(){
	
	float saldo = 100.00, deposito, saque;
	int opcao, aux = 0;
	char caractere;
	
	printf("Bem vindo ao IF Bank\n");
	
	do{
		printf("\nEscolha uma Alternativa: \n");
		
		printf("\n 1 - Ver Saldo:");
		printf("\n 2 - Realizar Deposito:");
		printf("\n 3 - Realizar saque:\n");
		
		printf("\n 0 - Sair: \n");
		
		printf("\nEscolha uma opcao: ");
		scanf(" %d", &opcao);
		
		if(opcao == 1){
			
			printf("\nSeu saldo e: R$ %.2f\n", saldo);	
		}
		
		else if(opcao == 2){
			
			printf("\nDeposito:\nInsira o valor: ");
			scanf(" %f", &deposito);
			
			saldo = saldo + deposito;
		}
		
		else if(opcao == 3){
			
			printf("\nSaque:\nInsira o valor: ");
			scanf(" %f", &saque);
			
			saldo = saldo - saque;
		}
		
		else if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 0){
			
			printf("\nVoce escolheu uma opcao invalida, vamos tentar novamente:\n\n");
		} 
		
		if(opcao == 1 || opcao == 2 || opcao == 3){
			
			printf("\nDeseja continuar? ");
			scanf(" %c", &caractere);
			
			if(caractere == 's' || caractere == 'S'){
				
				aux = 1;
			}
			
			else{
				
				opcao = 0;
			}
			
			if(opcao == 0){
			
			printf("\nTenha um bom dia!");
			}
		}
		
	}while(opcao != 0 || aux == 1);
	
	return 0;
}
