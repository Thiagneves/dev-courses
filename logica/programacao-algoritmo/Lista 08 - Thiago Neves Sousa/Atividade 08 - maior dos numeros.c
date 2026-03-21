#include <stdio.h>

int preencher(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		printf("Digite um numero: ");
		scanf(" %d", &num[i]);
	}
}

int maior(int num[], int tamanho){
	
	int maior = 0;
	
	for(int i = 0; i < tamanho; i++){
		
		if(num[i] > maior){
			
			maior = num[i];
		}
	}
	
	printf("O maior dos 3 numeros eh: %d", maior);
	
}

int main(){
	
	int num[3];
	
	preencher(num, 3);
	maior(num, 3);

	
}