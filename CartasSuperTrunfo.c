#include <stdio.h>

int main() {
    char estado1, estado2, nome1[50], nome2[50],codigo1[4], codigo2[4];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;
    int pontos_turisticos1, pontos_turisticos2;
    
    // Entrada dos dados da primeira carta
    printf("Digite o estado da Carta 1 (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da Carta 1 (ex: A01): ");
    scanf(" %s", codigo1);
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
    printf("\nDigite o estado da Carta 2 (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da Carta 2 (ex: B02): ");
    scanf(" %s", codigo2);
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
    
    // Cálculo do Super Poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);
    
    // Exibição dos dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);
    
    // Comparação das cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu\n", populacao1 > populacao2 ? 1 : 2);
    printf("Área: Carta %d venceu\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu\n", pontos_turisticos1 > pontos_turisticos2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu\n", densidade1 < densidade2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu\n", pib_per_capita1 > pib_per_capita2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu\n", super_poder1 > super_poder2 ? 1 : 2);
    
    return 0;
}

