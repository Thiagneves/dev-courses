#include <stdio.h>

int main(){
	
	int numero;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &numero);
	
	printf("Seu antecessor e: %d \n", numero-1);
	printf("Seu sucessor e: %d",      numero+1);
	
	return 0;
}
