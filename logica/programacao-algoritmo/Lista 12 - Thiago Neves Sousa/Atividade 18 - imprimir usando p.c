#include <stdio.h>

int main(){
	
	int num[5],
		*p;
	
		p = num;
		
	for(int i = 0; i < 5; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", &num[i]);
		
	}
	
	printf("Numeros escritos: ");
	
	for(int i = 0; i < 5; i++){
		
		printf("%d; ", *(p+i));
	}
}