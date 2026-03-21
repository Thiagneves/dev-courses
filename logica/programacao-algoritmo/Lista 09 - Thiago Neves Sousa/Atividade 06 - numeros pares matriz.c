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

void npares(int m[][3], int linha){
	
	int par = 0;
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			if(m[i][j] % 2 == 0){
				
				par++;
			}
		}
	}
	
	printf("A matriz tem %d numeros pares", par);
}

int main(){
	
	int matriz[2][3];
	
	printf("Digite os valores da matriz: \n");
	preencher(matriz, 2);
	imprimir(matriz, 2);
	npares(matriz, 2);
	
}