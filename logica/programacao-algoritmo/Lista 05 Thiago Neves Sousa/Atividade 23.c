#include <stdio.h>

int main(){
	
	int num = 69, num2;
	char escolha;
	int aux = 0;
	
	do{
		do{
			printf("Escolha um numero: ");
			scanf(" %d", &num2);
		
			if(num2 > num){
			
				printf("\nQuase um pouco menos\n");
			}
		
			else if(num2 < num){
				printf("\nQuase um pouco mais\n");
			}
		}while(num2 != num);
	
	
		printf("\nDeseja alterar o valor escolhido pelo computador? ");
		scanf(" %c", &escolha);
	
		switch (escolha){
			case 's':
			case 'S':
			
				aux = 1;
				
			break;
		}
		
		if(aux == 1){
			printf("\nEscolha o numero que o usuario devera descobrir: ");
			scanf(" %d", &num);
		}
		
	}while(aux == 1);
	
	printf("FIM !");
	
	return 0;
}
