#include <stdio.h>


#define TAMANHO_TABULEIRO 10 // Definindo o tamanho do tabuleiro
#define NAVIO 3  // Definindo o valor numérico das partes de navios

int main() {
    // Inicializando o tabuleiro 10x10 com zeros (0 representa uma posição vazia)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};

    // Posicionando os 4 navios, sendo 2 na diagonal
    // Navio 1 (horizontal)
    for (int j = 4; j <= 7; j++) {
        tabuleiro[2][j] = NAVIO;
    }

    // Navio 2 (vertical)
    for (int i = 4; i <= 6; i++) {
        tabuleiro[i][6] = NAVIO;
    }

    // Navio 3 (diagonal)
    for (int i = 1; i <= 3; i++) {
        tabuleiro[i][i] = NAVIO;
    }

    // Navio 4 (diagonal inversa)
    for (int i = 6, j = 9; i <= 8; i++, j--) {
        tabuleiro[i][j] = NAVIO;
    }

    // Exibindo o tabuleiro completo com os navios
    printf("Tabuleiro de Batalha Naval:\n");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");  // Quebra de linha após cada linha do tabuleiro
    }

    return 0;
}