#include <stdio.h>

int main(){
	
	int num1, num2;
	
	printf("Escreva um numero inteiro: ");
	scanf("%d", &num1);
	
	printf("\nEscreva outro numero inteiro: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("\n%d %d", num1, num2);
	}
	
	else{
		printf("\n%d %d", num2, num1);
	}
	
	return 0;
}

