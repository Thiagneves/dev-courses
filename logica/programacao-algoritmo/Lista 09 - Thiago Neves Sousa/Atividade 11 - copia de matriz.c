#include <stdio.h>

void preencher(int m[][3], int linha){
	
	for(int i = 0; i < linha; i++){
		
		for(int j = 0; j < 3; j++){
			
			printf("Elemento [%d][%d]: ", i, j);
			scanf("%d", &m[i][j]);	
		}
	}
}

void copia(int m[][3], int mCopy[][3]){
	
	for(int i = 0; i < 3; i++){
		
		for(int j = 0; j < 3; j++){
			
			mCopy[i][j] = m[i][j];
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
	printf("\n");
}

int main(){
	
	int mOriginal[3][3],
		mCopia[3][3];
		
	preencher(mOriginal, 3);
	copia(mOriginal, mCopia);
	
	imprimir(mOriginal, 3);
	imprimir(mCopia, 3);
	
	return 0;
}