#include <stdio.h>

int main(){
	
	char nome[5][20];
	
	for(int i = 0; i < 5; i++){
		
		printf("Nome 0%d: ", i+1);
		fgets(nome[i], 20, stdin);
		
	}
	
	puts(" ");
	
	for(int i = 4; i >= 0; i--){
		
		printf("%s", nome[i]);
	}
	
	return 0;
}