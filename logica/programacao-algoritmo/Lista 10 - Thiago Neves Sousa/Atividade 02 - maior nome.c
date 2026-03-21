#include <stdio.h>
#include <string.h>

int main(){
	
	char nome1[20], nome2[20];
	
	printf("Escreva um nome: ");
	fgets(nome1, 20, stdin);
	
	printf("Escreva outro nome: ");
	fgets(nome2, 20, stdin);
	
	if(strlen(nome1) > strlen(nome2)){
		
		printf("%s Maior!", nome1);
	}
	else if(strlen(nome1) < strlen(nome2)){
		
		printf("%sMaior!", nome2);
	}
	else{
		
		printf("Nomes tem a mesma quantidade de caractere!");
	}
}

