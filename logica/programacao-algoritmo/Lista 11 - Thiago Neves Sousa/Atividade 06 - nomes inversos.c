#include <stdio.h>

int main(){
	
	char nome[5][20];
	
	char (*p)[20] = nome;
	
	for(int i = 0; i < 5; i++){
		
		printf("Escreva nome 0%d: ", i+1);
		scanf("%s", *(p+i));
	}
	
	puts(" ");
	
	for(int i = 0; i < 5; i++){
		
		int j = strlen(nome[i])-1;
		
		for(int x = 0; x <= j; j--){
			
			printf("%c", nome[i][j]);
		}
		puts(" ");
	}
	
	return 0;
}