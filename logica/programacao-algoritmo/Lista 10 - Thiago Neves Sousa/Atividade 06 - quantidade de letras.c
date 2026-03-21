#include <stdio.h>
#include <stdio.h>

int main(){
	
	char frase[50];
	int j = 0, aux = 0;
	
	printf("Escreva uma pequena frase: ");
	scanf("%50[^\n]", frase);
	
	aux = strlen(frase);
	
	for(int i = 0; i < aux; i++){
	
		if(frase[i] != ' ' && frase[i] != '\n'){
			j++;
		}
	}
	
	printf("%s -> %d Letras", frase, j);
}