#include <stdio.h>

int main(){
	
	int num1, num2;
	char operador;
	
	printf("Digite uma expressao matematica: ");
	scanf("%d %c %d", &num1, &operador, &num2);
	
	switch(operador){
		
		case '+':
			
			printf("%d + %d = %d", num1, num2, num1+num2);
		
		break;
			
		case '-':
			
			printf("%d - %d = %d", num1, num2, num1-num2);		
		
		break;
		
		case '*':
			
			printf("%d * %d = %d", num1, num2, num1*num2);
			
		break;
			
		case '/':
			
			if(operador != 0){
				
				printf("%d / %d = %.1f", num1, num2, (float)num1/num2);
			}
			
			else{
				printf("Erro: divisao por zero!");
			}
			
		break;
		
		default:
			
			printf("Erro 404");
	}
	
	
	
	return 0;
}

