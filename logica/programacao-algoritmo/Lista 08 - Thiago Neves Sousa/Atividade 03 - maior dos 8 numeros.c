#include <stdio.h>

int maior(int numero[], int tamanho){
	
	int maior = 0;
	
	for(int i = 0; i < 8; i++){
		
		while(numero[i] > maior){
			
			maior = numero[i];
		}
		
	}
	
	printf("%d e o maior numero", maior);
}

int main(){
	
	int num[8];
	
	for(int i = 0; i < 8; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", &num[i]);
	}
	
	maior(num, 8);
}