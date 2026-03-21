#include <stdio.h>
#include <string.h>

int palidromo(char nome[20]){
	
	int j = 0;
	
	j = strlen(nome)-1;
	
	for (int i = 0; i < j; i++, j--) {
		
        if (nome[i] != nome[j]) {
        	
            return 0; // Não é palíndromo
        }
    }

    return 1; // É palíndromo
}

int main(){
	
	char palavra[20];
	
	printf("Escreva uma palavra: ");
	fgets(palavra, 20, stdin);
	
	palavra[strcspn(palavra, "\n")] = '\0';

    if (palidromo(palavra)) {
    	
        printf("E um palindromo!\n");
    } else {
        printf("Nao e um palindromo.\n");
    }

    return 0;
}

