#include <stdio.h>

int main(){
	
	char nome[10] = {'c', 'a', 'd', 'e', 'r', 'n', 'o'}, 
		*p = nome;
	
	int j = strlen(nome);
	
	for(int i = 0; i < j; i++){
		
		printf("%c ", *(p+i));
	}
}