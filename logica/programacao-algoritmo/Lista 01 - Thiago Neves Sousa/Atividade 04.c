#include <stdio.h>

int main(){
	
	int numAlunos, i;
	float nota1, nota2, nota3, mediaAluno, somaDasMedias = 0, mediaTurma;
	
	printf("A turma tem quantos alunos? ");
	scanf("%d", &numAlunos);
	
	for (i = 1; i <= numAlunos; i++) {
		printf("\nDigite as notas do Aluno %d\n", i);
		
		printf("Nota 1: ");
		scanf("%f", &nota1);
		
		printf("Nota 2: ");
		scanf("%f", &nota2);
		
		printf("Nota 3: ");
		scanf("%f", &nota3);
		
		mediaAluno = (nota1 + nota2 + nota3)/3;
		
		printf("\nA media do aluno %d e: %.2f\n", i, mediaAluno);
		
		somaDasMedias += mediaAluno;
		
	}
	
	mediaTurma = somaDasMedias / numAlunos;
	
	printf("\nA media da turma e: %.2f\n", mediaTurma);
	
	return 0;
}

/*
	for indica que vai continuar rodando enquanto o valor de i for menor ou igual ao número de alunos.
	i++ indica que vai aumentar o numero i até for igual ao numAlunos.
	+= é uma maneira de dizer que está acrescentando aquele valor na variavel, tipo acumulando.
*/
