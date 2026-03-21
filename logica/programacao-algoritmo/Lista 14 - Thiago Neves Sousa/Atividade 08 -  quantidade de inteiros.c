// 8. a) Use funções como fseek, ftell para calcular quantos inteiros estão salvos no arquivo vetor.dat.

#include <stdio.h>

int main() {
	
    FILE *arquivo = fopen("Ativ 06 - vetor.dat", "rb");

    // Move o cursor para o final do arquivo
    fseek(arquivo, 0, SEEK_END);

    // Pega a posição atual (tamanho do arquivo em bytes)
    long tamanho = ftell(arquivo);

    // Volta para o início do arquivo (opcional)
    fseek(arquivo, 0, SEEK_SET);

    // Calcula quantos inteiros cabem no arquivo
    int quantidade = tamanho / sizeof(int);

    printf("O arquivo possui %d inteiros.\n", quantidade);

    fclose(arquivo);
    return 0;
}

