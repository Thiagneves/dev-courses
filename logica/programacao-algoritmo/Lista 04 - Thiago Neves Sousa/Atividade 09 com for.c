#include <stdio.h>

int main() {
	
    int num[5];
    int i, j, temp;

    printf("Digite 5 numeros inteiros: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - 1 - i; j++) {
            if(numeros[j] > numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    // Saída dos números ordenados
    printf("A ordem crescente e: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
