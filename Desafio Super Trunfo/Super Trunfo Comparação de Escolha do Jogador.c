#include <stdio.h>
#include <string.h>

// Função para exibir o menu de atributos
void exibirMenu(int ignorar) {
    printf("Escolha um atributo:\n");
    if (ignorar != 1) printf("1 - População\n");
    if (ignorar != 2) printf("2 - Área\n");
    if (ignorar != 3) printf("3 - PIB\n");
    if (ignorar != 4) printf("4 - Pontos Turísticos\n");
    if (ignorar != 5) printf("5 - Densidade Populacional\n");
}

int main() {
    // Dados das cartas
    char nome1[100] = "São Paulo";
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 28;

    char nome2[100] = "Rio de Janeiro";
    unsigned long int populacao2 = 6700000;
    float area2 = 1200.27;
    float pib2 = 412.12;
    int pontos2 = 22;

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Escolha de atributos
    int escolha1 = 0, escolha2 = 0;
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;

    // Menu 1
    printf("Selecione o primeiro atributo para comparar:\n");
    exibirMenu(0);
    scanf("%d", &escolha1);

    // Menu 2 (dinâmico)
    do {
        printf("Selecione o segundo atributo para comparar (diferente do primeiro):\n");
        exibirMenu(escolha1);
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
            printf("Erro: O segundo atributo não pode ser igual ao primeiro.\n");
    } while (escolha1 == escolha2);

    // Função para obter valor com base na escolha
    switch (escolha1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pontos1; valor2_attr1 = pontos2; break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    switch (escolha2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pontos1; valor2_attr2 = pontos2; break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        default: printf("Atributo inválido.\n"); return 1;
    }

    // Ajuste para densidade (menor vence)
    float pontosCarta1 = 0, pontosCarta2 = 0;
    pontosCarta1 += (escolha1 == 5) ? (1.0 / valor1_attr1) : valor1_attr1;
    pontosCarta2 += (escolha1 == 5) ? (1.0 / valor2_attr1) : valor2_attr1;

    pontosCarta1 += (escolha2 == 5) ? (1.0 / valor1_attr2) : valor1_attr2;
    pontosCarta2 += (escolha2 == 5) ? (1.0 / valor2_attr2) : valor2_attr2;

    // Exibir resultado
    printf("\nComparando %s vs %s\n", nome1, nome2);
    printf("Atributo %d: %.2f (1) vs %.2f (2)\n", escolha1, valor1_attr1, valor2_attr1);
    printf("Atributo %d: %.2f (1) vs %.2f (2)\n", escolha2, valor1_attr2, valor2_attr2);
    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", nome1, pontosCarta1);
    printf("%s: %.2f\n", nome2, pontosCarta2);

    // Resultado final usando operador ternário
    printf("Resultado: %s\n", 
        (pontosCarta1 > pontosCarta2) ? nome1 :
        (pontosCarta2 > pontosCarta1) ? nome2 :
        "Empate!");

    return 0;
}