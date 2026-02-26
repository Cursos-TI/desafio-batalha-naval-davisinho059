#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
// Nível Novato - Posicionamento dos Navios

int main() {
    printf("tabuleiro batalha naval nivel iniciante\n"); 

    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};

    // 1. criando o tabuleiro (matriz 10x10)
    int tabuleiro[10][10] = {0};

    // 2. Posicionando dois navios no tabuleiro, um verticalmente e outro horizontalmente
    // Navio horizontal de tamanho 3 (linha C, colunas 2,3,4)
    for (int j = 2; j < 5; j++) {
        tabuleiro[2][j] = 3;
        printf("Navio horizontal posicionado em: (%c,%d)\n", linha[2], j);
    }

    // Navio vertical de tamanho 3 (coluna 7, linhas F,G,H)
    for (int i = 5; i < 8; i++) {
        tabuleiro[i][7] = 3;
        printf("Navio vertical posicionado em: (%c,%d)\n", linha[i], 7);
    }

    // 3. Exibindo o tabuleiro 
    for (int i = 0; i < 10; i++) {
        printf("%c ", linha[i]); // exibe as letras do tabuleiro
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // exibe o tabuleiro com navios
        }
        printf("\n"); // nova linha após cada linha do tabuleiro
    }

    return 0;
}
