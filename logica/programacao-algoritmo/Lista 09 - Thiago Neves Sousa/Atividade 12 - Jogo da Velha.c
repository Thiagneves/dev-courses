#include <stdio.h>

void iniciar(char tab[][3]) {
    printf("Bem-Vindo ao Jogo da Velha!\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tab[i][j] = '_'; 
        }
    }
    printf("\n");
}

void jogada(char tab[][3], int i, int j, char simbolo){
    if(i >= 0 && i < 3 && j >= 0 && j < 3 && tab[i][j] == '_'){
        tab[i][j] = simbolo;
    } else {
        printf("Posição invalida ou ja ocupada!\n");
    }
}

void imprimir(char m[][3], int linha){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < 3; j++){
            printf("%c ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int verificar(char m[][3]){
    // Linhas e colunas
    for(int i = 0; i < 3; i++){
        if(m[i][0] == m[i][1] && m[i][1] == m[i][2] && m[i][0] != '_') return 1;
        if(m[0][i] == m[1][i] && m[1][i] == m[2][i] && m[0][i] != '_') return 1;
    }

    // Diagonais
    if(m[0][0] == m[1][1] && m[1][1] == m[2][2] && m[0][0] != '_') return 1;
    if(m[0][2] == m[1][1] && m[1][1] == m[2][0] && m[0][2] != '_') return 1;

    return 0;
}

int main(){
    char jogo[3][3];
    int opcaoi, opcaoj;
    int fim = 0;
    
    iniciar(jogo);
    imprimir(jogo, 3);

    while(!fim){
        // Jogador X
        printf("Jogador X - Linha e Coluna: ");
        scanf("%d %d", &opcaoi, &opcaoj);
        jogada(jogo, opcaoi, opcaoj, 'X');
        imprimir(jogo, 3);
        if(verificar(jogo)){
            printf("Jogador X venceu!\n");
            break;
        }

        // Jogador O
        printf("Jogador O - Linha e Coluna: ");
        scanf("%d %d", &opcaoi, &opcaoj);
        jogada(jogo, opcaoi, opcaoj, 'O');
        imprimir(jogo, 3);
        if(verificar(jogo)){
            printf("Jogador O venceu!\n");
            break;
        }
    }

    printf("Fim do Jogo!\n");
    return 0;
}
