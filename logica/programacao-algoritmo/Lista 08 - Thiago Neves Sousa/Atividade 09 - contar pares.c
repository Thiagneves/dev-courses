#include <stdio.h>

int preencher(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		printf("Digite um numero: ");
		scanf(" %d", &num[i]);
	}
}

int contarPares(int num[], int tamanho){
	
	int j = 0;
	
	for(int i = 0; i < tamanho; i++){
		
		if(num[i] % 2 == 0){
			
			j++;
		}
	}
	
	printf("Tem %d numeros pares.", j);
}

int main(){
	
	int num[3];
	
	preencher(num, 3);
	contarPares(num, 3);
	                    
}