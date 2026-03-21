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

void transposta(int m[][3], int m2[][2]){
	
	for(int i = 0; i < 2; i++){
		
		for(int j = 0; j < 3; j++){
			
			m2[j][i] = m[i][j];
		}
	}
	
	printf("\n");
}

void imprimirt(int m[][2], int linha){
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 2; j++){
			
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	
	int matriz[2][3];
	int matriz2[3][2];
	
	printf("Digite os valores da matriz: \n");
	preencher(matriz, 2);
	imprimir(matriz, 2);
	transposta(matriz, matriz2);
	imprimirt(matriz2, 3);
	
	
}