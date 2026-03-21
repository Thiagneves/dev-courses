#include <stdio.h>
#include <ctype.h> // tolower()

int main(){
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf(" %c", &letra); // Devemos sempre colocar esse espaso entre " e %c para que eles ententa o [ENTER]

	letra = tolower(letra);	// conversor de letras | está trasnformando as letras em maiusculas
	
	switch(letra){
		
		case 'a':
			
		case 'e':
			
		case 'i':
			
		case 'o':
			
		case 'u':
		
			printf("\nVoce digitou uma vogal");
			
			break;
		
		default:
			
		printf("\nVoce digitou uma consoante");
	}
	
	return 0;
}
