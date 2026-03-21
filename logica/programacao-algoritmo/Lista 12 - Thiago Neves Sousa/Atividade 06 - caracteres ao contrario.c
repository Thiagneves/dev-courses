#include <stdio.h>

void preencher(char tecla[]){
	
	for(int i = 0; i < 5; i++){
		printf("Aperte uma caracter: ");
		scanf(" %c", &tecla[i]);
	}
	puts(" ");
}

void imprimir(char tecla[]){
	
	for(int i = 4; i >= 0; i--){
		
		printf("%c\n", tecla[i]);
	}
}

int main(){
	
	char tecla[5];
	
	preencher(tecla);
	imprimir(tecla);
	
	return 0;
}