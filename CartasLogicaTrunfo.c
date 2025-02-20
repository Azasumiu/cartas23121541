#include <stdio.h>

int main() {
    char nome1[50], nome2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    int pontos_turisticos1, pontos_turisticos2;

    // Entrada dos dados da primeira carta

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49s", nome1);
    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da Carta 1 (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da Carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados da segunda carta
    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49s", nome2);
    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da Carta 2 (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da Carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    // Menu para escolha dos atributos
    int atributo1, atributo2;
    printf("\nEscolha dois atributos para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");

    // Escolha do primeiro atributo
    printf("Digite o número correspondente ao primeiro atributo: ");
    scanf("%d", &atributo1);

    // Escolha do segundo atributo (não pode ser igual ao primeiro)
    do {
        printf("Digite o número correspondente ao segundo atributo (diferente do primeiro): ");
        scanf("%d", &atributo2);
    } while (atributo2 == atributo1);

    // Comparação dos atributos
    float valor1_atributo1, valor2_atributo1, valor1_atributo2, valor2_atributo2;
    char *nome_atributo1, *nome_atributo2;

    // Atributo 1
    switch (atributo1) {
        case 1:
            valor1_atributo1 = populacao1;
            valor2_atributo1 = populacao2;
            nome_atributo1 = "População";
            break;
        case 2:
            valor1_atributo1 = area1;
            valor2_atributo1 = area2;
            nome_atributo1 = "Área";
            break;
        case 3:
            valor1_atributo1 = pib1;
            valor2_atributo1 = pib2;
            nome_atributo1 = "PIB";
            break;
        case 4:
            valor1_atributo1 = pontos_turisticos1;
            valor2_atributo1 = pontos_turisticos2;
            nome_atributo1 = "Pontos Turísticos";
            break;
        case 5:
            valor1_atributo1 = densidade1;
            valor2_atributo1 = densidade2;
            nome_atributo1 = "Densidade Populacional";
            break;
        case 6:
            valor1_atributo1 = pib_per_capita1;
            valor2_atributo1 = pib_per_capita2;
            nome_atributo1 = "PIB per Capita";
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Atributo 2
    switch (atributo2) {
        case 1:
            valor1_atributo2 = populacao1;
            valor2_atributo2 = populacao2;
            nome_atributo2 = "População";
            break;
        case 2:
            valor1_atributo2 = area1;
            valor2_atributo2 = area2;
            nome_atributo2 = "Área";
            break;
        case 3:
            valor1_atributo2 = pib1;
            valor2_atributo2 = pib2;
            nome_atributo2 = "PIB";
            break;
        case 4:
            valor1_atributo2 = pontos_turisticos1;
            valor2_atributo2 = pontos_turisticos2;
            nome_atributo2 = "Pontos Turísticos";
            break;
        case 5:
            valor1_atributo2 = densidade1;
            valor2_atributo2 = densidade2;
            nome_atributo2 = "Densidade Populacional";
            break;
        case 6:
            valor1_atributo2 = pib_per_capita1;
            valor2_atributo2 = pib_per_capita2;
            nome_atributo2 = "PIB per Capita";
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    // Comparação dos atributos
    int vitoria_carta1_atributo1 = (atributo1 == 5) ? (valor1_atributo1 < valor2_atributo1) : (valor1_atributo1 > valor2_atributo1);
    int vitoria_carta1_atributo2 = (atributo2 == 5) ? (valor1_atributo2 < valor2_atributo2) : (valor1_atributo2 > valor2_atributo2);

    // Soma dos valores dos atributos
    float soma_carta1 = valor1_atributo1 + valor1_atributo2;
    float soma_carta2 = valor2_atributo1 + valor2_atributo2;

    // Exibição dos resultados
    printf("\nComparação de Cartas:\n");
    printf("Atributo 1: %s\n", nome_atributo1);
    printf("Carta 1 - %s: %.2f\n", nome1, valor1_atributo1);
    printf("Carta 2 - %s: %.2f\n", nome2, valor2_atributo1);
    printf("Vencedor do Atributo 1: %s\n", vitoria_carta1_atributo1 ? nome1 : nome2);

    printf("\nAtributo 2: %s\n", nome_atributo2);
    printf("Carta 1 - %s: %.2f\n", nome1, valor1_atributo2);
    printf("Carta 2 - %s: %.2f\n", nome2, valor2_atributo2);
    printf("Vencedor do Atributo 2: %s\n", vitoria_carta1_atributo2 ? nome1 : nome2);

    printf("\nSoma dos Atributos:\n");
    printf("Carta 1 - %s: %.2f\n", nome1, soma_carta1);
    printf("Carta 2 - %s: %.2f\n", nome2, soma_carta2);

    if (soma_carta1 > soma_carta2) {
        printf("\nResultado Final: Carta 1 (%s) venceu!\n", nome1);
    } else if (soma_carta2 > soma_carta1) {
        printf("\nResultado Final: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("\nResultado Final: Empate!\n");
    }

    return 0;
}