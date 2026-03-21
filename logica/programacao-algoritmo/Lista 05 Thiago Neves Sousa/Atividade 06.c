#include <stdio.h>

int main(){
	
	int num, num2, soma = 0;
	
	printf("Escrava a quantidade de numeros que serao somados: ");
	scanf(" %d", &num);
	
	while(num > 0){
		
		printf("\nDigite o numero %d da sequencia: ", num);
		scanf(" %d", &num2);
		
		soma = soma + num2;
		num--;
	}
	
	printf("\nA soma e: %d", soma);
	
	return 0;
}
