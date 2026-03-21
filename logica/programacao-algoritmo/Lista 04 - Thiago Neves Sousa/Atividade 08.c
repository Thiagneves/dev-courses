#include <stdio.h>

#define text1 "--- Tabela de Funcionarios ---"

int main(){

	float salario = 0;
	char estado;

	printf("Qual o salario do funcionario? ");
	scanf("%f", &salario);
	
	printf("Qual o estado civil do funcionario? ");
	scanf(" %c", &estado); // " %c" o espaço é para ignorar o [ENTER] clicado anteriormente
	
	int verificador = (estado == 's' || estado == 'S' || estado == 'c' || estado == 'C');
	
	if(verificador){
		
		printf("\n%s\n", text1);
		
		printf("\nEstado Civil: %s\n",
			(estado == 's' || estado == 'S') ? "Solteiro" : "Casado");
		
		printf("\nSalario Bruto: %.2f", salario);
		
		printf("\nSalario Liquido %.2f",
			salario * ((estado == 's' || estado == 'S') ? 0.9 : 0.91));
		
	}
	
	else{
		printf("\nResposta invalida, favor digitar outra resposta !\n");
	}

	return 0;
}
