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

void maior(int m[][3], int linha){
	
	int maior = 0;
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			if(maior < m[i][j]){
				maior = m[i][j];
			}
		}
	}
	
	printf("O maior numero da matriz eh: %d", maior);
}

int main(){
	
	int matriz[2][3];
	
	printf("Digite os valores da matriz: \n");
	preencher(matriz, 2);
	imprimir(matriz, 2);
	maior(matriz, 2);
	
}