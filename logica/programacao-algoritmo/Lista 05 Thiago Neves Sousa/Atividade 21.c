#include <stdio.h>

int main(){
	
	int senha;
	
	do{
		
		printf("Escreva sua senha: **** \n");
		scanf("%d", &senha);
		
		if(senha != 1234){
			printf("\nSenha Invalida !\n");
		}
		
	}while(senha != 1234);
	
	printf("Bem-vindo(a)");
	
	return 0;
}
