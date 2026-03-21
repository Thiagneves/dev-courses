// 3. a) Peça ao usuário 3 nomes e 3 notas (um nome + nota por linha). Grave no arquivo alunos.txt
//    b) Leia alunos.txt, classifique os alunos com nota ≥ 6 como Aprovados, os demais como Reprovados.

#include <stdio.h>

void preencher(FILE *arquivo){
	
	char aluno[3][30];
	int nota[3];
	
	for(int i = 0; i < 3; i++){
		
		printf("Nome Aluno 0%d: ", i+1);
		scanf("%s", aluno[i]);
		
		printf("Nota do Aluno 0%d: ", i+1);
		scanf("%d", &nota[i]);
		
		fprintf(arquivo, "%s %d\n", aluno[i], nota[i]);
	}
	
}

void classificar(){
	
	FILE *arquivo = fopen("Ativ 03 - alunos.txt", "r");

    char nome[30];
    int nota;

    printf("\n--- Resultado ---\n");

    while(fscanf(arquivo, "%s %d", nome, &nota) != EOF) {
        printf("%s - %s\n", nome, (nota >= 6) ? "Aprovado" : "Reprovado");
    }

    fclose(arquivo);
}

int main(){
	
	FILE *arquivo = fopen("Ativ 03 - alunos.txt", "w");
	
	preencher(arquivo);
	fclose(arquivo);
	
	classificar();
	
	return 0;
}