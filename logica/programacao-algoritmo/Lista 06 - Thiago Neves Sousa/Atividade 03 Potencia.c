#include <stdio.h>


float pot(float x, int n){
	
	float acumulador = 1;
	
	for(int i=0; i<n; i++){
		
		acumulador = acumulador*x;
	}
	
	return acumulador;
}

int main(){
	
	float num1 = 2;
	int num2 = 4;

	printf("%.2f", pot(num1, num2));
	printf("\n%.2f", pot(4, 4));
	
	return 0;
}