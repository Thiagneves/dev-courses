#include <stdio.h>

int funcao(int x){
	
	int i = 0;
	
	while(x*x > i){
		
		printf("*");
		
		if ((i + 1) % x == 0) 
		printf("\n");
			
       i++;
	}
}

int main(){
	
	int a = 4;
	
	funcao(a);
	
	return 0;
}