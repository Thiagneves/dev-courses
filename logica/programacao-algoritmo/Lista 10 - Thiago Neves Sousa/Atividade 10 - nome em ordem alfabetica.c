#include <stdio.h>
#include <string.h>

int main(){
	
	char nome[3][50], aux[50];
	
	for(int i=0; i<3; i++){
		
		printf("Escreva o nome do Aluno 0%d: ", i+1);
		fgets(nome[i], 50, stdin);
	}
	
	if(strcmp(nome[1], nome[0]) < 0){
		
		strcpy(aux, nome[0]);
		strcpy(nome[0], nome[1]);
		strcpy(nome[1], aux);
		
	}
	
	if(strcmp(nome[2], nome[0]) < 0){
		
		strcpy(aux, nome[0]);
		strcpy(nome[0], nome[2]);
		strcpy(nome[2], aux);
		
	}
	
	if(strcmp(nome[2], nome[1]) < 0){
		
		strcpy(aux, nome[1]);
		strcpy(nome[1], nome[2]);
		strcpy(nome[2], aux);
	}
	
	for(int i=0; i<3; i++){
		
		printf("%s", nome[i]);
	}
	
}