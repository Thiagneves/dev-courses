/* 4. a) Leia um arquivo de texto chamado mensagem.txt e grave um novo arquivo codificado.txt com os caracteres trocados 
         por seus sucessores na tabela ASCII (ex.: 'A' vira 'B', 'B' vira 'C').
      
      b) Faça o processo reverso: abra codificado.txt e gere decodificado.txt, retornando os caracteres ao original. */
    
#include <stdio.h>

void preencher() {
	
    FILE *arquivo = fopen("Ativ 04 - mensagem.txt", "w");
    
    fprintf(arquivo, "ABC\n");
    fclose(arquivo);
}

void codificar() {
	
    FILE *entrada = fopen("Ativ 04 - mensagem.txt", "r");
    FILE *saida = fopen("Ativ 04 - codificado.txt", "w");

    int c;
    while ((c = fgetc(entrada)) != EOF) {
    	
        fputc(c + 1, saida);
    }

    fclose(entrada);
    
    fclose(saida);
}

void decodificar() {
	
    FILE *entrada = fopen("Ativ 04 - codificado.txt", "r");
    FILE *saida = fopen("Ativ 04 - decodificado.txt", "w");

    int c;
    
    while ((c = fgetc(entrada)) != EOF) {
        fputc(c - 1, saida);
    }

    fclose(entrada);
    
    fclose(saida);
}

int main() {
	
    preencher();
    codificar();
    decodificar();

    printf("Processo concluido!");
    return 0;
}