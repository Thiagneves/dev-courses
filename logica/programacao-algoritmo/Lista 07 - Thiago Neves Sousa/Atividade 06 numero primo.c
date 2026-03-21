#include <stdio.h>


int Primo(int num) {
	
    if (num <= 1) {
    	
        return 0; 
    }

    for (int i = 2; i <= num / 2; i++) {
    	
        if (num % i == 0) {
        	
            return 0;   
        }
    }

    return 1;
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf(" %d", &numero);

    if (Primo(numero)) {
    	
        printf("%d primo.\n", numero);
    } else {
    	
        printf("%d NAO e primo.\n", numero);
    }

    return 0;
}
