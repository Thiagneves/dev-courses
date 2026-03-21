#include <stdio.h>

int main(){
	
	int num, aux = -1;
	float media;
	
	do{
		printf("Escreva um numero: ");
		scanf(" %d", &num);
		
		media += num;
		
		aux++;
		
	}while(num != 0);
	
	media = media / aux;
	
	printf("Media e: %.2f", media);
	
	return 0;
}
