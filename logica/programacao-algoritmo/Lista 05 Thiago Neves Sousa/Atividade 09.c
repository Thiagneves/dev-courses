#include <stdio.h>

int main(){
	
	int soma = 0, aux;
	
	for(aux = 2; aux <= 30; aux += 2){
		
		soma += aux;
	}
	
	printf("\nA soma dos pares de 2 a 30 com FOR e: %d", soma);
	
	int soma2 = 0, aux2;
	
	while(aux2 <= 30){
		
		soma2 += aux2;
		aux2 += 2;
	}
	
	printf("\nA soma dos pares de 2 a 30 com While e: %d", soma2);
	
	return 0;
}
