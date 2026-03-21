#include <stdio.h>

int preencher(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		printf("Digite um numero: ");
		scanf(" %d", &num[i]);
	}
}

int somar(int num[], int tamanho){
	
	int somar = 0;
	
	for(int i = 0; i < tamanho; i++){
		
		somar += num[i];
	}
	
	return somar;
}

int main(){
	
	int num[3];
	
	preencher(num, 3);
	
	printf("A soma dos 3 numeros eh: %d", somar(num, 3));
	
}