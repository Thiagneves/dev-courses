// 5. a) Peça um número ao usuário e grave-o em um arquivo binário numero.dat.
//    b) Abra numero.dat, leia o valor gravado e mostre na tela.

#include <stdio.h>

int main(){
	
	int num;
	
	FILE *arquivo = fopen("Ativ 05 - numero.dat", "wb");
	
	printf("Escreva um numero: ");
	scanf("%d", &num);
	
	fprintf(arquivo, "%d", num);
	
	fclose(arquivo);
	
	arquivo = fopen("Ativ 05 - numero.dat", "rb");
	
	while(fscanf(arquivo, "%d", &num) != EOF){
		printf("%d", num);
	}
	
	fclose(arquivo);
	
	return 0;
}