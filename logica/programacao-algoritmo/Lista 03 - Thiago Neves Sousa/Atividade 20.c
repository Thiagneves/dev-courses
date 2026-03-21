#include <stdio.h>

int main(){
	
	float distancia, velocidade;
	
	printf("Digite a distancia em km: ");
	scanf("%f", &distancia);
	
	printf("Digite a velocidade em km/h: ");
	scanf("%f", &velocidade);
	
	printf("A pessoa vai gastar %.2f horas para chegar.", distancia/velocidade);
	
	return 0;
}
