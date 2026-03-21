#include <stdio.h>

int main(){
	
	int num, aux = 0;
	char caract;
	
	printf("Escreva um numero: ");
	scanf(" %d", &num);
	
	printf("\nEscreva um caractere: ");
	scanf(" %c", &caract);
	
	while(aux < num * num) {
        printf("%c", caract);

        if ((aux + 1) % num == 0)
            printf("\n");

       aux++;
    }

	
	return 0;
}
