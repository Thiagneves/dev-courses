#include <stdio.h>

#define text1 "--- Tabela de Funcionarios ---"

int main(){

	float salario = 0;
	char estado;

	printf("Qual o salario do funcionario? ");
	scanf("%f", &salario);
	
	printf("Qual o estado civil do funcionario? ");
	scanf("%s", &estado);
	
	if(estado == 's' || estado == 'S'){
		
		printf("\n%s\n", text1);
		printf("\nEstado Civil: Solteiro\n");
		
		printf("\nSalario Bruto: %.2f", salario);
		salario = (salario - salario * 0.10);
		
		printf("\nSalario Liquido: %.2f", salario);
		
	}
	
	else if(estado == 'c' || estado == 'C'){
		
		printf("\n%s\n", text1);
		printf("\nEstado Civil: Casado\n");
		
		printf("\nSalario Bruto: %.2f", salario);
		salario = (salario - salario * 0.09);
		
		printf("\nSalario Liquido: %.2f", salario);
		
	}
	
	else{
		printf("\nResposta invalida, favor digitar outra resposta !\n");
	}

	return 0;
}
