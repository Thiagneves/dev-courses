#include <stdio.h>

int main(){
	
	int num, aux, i = 1;
	
	while(i <= 10){
		
		printf("Escreva um numero: ");
		scanf("%d", &num);
		
		if(num <= 0){
			aux++;
		}
		
		i++;
	}
	
	printf("\nVoce escrever %d numeros menor ou igual a 0", aux);
	
	return 0;
}
