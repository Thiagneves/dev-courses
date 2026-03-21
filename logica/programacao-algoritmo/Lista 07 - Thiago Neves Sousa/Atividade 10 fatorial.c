#include <stdio.h>

int fatorial(int n) {
	
    int resultado = 1;

    for (int i = 1; i <= n; i++) {
    	
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
    	
        printf("Fatorial indefinido.\n");
    } 
	
	else {
		
        int fat = fatorial(numero);
        printf("O fatorial de %d e: %d", numero, fat);
    }

    return 0;
}
