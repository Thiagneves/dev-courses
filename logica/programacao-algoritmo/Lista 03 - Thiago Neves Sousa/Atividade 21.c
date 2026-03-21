#include <stdio.h>

int main(){
	
	float peso, altura;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("\nSeu IMC e %.2f\n", peso/(altura*altura));
	
	return 0;
}
