#include <stdio.h>

int main(){
	
	int num, aux = 1, i;
	
	printf("Escreva um numero: ");
	scanf(" %d", &num);
	
	while(aux <= num){
		
		i = 1;
		
		while(i <= aux){
			printf("*");
			i++;
		}
		
		printf("\n");
		aux++;
	}
	
	return 0;
}
