#include <stdio.h>

void mediaVetor(int x[], int quant){
	
	float media;
	
	for(int i = 0; i < quant; i++){
		
		printf("Escreva um numero: ");
		scanf(" %d", &x[i]);
		
		media += x[i];
	}
	
	printf("A media do vetor e: %.2f", media / quant);
}

int main(){
	
	int num[3];
	
	mediaVetor(num, 3);
}