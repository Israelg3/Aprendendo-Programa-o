#include <stdio.h>

int main() {
    // Variáveis para os dados da primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[100];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1;

    // Variáveis para os dados da segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[100];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2;

    // Leitura dos dados para a carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado A-H: ");
    scanf(" %c", &estado1);
    printf("Código da carta (ex: A01, B01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Leitura dos dados para a carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado A-H: ");
    scanf(" %c", &estado2);
    printf("Código da carta (ex: A01, B01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição das informações (resumido)
    printf("\n--- Resumo das Cartas ---\n");
    printf("Carta 1 - %s (%c): População = %lu, Área = %.2f, PIB = %.2f, Densidade = %.2f, PIB per Capita = %.2f\n",
        cidade1, estado1, populacao1, area1, pib1, densidade1, pibPerCapita1);
    printf("Carta 2 - %s (%c): População = %lu, Área = %.2f, PIB = %.2f, Densidade = %.2f, PIB per Capita = %.2f\n",
        cidade2, estado2, populacao2, area2, pib2, densidade2, pibPerCapita2);

    // Comparação por um atributo pré-definido: População
    printf("\n--- Comparação de Cartas (Atributo: População) ---\n");
    printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}