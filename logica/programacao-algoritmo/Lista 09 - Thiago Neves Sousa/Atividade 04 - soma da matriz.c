#include <stdio.h>

void preencher(int m[][3], int linha){
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);
			
		}
	}
}

void imprimir(int m[][3], int linha){
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

void soma(int m[][3], int linha){
	
	int soma = 0;
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			soma += m[i][j];
			
		}
	}
	
	printf("A soma de todos os valores da matriz eh: %d", soma);
}

int main(){
	
	int matriz[2][3];
	
	printf("Digite os valores da matriz: \n");
	preencher(matriz, 2);
	imprimir(matriz, 2);
	soma(matriz, 2);
	
}