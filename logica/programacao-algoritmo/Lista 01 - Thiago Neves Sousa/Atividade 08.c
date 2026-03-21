#include <stdio.h>

int main(){
	
	int num1, aux;
	
	printf("Escreva um numero inteiro possitivo: ");
	scanf("%d", &num1);
	
	for (aux = num1; aux >= 0; aux--){
		printf("%d ", aux);
	}
	
	return 0;
}
