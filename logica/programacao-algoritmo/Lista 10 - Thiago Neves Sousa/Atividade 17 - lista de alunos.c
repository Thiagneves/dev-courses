#include <stdio.h>
#include <string.h>

int main() {
	
    char nome[10][20];
    int nota[10][3] = {0};
    int opcao, i = 0, ID = 0;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Cadastrar Aluno\n");
        printf("2. Lancar Notas\n");
        printf("3. Listar Alunos e Media\n");
        printf("0. Sair\n\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
        	
            case 1:
                if (i < 10) {
                    printf("Aluno %02d\nNome: ", i);
                    fgets(nome[i], sizeof(nome[i]), stdin);
                    nome[i][strcspn(nome[i], "\n")] = '\0';
                    i++;
                } 
				
				else {
                    printf("Limite de alunos atingido.\n");
                }
                break;

            case 2:
            	
                printf("Qual ID do aluno? ");
                scanf("%d", &ID);
                getchar();
                
                for(int i=0; i<strlen(nome); i++){
		
					if(nome[i] >= 'a' && nome[ID][i] <= 'z'){
						nome[ID][i] -= 32;
					}
				}

                if (ID >= 0 && ID < i) {
                    for (int j = 0; j < 3; j++) {
                        printf("Nota %d: ", j + 1);
                        scanf("%d", &nota[ID][j]);
                        getchar();
                    }
                } 
				
				else {
                    printf("ID invalido.\n");
                }
                break;

            case 3:
            	
                for (int k = 0; k < i; k++) {
                    int soma = nota[k][0] + nota[k][1] + nota[k][2];
                    float media = soma / 3.0;
                    printf("Aluno %02d: %s - Media: %.2f\n", k, nome[k], media);
                }
                break;

            case 0:
            	
                printf("Saindo...\n");
                break;

            default:
            	
                printf("Opcao invalida.\n");
        }

    } while (opcao != 0);

    return 0;
}
