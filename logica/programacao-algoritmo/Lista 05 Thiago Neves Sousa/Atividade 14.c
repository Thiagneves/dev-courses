#include <stdio.h>

int main(){
	
	int produto, quantidade;
	float preco, total = 0;
	char continua;
	
	do{
		printf("Qual o numero do produto: ");
	scanf(" %d", &produto);
	
	printf("Qual a quantidade vendida: ");
	scanf(" %d", &quantidade);
	
	switch(produto){
		
		case 1:
			preco = 2.98;
			break;
		
		case 2:
			preco = 4.5;
			break;
			
		case 3:
			preco = 9.98;
			break;
			
		case 4:
			preco = 4.49;
			break;
			
		case 5:
			preco = 6.87;
			break;
	}
	
	total += preco * quantidade;
	
	printf("\nDeseja registrar outra venda ? (s/n) ");
	scanf(" %c", &continua);
	
	} while (continua == 's' || continua == 'S');
	
	printf("\nTotal vendido no dia: R$ %.2f", total);
	
	return 0;
}
