#include <stdio.h>

int par(int numero[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		if(numero[i] % 2 == 0){
			printf("%d ", numero[i]);
		} 
	}
	
	printf("sao par");
}

int main(){
	
	int num[10];
	
	for(int i = 0; i < 10; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", &num[i]); 
	}
	
	par(num, 10);
}