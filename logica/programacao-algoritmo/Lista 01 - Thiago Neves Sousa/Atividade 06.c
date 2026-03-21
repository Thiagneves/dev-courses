#include <stdio.h>

int main(){
	
	float preco, desconto, precoTotal;
	
	printf("Qual o preco do produto? ");
	scanf("%f", &preco);
	
	printf("Recebeu quanto de desconto? ");
	scanf("%f", &desconto);
	
	precoTotal = preco - (desconto/100)*preco;
	
	printf("O valor que voce ira pagar e: %.2f", precoTotal);
	
	return 0;
}
