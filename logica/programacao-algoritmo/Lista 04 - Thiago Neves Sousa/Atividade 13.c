#include <stdio.h>

#define intro "Vamos determinar o tipo do triangulo"

int main(){
	
	float num1, num2, num3;
	
	printf("%s\n", intro);
	
	printf("\nDigite o valor do lado 1 AB: ");
	scanf("%f", &num1);
	
	printf("Digite o valor do lado 2 BC: ");
	scanf("%f", &num2);
	
	printf("Digite o valor do lado 3 AC: ");
	scanf("%f", &num3);
	
	if (num1 == num2 && num1 == num3 && num2 == num3){
		
		printf("\nTrata-se de um triangulo Equilatero, todos os lados iguais");
	}
	
	else if (num1 != num2 && num1 != num3 && num2 != num3){
		
		printf("\nTrata-se de um triangulo Escaleno, todos os lados diferentes");
	}
	
	else {
		
		printf("\nTrata-se de um triangulo Isosceles, dois lados iguais");
	}
	
	printf("\nSua area: %.2f", (num1 + num2 + num3)/2);
	
	return 0;
}
