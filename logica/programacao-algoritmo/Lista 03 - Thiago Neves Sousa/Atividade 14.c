#include <stdio.h>

int main(){
	
	int nota1, nota2, nota3;
	
	printf("Qual sua nota na Prova 1: ");
	scanf("%d", &nota1);
	
	printf("Qual sua nota na Prova 2: ");
	scanf("%d", &nota2);
	
	printf("Qual sua nota na Prova 3: ");
	scanf("%d", &nota3);
	
	float media = (float)(nota1+nota2+nota3)/3;
	
	printf("\nSua media foi de: %.2f", media);
	
	return 0;
	
}
