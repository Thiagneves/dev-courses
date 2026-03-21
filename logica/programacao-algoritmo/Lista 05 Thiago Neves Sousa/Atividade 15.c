#include <stdio.h>

int main(){
	
	int quantaluno, prova, aluno = 1;
	float media, soma, nota, somaTurma = 0, mediaTurma;
	
	printf("Quantos alunos tem a turma: ");
	scanf(" %d", &quantaluno);
	
	while(aluno <= quantaluno){
		prova = 1;
		soma = 0;
		
		printf("\nAluno %d\n", aluno);
		
		while (prova <= 3) {
			
            printf("Digite a nota da prova %d: ", prova);
            scanf(" %f", &nota);
            
            soma += nota;
            prova++;
        }
        
        media = soma / 3;
        printf("Media do aluno %d: %.2f\n", aluno, media);
        
        somaTurma += media;
        aluno++;
	}
	
	mediaTurma = somaTurma / quantaluno;
	printf("\nMEDIA DA TURMA: %.2f", mediaTurma);
	
	return 0;
}
