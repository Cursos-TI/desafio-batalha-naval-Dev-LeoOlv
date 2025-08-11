#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; 

    // Navio 1 
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][0] = 3;
    }

    // Navio 2 
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][2] = 3;
    }

    // Navio 3
    for (int i = 0; i < 4; i++) {
        tabuleiro[i][5 + i] = 3;
    }

    // Navio 4
    for (int i = 0; i < 3; i++) {
        tabuleiro[6 + i][6 + i] = 3;
    }

    //tabuleiro completo
    printf("Tabuleiro (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
