#include <stdio.h>

void main() {
    int tabuleiro[10][10];
    int i, j;
    int linha[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Inicializar o tabuleiro
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Adicionar navio horizontal com verificação dentro do laço
    for (j = 6; j < 9; j++) {
        if (j < 10 && tabuleiro[2][j] == 0) {
            tabuleiro[2][j] = 3;
        } else if (j >= 10) {
            printf("Posição (%d, %c) está fora dos limites! Navio horizontal não pode ser colocado.\n", 2, coluna[j]);
        } else {
            printf("Posição (%d, %c) já ocupada! Navio horizontal não pode ser colocado.\n", 2, coluna[j]);
        }
    }

    // Adicionar navio vertical com verificação dentro do laço
    for (i = 5; i < 8; i++) {
        if (i < 10 && tabuleiro[i][6] == 0) {
            tabuleiro[i][6] = 3;
        } else if (i >= 10) {
            printf("Posição (%d, %c) está fora dos limites! Navio vertical não pode ser colocado.\n", i, coluna[6]);
        } else {
            printf("Posição (%d, %c) já ocupada! Navio vertical não pode ser colocado.\n", i, coluna[6]);
        }
    }

    // Letras das colunas
    printf("  ");
    for (j = 0; j < 10; j++) {
        printf("%c ", coluna[j]);
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", linha[i]);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

