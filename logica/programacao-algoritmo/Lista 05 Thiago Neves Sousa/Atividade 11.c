#include <stdio.h>

int main(){
	
	int num, aux;
	long long int calculo = 1;
	
	printf("Digite o numero que vc quer fatorial: ");
	scanf(" %d", &num);
	
	aux = num;
	
	printf("\nCalculo com While:");
	while(num > 1){
		
		calculo *= num;
		num--;
		
		printf("\n%lld", calculo);
	}
	
	num = aux;
	calculo = 1;
	
	printf("\n\nCalculo com FOR:");
	for(; num > 1; num--){
		
		calculo *= num;
		printf("\n%lld", calculo);
	}
	
	printf("\n\nFatorial de %d e: %lld", aux, calculo);
	
	return 0;
}
