#include <stdio.h>

int main(){
	
	int v[5];
	
	int *p = v;
	
	for(int i = 0; i < 5; i++){
		
		printf("Escreva v%d: ", i+1);
		scanf("%d", (p+i));	
	}
	
	puts(" ");
	
	for(int i = 0; i < 5; i++){
		
		printf("%d", *(p + i));
	}
	
	return 0;
}