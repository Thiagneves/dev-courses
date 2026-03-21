#include <stdio.h>

int main(){
	
	int calculo, num = 1, i;
	
	do{
		printf("Tabuada do numero %d\n", num);
		
		for(i = 1; i <= 10; i++) {
			calculo = num * i;
			
			printf("%d x %d = %d\n", num, i, calculo);
		}
		
		num++;
		printf("\n");
		
	}while(num <= 9);
	
}
