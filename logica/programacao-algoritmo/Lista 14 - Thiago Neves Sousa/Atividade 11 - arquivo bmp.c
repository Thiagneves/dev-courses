/* Você foi encarregado de analisar um arquivo de imagem chamado “imagem.bmp”. Seu objetivo é escrever um programa em C que:
1. Abra o arquivo imagem.bmp em modo binário.
2. Verifique se o arquivo é realmente um arquivo BMP válido.
o Para isso, ele deve conter os dois primeiros bytes iguais a 'B' e 'M'.
3. Extraia e exiba na tela as dimensões da imagem (largura e altura), que estão
armazenadas no cabeçalho do arquivo. */

#include <stdio.h>
#include <stdlib.h>

int main() {
	
    FILE *arquivo = fopen("imagem.bmp", "rb"); // Abre arquivo em modo binário para leitura
    
    if (arquivo == NULL) {
    	
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Lê os dois primeiros bytes do arquivo para verificar a assinatura 'B' 'M'
    
    unsigned char assinatura[2];
    
    if (fread(assinatura, 1, 2, arquivo) != 2) {
    	
        printf("Erro ao ler a assinatura do arquivo.\n");
        fclose(arquivo);
        return 1;
    }

    if (assinatura[0] != 'B' || assinatura[1] != 'M') {
    	
        printf("Arquivo não é um BMP válido.\n");
        fclose(arquivo);
        return 1;
    }

    // Move o ponteiro do arquivo para o offset onde a largura está armazenada (byte 18)
    
    if (fseek(arquivo, 18, SEEK_SET) != 0) {
    	
        printf("Erro ao posicionar no arquivo.\n");
        fclose(arquivo);
        return 1;
    }

    // Lê a largura (4 bytes, inteiro)
    
    int largura;
    
    if (fread(&largura, sizeof(int), 1, arquivo) != 1) {
    	
        printf("Erro ao ler a largura da imagem.\n");
        fclose(arquivo);
        return 1;
    }

    // Lê a altura (4 bytes, inteiro)
    int altura;
    
    if (fread(&altura, sizeof(int), 1, arquivo) != 1) {
    	
        printf("Erro ao ler a altura da imagem.\n");
        fclose(arquivo);
        return 1;
    }

    // Fecha o arquivo
    fclose(arquivo);

    // Exibe as dimensões da imagem
    printf("Arquivo BMP valido.\n");
    printf("Largura: %d pixels\n", largura);
    printf("Altura: %d pixels\n", altura);

    return 0;
}
