#include <stdio.h>

int main(){
	
	int num, i;
	
	printf("Escolha um numero: ");
	scanf(" %d", &num);
	
	for(i = 3; i <= num; i = i+3){
		
		printf("%d\n", i);
	}
	
	return 0;
}
