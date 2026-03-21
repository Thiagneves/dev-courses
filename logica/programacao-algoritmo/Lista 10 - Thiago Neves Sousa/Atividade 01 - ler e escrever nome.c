#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[50];
	
	printf("Escreva seu nome: ");
	scanf("%[^\n]", nome);
	//fgets(nome, 50, stdin);
	
	printf("Seu nome eh: %s", nome);
}