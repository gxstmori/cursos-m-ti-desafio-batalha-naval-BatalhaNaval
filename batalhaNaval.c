#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este codigo inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentarios para implementar cada parte do desafio.

int main() {
    
    // ========================================
    // Nivel Novato - Posicionamento dos Navios
    // ========================================
    
    printf("========================================\n");
    printf("  BATALHA NAVAL - NIVEL NOVATO\n");
    printf("========================================\n\n");
    
    // Declaracao da matriz bidimensional para representar o tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializado com zeros (agua)
    
    // ===== POSICIONAMENTO DO NAVIO HORIZONTAL =====
    int linhaHorizontal = 3;
    int colunaInicialH = 2;
    int tamanhoNavio = 3;
    
    printf("NAVIO 1 - HORIZONTAL\n");
    printf("Posicionando na linha %d, colunas %d a %d\n", 
           linhaHorizontal, colunaInicialH, colunaInicialH + tamanhoNavio - 1);
    
    for (int j = colunaInicialH; j < colunaInicialH + tamanhoNavio; j++) {
        tabuleiro[linhaHorizontal][j] = 3;
        printf("  Coordenada: [%d][%d]\n", linhaHorizontal, j);
    }
    printf("\n");
    
    // ===== POSICIONAMENTO DO NAVIO VERTICAL =====
    int colunaVertical = 7;
    int linhaInicialV = 5;
    
    printf("NAVIO 2 - VERTICAL\n");
    printf("Posicionando na coluna %d, linhas %d a %d\n", 
           colunaVertical, linhaInicialV, linhaInicialV + tamanhoNavio - 1);
    
    for (int i = linhaInicialV; i < linhaInicialV + tamanhoNavio; i++) {
        tabuleiro[i][colunaVertical] = 3;
        printf("  Coordenada: [%d][%d]\n", i, colunaVertical);
    }
    printf("\n");
    
    // ===== EXIBICAO DO TABULEIRO - NIVEL NOVATO =====
    printf("========================================\n");
    printf("    TABULEIRO - NIVEL NOVATO\n");
    printf("========================================\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    printf("  ----------------------\n");
    
    for (int i = 0; i < 10; i++) {
        printf("%d| ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    printf("========================================\n\n");
    
    
    // ========================================
  
}
