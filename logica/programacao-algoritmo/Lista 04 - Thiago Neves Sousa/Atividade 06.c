#include <stdio.h>

int main(){

	float salario = 0;
	
	printf("Qual seu salario? ");
	scanf("%f", &salario);
	
	if(salario < 1000 && salario > 0){
		
		printf("\nSalario Bruto: %.2f", salario);
		
		salario = (salario - salario * 0.05);
		
		printf("\nSalario Liquido: %.2f", salario);
	}
	
	else if(salario >= 1000 && salario < 5000){
		
		printf("\nSalario Bruto: %.2f", salario);
		
		salario = (salario - salario * 0.11);
		
		printf("\nSalario Liquido: %.2f", salario);
	}
	
	else if(salario >= 5000){
		
		printf("\nSalario Bruto: %.2f", salario);
		
		salario = (salario - salario * 0.25);
		
		printf("\nSalario Liquido: %.2f", salario);
	}
	
	else{
		printf("Favor digitar um numero possitivo !");
	}

	return 0;
}
