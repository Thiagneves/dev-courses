#include <stdio.h>

int main(){
	
	char estado;
	
	printf("Qual seu estado civil? ");
	scanf("%c", &estado);
	
	if(estado == 's' || estado == 'S'){
		printf("\nVoce e souteiro(a) ;)");
	}
	
	else if(estado == 'c' || estado == 'C'){
		printf("\nCasado(a) =)");
	}
	
	else if(estado == 'd' || estado == 'D'){
		printf("\nDivorciado(a) =(");
	}
	
	else if(estado == 'v' || estado == 'V'){
		printf("\nViuvo(a) =()");
	}
	
	else{
		printf("Caractere invalido, favor digitar outro caractere !");
	}
	
	
	return 0;
}
