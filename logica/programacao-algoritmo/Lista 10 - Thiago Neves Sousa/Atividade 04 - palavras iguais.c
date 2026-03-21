#include <stdio.h>
#include <string.h>

int main(){
	
	char nome1[20], nome2[20];
	
	printf("Escreva um nome: ");
	fgets(nome1, 20, stdin);
	
	printf("Escreva outro nome: ");
	fgets(nome2, 20, stdin);
	
	int comparacao = strcmp(nome1, nome2);
	
	printf("Se o resultado for 0, sao iguais. Caso contrario, sao diferentes. = %d", comparacao);
}