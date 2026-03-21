#include <stdio.h>
#include <math.h>

int main(){
	
	int num1, num2;
	double resultado;
	
	printf("Escreva um numero: ");
	scanf(" %d", &num1);
	
	printf("Escreva outro numero: ");
	scanf(" %d", &num2);
	
	resultado = pow(num1, num2);
	
	printf("O resultado de %d elevado a %d e: %.0f", num1, num2, resultado);
	
	return 0;
}
