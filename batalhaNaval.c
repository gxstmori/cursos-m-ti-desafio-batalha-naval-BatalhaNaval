#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    
    // ========================================
    // Nível Novato - Posicionamento dos Navios
    // ========================================
    
    // Declaração da matriz bidimensional para representar o tabuleiro
    int tabuleiro[10][10] = {0}; // Inicializado com zeros (água)
    
    printf("========================================\n");
    printf("  BATALHA NAVAL - NÍVEL NOVATO\n");
    printf("========================================\n\n");
    
    // ===== POSICIONAMENTO DO NAVIO HORIZONTAL =====
    // Navio 1: Posicionado horizontalmente
    int linhaHorizontal = 3;      // Linha onde o navio será colocado
    int colunaInicialH = 2;       // Coluna inicial do navio
    int tamanhoNavio = 3;         // Tamanho do navio (3 células)
    
    printf("NAVIO 1 - HORIZONTAL\n");
    printf("Posicionando na linha %d, colunas %d a %d\n", 
           linhaHorizontal, colunaInicialH, colunaInicialH + tamanhoNavio - 1);
    
    // Loop para posicionar o navio horizontal no tabuleiro
    for (int j = colunaInicialH; j < colunaInicialH + tamanhoNavio; j++) {
        tabuleiro[linhaHorizontal][j] = 3; // Marca com 3 (navio)
        printf("  Coordenada: [%d][%d]\n", linhaHorizontal, j);
    }
    
    printf("\n");
    
    // ===== POSICIONAMENTO DO NAVIO VERTICAL =====
    // Navio 2: Posicionado verticalmente
    int colunaVertical = 7;       // Coluna onde o navio será colocado
    int linhaInicialV = 5;        // Linha inicial do navio
    
    printf("NAVIO 2 - VERTICAL\n");
    printf("Posicionando na coluna %d, linhas %d a %d\n", 
           colunaVertical, linhaInicialV, linhaInicialV + tamanhoNavio - 1);
    
    // Loop para posicionar o navio vertical no tabuleiro
    for (int i = linhaInicialV; i < linhaInicialV + tamanhoNavio; i++) {
        tabuleiro[i][colunaVertical] = 3; // Marca com 3 (navio)
        printf("  Coordenada: [%d][%d]\n", i, colunaVertical);
    }
    
    printf("\n");
    
    // ===== EXIBIÇÃO DO TABULEIRO =====
    printf("========================================\n");
    printf("       TABULEIRO COMPLETO\n");
    printf("========================================\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    printf("  ----------------------\n");
    
    // Loops aninhados para exibir todo o tabuleiro
    for (int i = 0; i < 10; i++) {
        printf("%d| ", i); // Numeração das linhas
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    printf("========================================\n");
    printf("Legenda: 0 = Água | 3 = Navio\n");
    printf("========================================\n\n");
    
    
    // ========================================
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // ========================================
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    
    // TODO: Implementar Nível Aventureiro
    
    
    // ========================================
    // Nível Mestre - Habilidades Especiais com Matrizes
    // ========================================
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
    
    // Exemplos de exibição das habilidades:
    
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0
    
    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
    
    // TODO: Implementar Nível Mestre
    
    return 0;
}
```

---

## 🎯 RESULTADO DA EXECUÇÃO
```
========================================
  BATALHA NAVAL - NÍVEL NOVATO
========================================

NAVIO 1 - HORIZONTAL
Posicionando na linha 3, colunas 2 a 4
  Coordenada: [3][2]
  Coordenada: [3][3]
  Coordenada: [3][4]

NAVIO 2 - VERTICAL
Posicionando na coluna 7, linhas 5 a 7
  Coordenada: [5][7]
  Coordenada: [6][7]
  Coordenada: [7][7]

========================================
       TABULEIRO COMPLETO
========================================
   0 1 2 3 4 5 6 7 8 9
  ----------------------
0| 0 0 0 0 0 0 0 0 0 0 
1| 0 0 0 0 0 0 0 0 0 0 
2| 0 0 0 0 0 0 0 0 0 0 
3| 0 0 3 3 3 0 0 0 0 0  ← Navio Horizontal
4| 0 0 0 0 0 0 0 0 0 0 
5| 0 0 0 0 0 0 0 3 0 0  ← Navio Vertical (início)
6| 0 0 0 0 0 0 0 3 0 0 
7| 0 0 0 0 0 0 0 3 0 0 
8| 0 0 0 0 0 0 0 0 0 0 
9| 0 0 0 0 0 0 0 0 0 0 
========================================
Legenda: 0 = Água | 3 = Navio
========================================
