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

void somardasl(int m[][3]){
	
	int somaL1 = 0, 
		somaL2 = 0;
	
	for(int i = 0; i < 3; i++){
		
		somaL1 += m[0][i];
	}
	
	for(int i = 0; i < 3; i++){
		
		somaL2 += m[1][i];
	}
	
	printf("Soma da Linha 1: %d\n", somaL1);
	printf("Soma da Linha 2: %d\n", somaL2);
}

int main(){
	
	int matriz[2][3];
	
	printf("Digite os valores da matriz: \n");
	preencher(matriz, 2);
	imprimir(matriz, 2);
	somardasl(matriz);
	
}