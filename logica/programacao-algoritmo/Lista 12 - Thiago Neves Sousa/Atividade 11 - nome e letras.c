#include <stdio.h>

int main(){
	
	char nome[20];
	
	printf("Escreva o seu nome: ");
	fgets(nome, 20, stdin);
	
	int aux = strlen(nome),
		numLetras;
	
	for(int i = 0; i < aux; i++){
		
		if(nome[i] != ' ' && nome[i] != '\n'){
			numLetras++;	
		}
	}
	
	printf("\nNome digitado: %s", nome);
	printf("Quantidade de letras: %d\n", numLetras);
	printf("Primeira letra: %c", nome[0]);
}