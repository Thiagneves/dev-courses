// 01. a) Criar um arquivo chamado frase.txt, escrever a frase "Aprender C e essencial!" e fechá-lo.
//     b) Abra frase.txt no modo de acréscimo e adicione a frase "Continuamos estudando arquivos.".

#include <stdio.h>

int main(){
	
	FILE *arquivo = fopen("Ativ 01 - frase.txt", "w");
	fprintf(arquivo, "Aprender C e essencial!\n");
	fclose(arquivo);
	
	fopen("Ativ 01 - frase.txt", "a+");
	fprintf(arquivo, "Continuamos estudando arquivos.");
	fclose(arquivo);
	
	return 0;
}