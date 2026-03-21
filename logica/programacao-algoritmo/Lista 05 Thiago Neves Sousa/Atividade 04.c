#include <stdio.h>

int main(){
	
	int num1, i;
	
	printf("Escreva um numero: ");
	scanf("%d", &num1);
	
	for(i = 1; i <= num1; i++){
		
		printf("%d\t%d\n", i, num1-i+1);
		
	}
	
	return 0;
}
