#include <stdio.h>

float numero(float a, float b, float c){
	
	float menor = a;
	
	if (b < menor){
		
		menor = b;
	} 
	
	if (c < menor){
		
		menor = c;
	}
	
	
	printf("%.2f", menor);
	
}

int main(){
	
	numero(1, -3, 4);
}