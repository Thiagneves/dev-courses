#include <stdio.h>

void vogais(char nome[]){
	
	int j = strlen(nome),
		numVogais = 0;
		
	char vogais[10] = {65, 69, 73, 79, 85, 97, 101, 105, 111, 117};
	
	for(int i = 0; i < j; i++){
		
		for(int z = 0; z < 10; z++){
			
			if(nome[i] == vogais[z]){
				numVogais++;
			}
		}
	}
	
	printf("Seu nome tem %d vogais", numVogais);	
}

int main(){
	
	char nome[20];
	
	printf("Escreva o seu nome: ");
	fgets(nome, 20, stdin);
	
	vogais(nome);
	
	return 0;
}