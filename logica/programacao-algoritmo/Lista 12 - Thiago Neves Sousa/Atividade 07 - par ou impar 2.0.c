#include <stdio.h>

void preencher(int x[], int quant){
	
	for(int i = 0; i < quant; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", &x[i]);
	}
	puts(" ");
}

void verificador(int x[], int quant){
	
	for(int i = 0; i < quant; i++){
		
		if(x[i] % 2 == 0){
			
			printf("%d eh par\n", x[i]);
		}
		else{
			
			printf("%d nao eh par\n", x[i]);
		}
	}
}

int main(){
	
	int num[10];
	
	preencher(num, 10);
	verificador(num, 10);
	
	return 0;
}