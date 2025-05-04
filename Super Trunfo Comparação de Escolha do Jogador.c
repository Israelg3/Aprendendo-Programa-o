#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para os dados da carta 1
    char nome1[100] = "Brasil";
    unsigned long int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 22000.0;
    int pontosTuristicos1 = 150;
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    // Variáveis para os dados da carta 2
    char nome2[100] = "Argentina";
    unsigned long int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 640.0;
    int pontosTuristicos2 = 80;
    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    int opcao;

    printf("===== SUPER TRUNFO - COMPARAÇÃO DE CARTAS =====\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Sua opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", nome1, nome2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu\n", nome1, populacao1);
            printf("%s: %lu\n", nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d\n", nome1, pontosTuristicos1);
            printf("%s: %d\n", nome2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("Opção inválida! Tente novamente com um número de 1 a 5.\n");
    }

    return 0;
}