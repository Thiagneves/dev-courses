#include <stdio.h>

void quantLetra(char *nome, char caracter){
	
	int j = strlen(nome), 
		aux = 0;
	
	for(int i = 0; i < j; i++){
		
		if(nome[i] == caracter){
			
			aux++;
		}
	}
	
	printf("\nPalavra: %s\n", nome);
	printf("Quantidade que %c pararece: %d", caracter, aux);
}

int main(){
	
	char palavra[20], opcao;
	
	printf("Escreva uma palavra: ");
	scanf("%20[^\n]", palavra);
	
	printf("Escolha uma letra escrita: ");
	scanf(" %c", &opcao);
	
	quantLetra(palavra, opcao);
	
	return 0;
}