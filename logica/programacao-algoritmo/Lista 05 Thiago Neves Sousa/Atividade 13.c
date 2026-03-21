#include <stdio.h>

int main(){
	
	int num, aux, i;
	
	printf("Digite um número: ");
    scanf("%d", &num);
    
    for(i = num; i >= 1; i--){
    	
    	for(aux = 1; aux <= i; aux++){
    		printf("*");
		}
		
		printf("\n");
	}
	
	
	return 0;
}
