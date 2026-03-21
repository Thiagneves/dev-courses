#include <stdio.h>

int digito(char opcao){
	
	return (opcao >= '0' && opcao <= '9');
}

int main(){
	
	char opcao;
	
	printf("Digite uma tecla: ");
	scanf(" %c", &opcao);
	
	printf("%d", digito(opcao));
	
}