#include <stdio.h>

int preencher(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		printf("Digite um numero: ");
		scanf(" %d", &num[i]);
	}
	printf("\n");
}

int exibir(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		printf("%d ", num[i]);
	}
	printf("\n");
}

int somar(int num[], int tamanho){
	
	int somar = 0;
	
	for(int i = 0; i < tamanho; i++){
		
		somar += num[i];
	}
	printf("\n");
	
	return somar;
}

int maior(int num[], int tamanho){
	
	int maior = 0;
	
	for(int i = 0; i < tamanho; i++){
		
		if(num[i] > maior){
			
			maior = num[i];
		}
	}
	
	printf("O maior dos 3 numeros eh: %d\n", maior);
	
}
int contarPares(int num[], int tamanho){
	
	int j = 0;
	
	for(int i = 0; i < tamanho; i++){
		
		if(num[i] % 2 == 0){
			
			j++;
		}
	}
	
	printf("Tem %d numeros pares.\n", j);
}

int main(){
	
	int num[3] = {0, 0, 0};
	int opcao;
	
	do{

		printf("Escolha uma alternativa:\n\n");
		printf("1 - Preencher:\n");
		printf("2 - Exibir:\n");
		printf("3 - Somar:\n");
		printf("4 - Maior:\n");
		printf("5 - Contar pares:\n");
		printf("0 - Sair\n\n");
		scanf(" %d", &opcao);
		
		if(opcao == 1){
		
			preencher(num, 3);
		}
		else if(opcao == 2){
		
			exibir(num, 3);
		}
		else if(opcao == 3){
		
			printf("A soma dos 3 numeros eh: %d\n", somar(num, 3));
		}
		else if(opcao == 4){
		
			maior(num, 3);
		}
		else if(opcao == 5){
		
			contarPares(num, 3);
		}
		
	}while(opcao != 0);
	
	return 0;
}