#include <stdio.h>

int main(){
	
	int num[6], soma;
	
	for(int i = 0; i < 6; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", &num[i]);
		
		soma += num[i];
	}
	
	printf("A soma dos 6 numeros e: %d", soma);
	
	return 0;
}