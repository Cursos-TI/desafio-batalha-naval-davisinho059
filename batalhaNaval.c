#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Nível aventureiro - Posicionamento dos Navios

int main() {
    printf("Tabuleiro Batalha Naval - Nivel Aventureiro\n\n"); 

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // 1. criando o tabuleiro (matriz 10x10)
    int tabuleiro[10][10] = {0};

    // 2. Posicionando dois navios no tabuleiro, dois horizontalmente e dois diagonalmente

    // Navio horizontal de tamanho 3 (linha C, colunas 2,3,4)
    for (int j = 2; j < 5; j++) {
        if (tabuleiro[2][j] == 0) {
            tabuleiro[2][j] = 3;
            printf("Navio 1 horizontal posicionado em: (%c,%d)\n", linha[2], j);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", linha[2], j);
        }
    }

    // Navio horizontal de tamanho 3 (linha D, colunas 2,3,4)
    for (int j = 2; j < 5; j++) {
        if (tabuleiro[3][j] == 0) {
            tabuleiro[3][j] = 3;
            printf("Navio 2 horizontal posicionado em: (%c,%d)\n", linha[3], j);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", linha[3], j);
        }
    }
    
    // Navio diagonal de tamanho 3 (linha = coluna)
    for (int i = 4; i < 7; i++) {
        if (tabuleiro[i][i] == 0) {
            tabuleiro[i][i] = 3; // posições (4,4), (5,5), (6,6)
            printf("Navio 3 diagonal posicionado em: (%c,%d)\n", linha[i], i);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", linha[i], i);
        }
    }

    // Navio diagonal de tamanho 3 (linha + coluna = 9)
    for (int i = 2; i < 5; i++) {
        if (tabuleiro[i][9-i] == 0) {
            tabuleiro[i][9-i] = 3; // posições (2,7), (3,6), (4,5)
            printf("Navio 4 diagonal posicionado em: (%c,%d)\n", linha[i], 9-i);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", linha[i], 9-i);
        }
    }

    // 3. Exibindo o tabuleiro
    printf("\nTabuleiro atualizado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]); // exibe as letras do tabuleiro
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // exibe o tabuleiro com navios
        }
        printf("\n"); // nova linha após cada linha do tabuleiro
    }

    return 0;
}
