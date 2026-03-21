// 2. a) Dado um vetor de 5 inteiros, grave seus valores (um por linha) em um arquivo numeros.txt.
//    b) Leia numeros.txt e exiba os valores armazenados na tela.

#include <stdio.h>

int main(){
	
	int v[5] = {10, 20, 30, 40, 50};
	
	FILE *arquivo = fopen("Ativ 02 - Numeros.txt", "w");
	
	for(int i = 0; i < 5; i++){
		
		fprintf(arquivo, "%d\n", v[i]);
	}
	
	fclose(arquivo);
	
	arquivo = fopen("Ativ 02 - Numeros.txt", "r");
	
	int numero; //Obrigatorio com while, pois o v é um vetor.
	
	while (fscanf(arquivo, "%d", &numero) != EOF) {
   		printf("%d\n", numero);
}
}