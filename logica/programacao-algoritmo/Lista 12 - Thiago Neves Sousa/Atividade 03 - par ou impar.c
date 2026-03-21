#include <stdio.h>

void ehPar(int x){
	
	int resultado = x % 2 == 0;
	
	if(resultado == 1){
		
		printf("O numero e par");
	}
	else{
		
		printf("O numero e impar");
	}
}

int main(){
	
	int num;
	
	printf("Escreva um numero: ");
	scanf(" %d", &num);
	
	ehPar(num);
}