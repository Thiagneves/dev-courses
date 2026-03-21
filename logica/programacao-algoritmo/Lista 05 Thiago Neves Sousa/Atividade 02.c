#include <stdio.h>

int main(){
	
	int num;
	
	printf("Tabela ASCII com FOR: \n\n");
	
	for(num = 33; num <= 255; num++){
		printf("%d - %c\n", num, num);
	}
	
	return 0;
}
