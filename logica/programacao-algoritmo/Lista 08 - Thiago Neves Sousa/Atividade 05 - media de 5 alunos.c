#include <stdio.h>

int main(){
	
	int nota[5];
	float media = 0;
	
	for(int i = 0; i < 5; i++){
		
		printf("Escreva a nota do aluno %d: ", i+1);
		scanf(" %d", &nota[i]);
		
		media += nota[i];
	}
	
	printf("A media da turma e: %.2f", media/5);
}