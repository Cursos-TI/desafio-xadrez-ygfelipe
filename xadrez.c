#include <stdio.h>

int main() {
    // Movimento da Torre - Usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    printf("\n");
    
    // Movimento do Bispo - Usando while
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }
    
    printf("\n");
    
    // Movimento da Rainha - Usando do-while
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);
    
    return 0;
}
