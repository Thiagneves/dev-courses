#include <stdio.h>

void calcularDobro(int x){
	
	printf("%d x 2 = %d", x, x*2);
	
}

int main(){
	
	int num;
	
	printf("Escreva um numero: ");
	scanf(" %d", &num);
	
	calcularDobro(num);
}
