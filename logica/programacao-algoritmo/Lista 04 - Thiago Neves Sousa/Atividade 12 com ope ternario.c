#include <stdio.h>

int main(){
	
	char letra;
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	int verificador = (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' 
						|| letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U');
	
	if (verificador){
		printf("Voce digitou uma vogal");
	}
	
	else {
		printf("Voce digitou uma consoante");
	}
	
	return 0;
}
