#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[20];
	
	printf("Escreva uma palavra: ");
	fgets(nome, 20, stdin);
	
	for(int i=0; i<strlen(nome); i++){
		
		if(nome[i] >= 'a' && nome[i] <= 'z'){
			nome[i] -= 32;
		}
	}
	
	printf("%s", nome);
}