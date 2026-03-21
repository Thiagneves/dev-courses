#include <stdio.h>

int main(){
	
	float valorProduto, ValorPago;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valorProduto);
	
	printf("Digite o valor pago: ");
	scanf("%f", &ValorPago);
	
	printf("O troco deve ser de: %.2f", ValorPago-valorProduto);
	
	return 0;
	
}
