#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[20];
	
	printf("Escreva uma palavra: ");
	fgets(nome, 20, stdin);
	
	for(int i = 0; i < strlen(nome)-1; i++){
		
		printf("indice %d: %c\n", i, nome[i]);
	}
	
}