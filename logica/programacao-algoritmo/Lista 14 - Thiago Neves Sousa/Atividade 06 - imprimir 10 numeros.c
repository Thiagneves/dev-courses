// 1. a) Grave um vetor de 10 inteiros (fixo ou lido do usuário) no arquivo vetor.dat.
//    b) Leia vetor.dat e mostre todos os elementos na tela.

#include <stdio.h>

int main(){
	
	FILE *arquivo = fopen("Ativ 06 - vetor.dat", "wb");
	
	int num[10] = {1, 2, 3, 4, 4, 6, 7, 8, 2, 0};
	
	for(int i = 0; i < 10; i++){
		
		fprintf(arquivo, "%d ", num[i]);
	}
	
	fclose(arquivo);
	
	arquivo = fopen("Ativ 06 - vetor.dat", "r");
	
	int numero;
	
	while(fscanf(arquivo, "%d", &numero) != EOF){
		
		printf("%d ", numero);
	}
	
	fclose(arquivo);
}