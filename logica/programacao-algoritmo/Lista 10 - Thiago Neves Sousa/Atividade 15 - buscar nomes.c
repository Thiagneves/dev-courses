#include <stdio.h>
#include <string.h>

int buscar(char nomes[][20], char busca[]) {
	
    for (int i = 0; i < 5; i++) {
    	
        if (strcmp(nomes[i], busca) == 0) {
        
		    return 1;
        }
    }
    return 0;
}

int main() {
	
    char nomes[5][20] = {"Thiago", "Kamila", "Bruno", "Paulo", "Gustavo"};
    char busca[20];

    printf("Digite o nome a ser buscado: ");
    fgets(busca, sizeof(busca), stdin);
    
    busca[strcspn(busca, "\n")] = '\0'; 

    if (buscar(nomes, busca)) {
    	
        printf("Nome encontrado!");
    } 
	
	else {
		
        printf("Nome nao encontrado.");
    }

    return 0;
}
