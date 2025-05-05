#include <stdio.h>

// ==================== Funções Recursivas ====================

// Função recursiva para movimentar a Torre para a direita
void moverTorre(int casas_restantes) {
    if (casas_restantes <= 0) return;
    printf("Direita\n");
    moverTorre(casas_restantes - 1);
}

// Função recursiva para movimentar a Rainha para a esquerda
void moverRainha(int casas_restantes) {
    if (casas_restantes <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas_restantes - 1);
}

// Função recursiva com loops aninhados para movimentar o Bispo na diagonal (Cima Direita)
void moverBispo(int casas_verticais, int casas_horizontais) {
    if (casas_verticais <= 0 || casas_horizontais <= 0) return;

    for (int i = 0; i < 1; i++) { // loop vertical (simulando 1 passo)
        for (int j = 0; j < 1; j++) { // loop horizontal (simulando 1 passo)
            printf("Cima Direita\n");
        }
    }
    moverBispo(casas_verticais - 1, casas_horizontais - 1);
}

// ==================== Movimento do Cavalo ====================

void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int verticalSteps = 0;
    int horizontalSteps = 0;

    // Loop externo: movimento vertical (2 casas para cima)
    for (verticalSteps = 0; verticalSteps < 2; verticalSteps++) {
        printf("Cima\n");
    }

    // Loop interno: movimento horizontal (1 casa para direita)
    for (horizontalSteps = 0; horizontalSteps < 2; horizontalSteps++) {
        if (horizontalSteps == 0) {
            printf("Direita\n");
            break; // Apenas 1 casa para a direita
        }
    }
}

// ==================== Função Principal ====================

int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    // Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}