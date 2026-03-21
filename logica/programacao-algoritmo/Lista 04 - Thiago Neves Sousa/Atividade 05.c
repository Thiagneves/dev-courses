#include <stdio.h>
#include <ctype.h>

int main(){
	
	char estado;
	
	printf("Qual seu estado civil? ");
	scanf("%c", &estado);
	
	estado = tolower(estado);
	
	switch(estado){
		
		case 's':
		
			printf("\nVoce e souteiro(a) ;)");
		
		break;
		
		case 'c':
		
			printf("\nCasado(a) =)");
		
		break;
		
		case 'd':
			
			printf("\nDivorciado(a) =(");
			
		case 'v':
			
			printf("\nViuvo(a) =()");
	
		default:
			
		printf("\nCaractere invalido, favor digitar outro caractere !");
	}
		
	
	return 0;
}
