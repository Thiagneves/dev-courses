#include <stdio.h>

int Perfeito(int num) {
    int soma = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    return (soma == num);
}

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (Perfeito(numero)) {
        printf("%d e Perfeito.\n", numero);
    } else {
        printf("%d NAO e Perfeito.\n", numero);
    }

    return 0;
}
