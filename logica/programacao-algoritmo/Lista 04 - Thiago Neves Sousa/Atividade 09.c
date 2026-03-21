#include <stdio.h>

int main(){
	
	int num1, num2, num3, num4, num5;
	
	printf("Digite 5 numeros inteiros: ");
	scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
	
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
	
	if(num1 > num4){
		
		int temp = num1;
		num1 = num4;
		num4 = temp;
	
	}
	
	if(num1 > num5){
		
		int temp = num1;
		num1 = num5;
		num5 = temp;
	
	}
	
	if(num2 > num3){
		
		int temp = num2;
		num2 = num3;
		num3 = temp;
		
	}
	
	if(num2 > num4){
		
		int temp = num2;
		num2 = num4;
		num4 = temp;
		
	}
	
	if(num2 > num5){
		
		int temp = num2;
		num2 = num5;
		num5 = temp;
		
	}
	
	if(num3 > num4){
		
		int temp = num3;
		num3 = num4;
		num4 = temp;
		
	}
	
	if(num3 > num5){
		
		int temp = num3;
		num3 = num5;
		num5 = temp;
		
	}
	
	if(num4 > num5){
		
		int temp = num4;
		num4 = num5;
		num5 = temp;
		
	}
	
	printf("A ordem crescente e: %d, %d, %d, %d, %d", num1, num2, num3, num4, num5);
	
	return 0;
}
