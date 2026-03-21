#include <stdio.h>

int main(){
	
	int idade;
	
	printf("Qual a sua idade? ");
	scanf("%d", &idade);
	
	printf("\nVoce tem %d anos de idade", idade);
	
	if (idade < 12){
		
		printf("\nClassificacao - Crianca");
		
	}
	
	else if (idade >= 12 && idade <= 17){
		
		printf("\nClassificacao - Adolescente");
		
	}
	
	else if (idade >= 18 && idade <= 59){
		
		printf("\nClassificacao - Adulto");
		
	}
	
	else if (idade >= 60){
		
		printf("\nClassificacao - Idoso");
		
	}
	
	return 0;
}
