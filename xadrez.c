#include <stdio.h>

#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

// Funções Recursivas
void mover_bispo(int mov) {
    if (mov == 0) return;
    printf("Diagonal Superior Direita\n");
    mover_bispo(mov - 1);
}

void mover_torre(int mov) {
    if (mov == 0) return;
    printf("Direita\n");
    mover_torre(mov - 1);
}

void mover_rainha(int mov) {
    if (mov == 0) return;
    printf("Esquerda\n");
    mover_rainha(mov - 1);
}

// Movimentação do Cavalo usando loops aninhados
void mover_cavalo() {
    for (int i = 0; i < 1; i++) { // Movimento único
        printf("Cima\n");
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

int main() {
    printf("Movimentacao do Bispo:\n");
    mover_bispo(BISPO_MOV);

    printf("\nMovimentacao da Torre:\n");
    mover_torre(TORRE_MOV);

    printf("\nMovimentacao da Rainha:\n");
    mover_rainha(RAINHA_MOV);

    printf("\nMovimentacao do Cavalo:\n");
    mover_cavalo();

    return 0;
 }