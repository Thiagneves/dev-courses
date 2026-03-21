#include <stdio.h>

int main(){
	
	int num1, num2, num3;
	
	printf("Digite 3 numeros inteiros: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	
	if(num1 > num2){ // o Primeiro é maior que o segundo? se sim vamos trocar a ordem
	
		int temp = num1; //Guardar num1
		num1 = num2;
		num2 = temp;
		
	}
	
	if(num1 > num3){
		
		int temp = num1;
		num1 = num3;
		num3 = temp;
		
	}
	
	if(num2 > num3){
		
		int temp = num2;
		num2 = num3;
		num3 = temp;
		
	}
	
	printf("A ordem crescente e: %d, %d, %d", num1, num2, num3);
	
	return 0;
}
