#include <stdio.h>

#define linha 10 
// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Nível Mestre - Posicionamento dos Navios

int main() {
    printf("Tabuleiro Batalha Naval - Nivel Mestre\n\n"); 

    char LINHA[10] = {'A','B','C','D','E','F','G','H','I','J'};

    //criando o tabuleiro (matriz 10x10)
    int tabuleiro[10][10] = {0};

    //criando o cone habilidade (matrix 5x5)
    int conehabilidade[5][5] = {0};

    //criando cruz habilidade(matrix 5x5)
    int cruzhabilidade[5][5] = {0};

    // criando Octaedro habilidade (matrix 5x5)
    int octaedrohabilidade[5][5] = {0};


    //Posicionando dois navios no tabuleiro, dois horizontalmente e dois diagonalmente
    // Navio horizontal de tamanho 3 (linha C, colunas 2,3,4)
    for (int j = 2; j < 5; j++) {
        if (tabuleiro[2][j] == 0) {
            tabuleiro[2][j] = 3;
            printf("Navio 1 horizontal posicionado em: (%c,%d)\n", LINHA[2], j);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", LINHA[2], j);
        }
    }

    // Navio horizontal de tamanho 3 (linha D, colunas 2,3,4)
    for (int j = 2; j < 5; j++) {
        if (tabuleiro[3][j] == 0) {
            tabuleiro[3][j] = 3;
            printf("Navio 2 horizontal posicionado em: (%c,%d)\n", LINHA[3], j);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", LINHA[3], j);
        }
    }
    
    // Navio diagonal de tamanho 3 (linha = coluna)
    for (int i = 4; i < 7; i++) {
        if (tabuleiro[i][i] == 0) {
            tabuleiro[i][i] = 3; // posições (4,4), (5,5), (6,6)
            printf("Navio 3 diagonal posicionado em: (%c,%d)\n", LINHA[i], i);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", LINHA[i], i);
        }
    }

    // Navio diagonal de tamanho 3 (linha + coluna = 9)
    for (int i = 2; i < 5; i++) {
        if (tabuleiro[i][9-i] == 0) {
            tabuleiro[i][9-i] = 3; // posições (2,7), (3,6), (4,5)
            printf("Navio 4 diagonal posicionado em: (%c,%d)\n", LINHA[i], 9-i);
        } else {
            printf("Erro: posição (%c,%d) já ocupada!\n", LINHA[i], 9-i);
        }
        
    }



    // criando o cone habilidade (Matrix 5x5)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (j >= 2 - i && j <= 2 + i ) {
                conehabilidade[i][j] = 1; // area afetada
            } else {
            conehabilidade[i][j] = 0; // nao afetada
            }
        }
    }

    // criando a cruz habilidade (Matrix 5x5)
    for (int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if (j == 2 || i == 2) {
                cruzhabilidade[i][j] = 1; // area afetada
            } else {
                cruzhabilidade[i][j] = 0; // nao afetada
            }
        }
    }

    // criando o octaedro habilidade (Matrix 5x5)
    // criando o octaedro habilidade (Matrix 5x5)
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        // condição para formar o losango sem usar abs
        if ((i == 2) || (j == 2) || 
            (i == 1 && (j >= 1 && j <= 3)) ||
            (i == 3 && (j >= 1 && j <= 3)) ||
            (i == 0 && j == 2) ||
            (i == 4 && j == 2)) {
            octaedrohabilidade[i][j] = 1;
        } else {
            octaedrohabilidade[i][j] = 0;
        }
    }
}


    // 3. Exibindo o tabuleiro
    printf("\nTabuleiro atualizado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%c ", LINHA[i]); // exibe as letras do tabuleiro
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // exibe o tabuleiro com navios
        }
        printf("\n"); // nova linha após cada linha do tabuleiro
    }
    
    // exibindo o cone habilidade
     printf("\ncone habilidade:\n");
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", conehabilidade[i][j]); // exibe o cone habilidade
        }
        printf("\n"); // nova linha apos cada linha do cone habilidade
     }

     // exibindo a cruz habilidade
     printf("\ncruz habilidade:\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%d ", cruzhabilidade[i][j]); // exibe a cruz habilidade
            }
            printf("\n"); // nova linha apos cada linha da cruz habilidade
        }

     // exibindo o octaedro habilidade
     printf("\noctaedro habilidade:\n");
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                printf("%d ", octaedrohabilidade[i][j]); // exibe o octaedro habilidade
            }
            printf("\n"); // nova linha apos cada linha do octaedro habilidade
        }

     



    return 0;
}
