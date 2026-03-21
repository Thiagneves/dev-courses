#include <stdio.h>
#include <string.h>

int main(){
	
	char frase[50] = {" "};
	
	printf("Escreva uma frase: ");
	fgets(frase, 50, stdin);
	
	frase[strcspn(frase, "\n")] = '\0';
	
	int j = strlen(frase), 
		aux = 1;
	
	for(int i = 0; i < j; i++){
		
		if(frase[i] == ' '){
			
			aux++;
		}
	}
	
	printf("%s -> %d palavras", frase, aux);
	
	return 0;
}