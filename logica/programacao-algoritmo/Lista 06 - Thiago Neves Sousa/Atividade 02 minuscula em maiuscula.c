#include <stdio.h>

char digito(char opcao){
	
	if(opcao >= 95 && opcao <= 122){
		
		opcao = opcao - 32;
		
		printf("%c", opcao);
	}
	
	else if(opcao >= 65 && opcao <= 90){
		
		printf("%c", opcao);
	}
	
	else{
		
		printf("Voce escolheu uma opcao invalida!");
	}
}

int main(){
	
	char letra;
	
	printf("Escreva uma letra: ");
	scanf(" %c", &letra);
	
	digito(letra);
	
	return 0;
}