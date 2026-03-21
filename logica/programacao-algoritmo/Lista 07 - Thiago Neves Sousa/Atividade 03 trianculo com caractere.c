#include <stdio.h>

int triangulo(num, aux, i){
	
	while(aux <= num){
		
		i = 1;
		
		while(i <= aux){
			printf("*");
			i++;
		}
		
		printf("\n");
		aux++;
	}
	
}

int main(){
	
	int num, aux = 1, i;
	
	printf("Escreva o valor do lado do triangulo: ");
	scanf(" %d", &num);
	
	triangulo(num, aux, i);
	
	return 0;
}
