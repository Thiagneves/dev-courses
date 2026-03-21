#include <stdio.h>

int main() {
    float saldo = 0.00, deposito, saque;
    int opcao;
    char caractere;
    int aux = 1; 

    printf("Bem-vindo ao IF Bank\n");

    do {
        printf("\nEscolha uma Alternativa:\n");
        printf("1 - Ver Saldo\n");
        printf("2 - Realizar Deposito\n");
        printf("3 - Realizar Saque\n");
        printf("0 - Sair\n");

        printf("\nEscolha uma opcao: ");
        scanf(" %d", &opcao);

        switch(opcao){
			
			case 1:
				
				printf("\nSeu saldo e: R$ %.2f", saldo);
				break;
			
			case 2:
				
				printf("\nQual o valor do deposito? ");
				scanf(" %f", &deposito);
				
				saldo += deposito;		
				break;
			
			case 3:
				
				printf("\nQual o valor do saque? ");
				scanf(" %f", &saque);
				
				if(saque > 500){
					
					printf("\nErro! Nao e possivel saque superior a R$ 500,00");
				}
				
				else if(saque > saldo){
					
					printf("Saldo insuficiente!");
				}
				
				else{
					
					saldo -= saque;
					printf("\nSaque de %.2f realizado com sucesso!", saque);
				}
				
				
				break;
			 
			 case 0:
			 	
			 	printf("\nFim!");
				break;
			
			default:
				
				printf("Erro! Voce escolheu uma opcao invalida!");
				break;
		}
		
		if(aux = 1){
			
			printf("\nDeseja continuar? (s/n)\n");
			scanf(" %c", &caractere);
			
			switch(caractere){
				
				case 's':
				case 'S':
					
					aux = 2;
					break;
			}
		}
        
    } while (aux == 2);

    return 0;
}

