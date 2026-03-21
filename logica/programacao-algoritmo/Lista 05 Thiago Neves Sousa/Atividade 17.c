#include <stdio.h>

int main(){
	
	int num1, num2, aux;
	
	printf("Escreva um numero: ");
	scanf(" %d", &num1);
	
	printf("Escreva outro numero: ");
	scanf(" %d", &num2);
	
	if(num2 < num1){
		
		aux = num1;
		num1 = num2;
		num2 = aux;
	}
	
	printf("Entre %d e %d tem:\n\n", num1, num2);
	
	do{
		printf(" %d\n", num1);
		
		num1++;
		
	}while(num1 <= num2);
	
	return 0;
}
