#include <stdio.h>
int main() {
    int tabuleiro[10][10];
    int i, j;
    int linha[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Exibir as letras das colunas
    printf("  ");
    for (j = 0; j < 10; j++) {
        printf("%c ", coluna[j]);
    }
    printf("\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", linha[i]);
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

