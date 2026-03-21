#include <stdio.h>

int preencher(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		printf("Digite um numero: ");
		scanf(" %d", &num[i]);
	}
}

int exibir(int num[], int tamanho){
	
	for(int i = 0; i < tamanho; i++){
		
		printf("%d ", num[i]);
	}
}

int main(){
	
	int num[3];
	
	preencher(num, 3);
	exibir(num, 3);
	
}