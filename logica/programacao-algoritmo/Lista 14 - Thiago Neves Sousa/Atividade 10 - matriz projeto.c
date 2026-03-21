// 10. a) Peça ao usuário para preencher uma matriz 3×3 de inteiros e grave os dados no arquivo matriz.dat.
//     b) Abra matriz.dat, leia os dados da matriz 3×3 e exiba
//     c) Após ler a matriz, calcule e exiba a soma da diagonal principal (posição [0][0], [1][1], [2][2]).
//     d) Altere diretamente no arquivo o valor da posição [1][2] (segunda linha, terceira coluna) para 99.
//     e) Peça ao usuário o número de linhas e colunas da matriz, aloque dinamicamente, leia os valores e grave em matriz2.dat.

#include <stdio.h>
#include <stdlib.h>

int matriz[3][3];

void preencher(){
	
	FILE *arquivo = fopen("Ativ 10 - matriz.dat", "wb");
	if (arquivo == NULL) {
	    printf("Erro ao abrir o arquivo para escrita.\n");
	    return;
	}
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			printf("Coordenada [0%d][0%d]: ", i, j);
			if(scanf("%d", &matriz[i][j]) != 1){
			    printf("Entrada inválida para matriz[%d][%d].\n", i, j);
			    fclose(arquivo);
			    return;
			}
		}
	}
	
	if(fwrite(matriz, sizeof(int), 9, arquivo) != 9){
	    printf("Erro ao gravar dados no arquivo.\n");
	}
	
	fclose(arquivo);
}

void imprimir(){
	
	FILE *arquivo = fopen("Ativ 10 - matriz.dat", "rb");
	if (arquivo == NULL) {
	    printf("Erro ao abrir o arquivo para leitura.\n");
	    return;
	}
	
	// Lê os 9 inteiros (3x3) do arquivo binário
    size_t lidos = fread(matriz, sizeof(int), 9, arquivo);
    if(lidos != 9){
        printf("Erro ao ler dados do arquivo ou arquivo incompleto.\n");
        fclose(arquivo);
        return;
    }
	
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    fclose(arquivo);
}

void somadiagonal(){
	
	FILE *arquivo = fopen("Ativ 10 - matriz.dat", "rb");
	if (arquivo == NULL) {
	    printf("Erro ao abrir o arquivo para leitura.\n");
	    return;
	}
    
    size_t lidos = fread(matriz, sizeof(int), 9, arquivo);
    if(lidos != 9){
        printf("Erro ao ler dados do arquivo ou arquivo incompleto.\n");
        fclose(arquivo);
        return;
    }
    
    int soma = 0;
    
    for (int i = 0; i < 3; i++) {
    	for (int j = 0; j < 3; j++) {
            if(j == i){
            	soma += matriz[i][j];
			}
        }
    }

	printf("\nSoma da diagonal principal: %d\n", soma);
	
	fclose(arquivo);
}

void alteracao(){
	
	FILE *arquivo = fopen("Ativ 10 - matriz.dat", "r+b");
	if (arquivo == NULL) {
	    printf("Erro ao abrir o arquivo para leitura e escrita.\n");
	    return;
	}
	
	int linha, coluna, numero;
	
	printf("Escolha uma linha: ");
	if(scanf("%d", &linha) != 1){
	    printf("Entrada inválida para linha.\n");
	    fclose(arquivo);
	    return;
	}
	
	printf("Escolha uma coluna: ");
	if(scanf("%d", &coluna) != 1){
	    printf("Entrada inválida para coluna.\n");
	    fclose(arquivo);
	    return;
	}
	
	printf("Escolha um numero: ");
	if(scanf("%d", &numero) != 1){
	    printf("Entrada inválida para numero.\n");
	    fclose(arquivo);
	    return;
	}
	
	if(linha < 1 || linha > 3 || coluna < 1 || coluna > 3){
        printf("Posicao invalida!\n");
        fclose(arquivo);
        return;
    }
	
	long pos = ((linha - 1) * 3 + (coluna - 1)) * sizeof(int);
	
	if(fseek(arquivo, pos, SEEK_SET) != 0){
	    printf("Erro ao posicionar no arquivo.\n");
	    fclose(arquivo);
	    return;
	}

	if(fwrite(&numero, sizeof(int), 1, arquivo) != 1){
	    printf("Erro ao escrever no arquivo.\n");
	    fclose(arquivo);
	    return;
	}
	
	fclose(arquivo);
}

void matrizDinamica() {
    int linhas, colunas;

    printf("\nInforme o numero de linhas: ");
    if(scanf("%d", &linhas) != 1 || linhas < 1){
        printf("Entrada inválida para número de linhas.\n");
        return;
    }

    printf("\nInforme o numero de colunas: ");
    if(scanf("%d", &colunas) != 1 || colunas < 1){
        printf("Entrada inválida para número de colunas.\n");
        return;
    }

    // Aloca memória para um vetor de ponteiros (linhas)
    int **matriz = malloc(linhas * sizeof(int *));
    if(matriz == NULL){
        printf("Erro ao alocar memória.\n");
        return;
    }

    // Aloca memória para cada linha (colunas)
    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
        if(matriz[i] == NULL){
            printf("Erro ao alocar memória.\n");
            // Libera o que já alocou
            for(int k = 0; k < i; k++){
                free(matriz[k]);
            }
            free(matriz);
            return;
        }
    }

    // Leitura dos valores
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Valor [%d][%d]: ", i, j);
            if(scanf("%d", &matriz[i][j]) != 1){
                printf("Entrada inválida para matriz[%d][%d].\n", i, j);
                // Libera memória
                for(int k = 0; k < linhas; k++){
                    free(matriz[k]);
                }
                free(matriz);
                return;
            }
        }
    }

    // Abre arquivo para escrita binária
    FILE *arquivo = fopen("matriz2.dat", "wb");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo para escrita.\n");
        // Libera memória
        for(int k = 0; k < linhas; k++){
            free(matriz[k]);
        }
        free(matriz);
        return;
    }

    // Grava tamanho da matriz no início do arquivo
    fwrite(&linhas, sizeof(int), 1, arquivo);
    fwrite(&colunas, sizeof(int), 1, arquivo);

    // Grava os valores da matriz
    for (int i = 0; i < linhas; i++) {
        fwrite(matriz[i], sizeof(int), colunas, arquivo);
    }

    fclose(arquivo);

    // Libera a memória
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    printf("\nMatriz gravada com sucesso em 'matriz2.dat'\n");
}

void imprimirMatrizDinamica(){
	
	FILE *arquivo = fopen("matriz2.dat", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    int linhas, colunas;

    // Lê o número de linhas e colunas que foram salvos no arquivo
    if(fread(&linhas, sizeof(int), 1, arquivo) != 1){
        printf("Erro ao ler o número de linhas.\n");
        fclose(arquivo);
        return;
    }
    if(fread(&colunas, sizeof(int), 1, arquivo) != 1){
        printf("Erro ao ler o número de colunas.\n");
        fclose(arquivo);
        return;
    }

    // Aloca dinamicamente a matriz
    int **matriz = malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro de alocação.\n");
        fclose(arquivo);
        return;
    }

    for (int i = 0; i < linhas; i++) {
        matriz[i] = malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro de alocação.\n");
            // Libera o que já foi alocado
            for(int k = 0; k < i; k++){
                free(matriz[k]);
            }
            free(matriz);
            fclose(arquivo);
            return;
        }
        // Lê uma linha inteira de uma vez
        if(fread(matriz[i], sizeof(int), colunas, arquivo) != (size_t)colunas){
            printf("Erro ao ler dados da matriz.\n");
            // Libera tudo
            for(int k = 0; k <= i; k++){
                free(matriz[k]);
            }
            free(matriz);
            fclose(arquivo);
            return;
        }
    }

    fclose(arquivo);

    // Imprime a matriz
    printf("\n\nMatriz 2:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera memória
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

int main(){
	
	preencher();
	imprimir();
	somadiagonal();
	alteracao();
	imprimir();
	matrizDinamica();
	imprimirMatrizDinamica();
	
	return 0;
}
