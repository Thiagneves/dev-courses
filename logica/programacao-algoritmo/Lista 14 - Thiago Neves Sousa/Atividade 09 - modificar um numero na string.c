// 9. a) Reabra dados.dat, vá direto até a segunda nota do segundo aluno e atualize seu valor para 10.0.

#include <stdio.h>

int main() {
    FILE *arquivo = fopen("Ativ 07 - dados.dat", "r+b"); // leitura e escrita binária

    // Cada aluno: nome[30 bytes] + 3 notas (float)
    int nomeBytes = 30;
    int notasQtd = 3;

    // Pular 1 aluno (índice 1) = nome + 3 notas
    long deslocamento = (nomeBytes + notasQtd * sizeof(float)) * 1; 

    // Pular a primeira nota do segundo aluno (índice 1)
    deslocamento += sizeof(float) * 1;

    // Vai para o local exato da segunda nota do segundo aluno
    fseek(arquivo, deslocamento, SEEK_SET);

    float novaNota = 10.0f;
    fwrite(&novaNota, sizeof(float), 1, arquivo);

    fclose(arquivo);

    printf("Nota atualizada.");
    return 0;
}