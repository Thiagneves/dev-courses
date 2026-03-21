#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[5][10];
	char (*p)[10] = nome;
	
	for(int i = 0; i < 5; i++){
		
		printf("Escreva nome 0%d: ", i+1);
		scanf("%s", *(p+i));	
	}
	
	puts(" ");
	
	for(int i = 0; i < 5; i++){
		
		int j = strlen(nome[i]);
		
		printf("%s -> %d letras\n", *(p + i), j);
	}
	
	return 0;
}