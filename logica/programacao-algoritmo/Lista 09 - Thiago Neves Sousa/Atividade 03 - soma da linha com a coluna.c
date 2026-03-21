#include <stdio.h>

void preencher(int m[][3], int linha){
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			m[i][j] = i+j;
		}
	}
}

int imprimir(int m[][3], int linha){
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}

int main(){
	
	int matriz[3][3];
	
	preencher(matriz, 3);
	imprimir(matriz, 3);
	
}