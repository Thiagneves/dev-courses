#include <stdio.h>

int numero(int num2){
	
	int aux;
	
	if(num2 < 0){
		
		for(int i = 1; num2 < 0; i++){
			
			num2++;
			aux = i;
		}
		
		printf("%d", aux);
	}
	else if(num2 >= 0){
		
		printf("%d", num2);
	}
	
}

int main(){
	
	int num;
	
	printf("Escolha um numero: ");
	scanf(" %d", &num);
	
	numero(num);
	
	return 0;
}