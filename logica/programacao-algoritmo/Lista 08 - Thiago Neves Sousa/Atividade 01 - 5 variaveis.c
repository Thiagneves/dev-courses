#include <stdio.h>

int main(){
	
	int num[5];
	
	for(int i = 0; i < 5; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", &num[i]);
	}
	
	for(int i = 0; i < 5; i++){
		
		printf("%d ", num[i]);
	}
	
	return 0;
}