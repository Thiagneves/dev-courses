#include <stdio.h>

int main(){
	
	float raio;
	
	printf("Qual o raio do circulo? ");
	scanf("%f", &raio);
	
	printf("O Perimetro do circulo e: %.2f", 2*3.14*raio);
	
	return 0;
}
