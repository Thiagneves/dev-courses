#include <stdio.h>

int main(){
	
	int num, par = 0, impar = 0;
	
	do{
		printf("Escreva um numero: ");
		scanf(" %d", &num);
		
		if(num % 2 == 0 && num > 0){
			
			par++;
		}
		
		else if(num > 0){
			
			impar++;
		}
		
	}while(num != 0);
	
	printf("\n%d numeros pares foram digitados.\n", par);
	printf("%d numeros impares foram digitados.\n", impar);
	
	return 0;
}
