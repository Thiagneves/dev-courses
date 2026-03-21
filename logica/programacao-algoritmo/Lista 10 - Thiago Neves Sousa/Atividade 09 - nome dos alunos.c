#include <stdio.h>
#include <string.h>

int main(){
	
	char nomes[5][50];
	
	for(int i=0; i<5; i++){
		
		printf("Escreva o nome do Aluno 0%d: ", i+1);
		fgets(nomes[i], 50, stdin);
	}
	puts(" ");
	for(int i=4; i>=0; i--){
		
		printf("%s", nomes[i]);
	}
}