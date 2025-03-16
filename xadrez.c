#include <stdio.h>

int main() {
    int i;

    // Movimentação da Torre (usando for) - 5 casas para a direita
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimentação do Bispo (usando while) - 5 casas na diagonal (cima e direita)
    printf("Movimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // Movimentação da Rainha (usando do-while) - 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
}
