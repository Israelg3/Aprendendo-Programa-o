#include <stdio.h>

int main() {
    // Variáveis para os dados da primeira carta
    char estado1;
    char codigo1[5];
    char cidade1[100];
    int populacao1;
    float area1, pib1;
    int pontosturisticos1;
    float densidade1, pibPerCapita1;

    // Variáveis para os dados da segunda carta
    char estado2;
    char codigo2[5];
    char cidade2[100];
    int populacao2;
    float area2, pib2;
    int pontosturisticos2;
    float densidade2, pibPerCapita2;

    // Leitura dos dados para a carta 1
    printf("Digite os dados da carta 1: \n");
    printf("Estado A-H: ");
    scanf(" %c", &estado1);
    printf("Codigo da carta (ex: A01, B01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área em km²: ");
    scanf("%f", &area1);
    printf("PIB (em reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    // Leitura dos dados para a carta 2
    printf("\nDigite os dados da carta 2: \n");
    printf("Estado A-H: ");
    scanf(" %c", &estado2);
    printf("Codigo da carta (ex: A01, B01): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área em km²: ");
    scanf("%f", &area2);
    printf("PIB (em reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;

    // Exibição da carta 1
    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição da carta 2
    printf("\nCarta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}