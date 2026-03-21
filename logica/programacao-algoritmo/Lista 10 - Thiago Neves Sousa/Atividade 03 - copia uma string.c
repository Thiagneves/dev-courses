#include <stdio.h>
#include <string.h>

int main(){
	
	char original[20], copia[20];
	
	printf("Escreva um nome: ");
	
	fgets(original, 20, stdin);
	
	strcpy(copia, original);
	
	printf("%s%s", copia, original);
}