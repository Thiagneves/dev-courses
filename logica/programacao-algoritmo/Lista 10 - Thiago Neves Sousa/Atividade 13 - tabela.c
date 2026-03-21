#include <stdio.h>
#include <string.h>

int main() {
    char palavra[20] = ""; 
    int opcao;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Digitar nova string\n");
        printf("2. Exibir em maiusculas\n");
        printf("3. Exibir em minusculas\n");
        printf("4. Contar letras\n");
        printf("5. Sair\n\n");
        printf("Opcao: ");
        scanf(" %d", &opcao);
        
        getchar();  

        if (opcao < 1 || opcao > 5) {
        	
            printf("Voce escolheu uma opcao invalida! Tente novamente.\n");
            continue;
        }

        switch (opcao) {
            case 1:
            	
                printf("Digite uma palavra: ");
                fgets(palavra, sizeof(palavra), stdin);
                palavra[strcspn(palavra, "\n")] = '\0';
                break;

            case 2:
            	
                if (strlen(palavra) == 0) {
                	
                    printf("Nenhuma palavra digitada ainda.\n");
                } 
				
				else {
                    
					for (int i = 0; palavra[i]; i++) {
                        if (palavra[i] >= 'a' && palavra[i] <= 'z') {
                            palavra[i] = palavra[i] - ('a' - 'A');
                        }
                    }
                    
					printf("Maiusculas: %s\n", palavra);
                }
                
                break;

            case 3:
                
				if (strlen(palavra) == 0) {
                    
					printf("Nenhuma palavra digitada ainda.\n");
                } 
				
				else {
                    
					for (int i = 0; palavra[i]; i++) {
						
                        if (palavra[i] >= 'A' && palavra[i] <= 'Z') {
                            palavra[i] = palavra[i] + ('a' - 'A');
                        }
                    }
                    
                    printf("Minusculas: %s\n", palavra);
                }
                
                break;

            case 4:
                
				if (strlen(palavra) == 0) {
                    
					printf("Nenhuma palavra digitada ainda.\n");
                } 
				
				else {
					
                    int cont = 0;
                    for (int i = 0; palavra[i]; i++) {
                        if ((palavra[i] >= 'A' && palavra[i] <= 'Z') || 
                            (palavra[i] >= 'a' && palavra[i] <= 'z')) {
                            cont++;
                        }
                    }
                    
                    printf("Numero de letras: %d\n", cont);
                }
                
                break;

            case 5:
                
				 printf("Programa encerrado.\n");
                break;
        }

    } while (opcao != 5);

    return 0;
}
