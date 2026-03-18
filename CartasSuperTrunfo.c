#include <stdio.h>

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades

    // CIDADE 1
    char estado1;
    char codigo1[5];
    char nome1[50];
    unsigned int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // CIDADE 2
    char estado2;
    char codigo2[5];
    char nome2[50];
    unsigned int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Área para entrada de dados - Carta 1
    printf("=== Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);


    // Área para Entrada de dados - Carta 2
    printf("\n=== Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // CÁLCULOS NECESSÁRIOS
    
    float densidade1 = populacao1 / area1;
    float pib_p_c1 = (pib1 * 1000000000.0) / populacao1;

    float densidade2 = populacao2 / area2;
    float pib_p_c2 = (pib2 * 1000000000.0) / populacao2;

    float inverso_densidade1 = 1.0 / densidade1;
    float inverso_densidade2 = 1.0 / densidade2;


    // Área para exibição dos dados
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_p_c1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_p_c2);


    // BATALHAS DAS CARTAS

    float super1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_p_c1 + inverso_densidade1;
    float super2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_p_c2 + inverso_densidade2;

    printf("\nComparação de Cartas:\n\n");

    printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1 > pontos_turisticos2);

    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);

    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_p_c1 > pib_p_c2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}