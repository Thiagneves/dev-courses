#include <stdio.h>

int main(){
	
	int num1 = 0, num2 = 0;
	
	printf("Digite um numero: ");
	scanf(" %d", &num1);
	
	printf("Digite outro numero: ");
	scanf(" %d", &num2);
	
	char operador;
	
	printf("Escolha um operador matematico (+, -, *, /): ");
	scanf(" %c", &operador);
	
	if(operador == '+'){
		printf("%d + %d = %d", num1, num2, num1+num2);
	}
	
	else if(operador == '-'){
		printf("%d - %d = %d", num1, num2, num1-num2);
	}
	
	else if(operador == '*'){
		printf("%d * %d = %d", num1, num2, num1*num2);
	}
	
	else if(operador == '/'){
		
		if (num2 != 0){
			printf("%d / %d = %.1f", num1, num2, (float)num1 / num2);
		}
		
		else{
			printf("Erro: divisao por zero!");
		}
	}
	
	else{
		printf("Operador Invalido!");
	}
		
	
	return 0;
}

