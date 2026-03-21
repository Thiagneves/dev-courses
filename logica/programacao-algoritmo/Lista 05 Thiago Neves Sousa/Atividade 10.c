#include <stdio.h>

int main(){
	
	int produto = 1, aux;
	
	while(aux <= 15){
		
		produto *= aux;
		aux += 2;
	}
	
	printf("O produto dos inteiros impares de 1 a 15 com While e: %d", produto);
	
	int produto2 = 1, aux2;
	
	for(aux2 = 1; aux2 <= 15; aux2 += 2){
		
		produto2 *= aux2;
	}
	
	printf("\nO produto dos inteiros impares de 1 a 15 com FOR e: %d", produto2);
	
	return 0;
}
