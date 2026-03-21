#include <stdio.h>

int main(){
	
	float temperaturaC, temperaturaF;
	
	printf("Escreva quantos Graus Fahreiheit esta fazendo hoje: ");
	scanf("%f", &temperaturaF);
	
	temperaturaC = (temperaturaF-32)/1.8;
	
	printf("Esta fazendo %.2f graus Celsius e %.2f Graus Fahrenheit", temperaturaC, temperaturaF);
	
	return 0;
}
