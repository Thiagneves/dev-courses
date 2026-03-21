#include <stdio.h>

int main(){
	
	int num[5], 
		*p = num;
	
	for(int i = 0; i < 5; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", (p+i));
	}
	
	printf("\nNumeros digitados: ");
	
	for(int i = 0; i < 5; i++){
		
		printf("%d ", num[i]);
	}
	
	return 0;
}