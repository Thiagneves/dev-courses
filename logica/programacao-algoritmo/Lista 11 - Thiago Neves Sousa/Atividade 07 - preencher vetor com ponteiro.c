#include <stdio.h>

void preencher(int *num){
	
	for(int i = 0; i < 3; i++){
		
		printf("Valor 0%d: ", i+1);
		scanf(" %d", (num + i));
	}
	
	puts(" ");
}

void imprimir(int *num){
	
	for(int i = 0; i < 3; i++){
		
		printf("%d\n", num[i]);
	}
}

int main(){
	
	int x[3];
	
	preencher(x);
	imprimir(x);
	
	return 0;
}