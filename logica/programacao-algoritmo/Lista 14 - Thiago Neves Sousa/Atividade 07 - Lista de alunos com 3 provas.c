/* a) Peça ao usuário 3 nomes (máx. 30 caracteres cada) e 3 notas para cada nome. Grave no
      arquivo binário dados.dat, da seguinte ordem:
   
	Nome1 Nota1 Nota2 Nota3
	Nome2 Nota1 Nota2 Nota3
	Nome3 Nota1 Nota2 Nota3

   b) Abra dados.dat, leia e exiba o nome e notas de cada aluno. */
   
#include <stdio.h>

int main(){
	
	FILE *arquivo = fopen("Ativ 07 - dados.dat", "wb");
	
	char nome[3][30];
	int nota[3][3];
	
	for(int i = 0; i < 3; i++){
		
		printf("Escreva o nome do Aluno 0%d: ", i+1);
		scanf("%s", nome[i]);
		
		for(int j = 0; j < 3; j++){
			
			printf("Escreva a nota da prova 0%d do Aluno 0%d: ", j+1, i+1);
			scanf("%d", &nota[i][j]);
			
		}
		
		fprintf(arquivo, "%s %d %d %d\n", 
					nome[i], nota[i][0], nota[i][1], nota[i][2]);
	}
	
	// Gravação dos dados
	
    for (int i = 0; i < 3; i++) {
    	
        char nomeFormatado[30] = {0};
        strncpy(nomeFormatado, nome[i], 29);

        fwrite(nomeFormatado, sizeof(char), 30, arquivo);
        fwrite(nota[i], sizeof(int), 3, arquivo);
    }

    fclose(arquivo);
	
	return 0;
}
