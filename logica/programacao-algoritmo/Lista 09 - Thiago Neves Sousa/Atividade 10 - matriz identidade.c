#include <stdio.h>

void preencher(int m[][3], int linha){
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			if(i == j){
				m[i][j] = 1;
			}
			else{
				m[i][j] = 0;
			}
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

int main(){
	
	int matriz[3][3];
	
	printf("Digite os valores da matriz: \n");
	
	preencher(matriz, 3);
	imprimir(matriz, 3);
	
}