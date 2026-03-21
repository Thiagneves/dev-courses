#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[20];
	
	printf("Escreva uma palavra: ");
	fgets(palavra, 20, stdin);
	
	printf("[%s]\n", palavra);
	
	palavra[strcspn(palavra, "\n")] = '\0';
	
	printf("[%s]\n", palavra);
	
	return 0;
}