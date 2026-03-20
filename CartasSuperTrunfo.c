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


    // BATALHAS DAS CARTAS          COMPARAÇOES UTILIZANDO IF ELSE

    float super1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_p_c1 + inverso_densidade1;
    float super2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_p_c2 + inverso_densidade2;

    printf("\nComparação de Cartas:\n\n");

    int menu;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Opção: ");
    scanf("%d", &menu);

    float valor1_c1, valor1_c2;
    float valor2_c1, valor2_c2;
    switch (menu)
    {

    case 1:
        valor1_c1 = populacao1;
        valor1_c2 = populacao2;
        if (populacao1 > populacao2){
            printf("No quesito população,   %s GANHOU !\n", nome1);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome1, populacao1, nome2, populacao2);
        }else if (populacao2 > populacao1){
            
            printf("No quesito população,   %s GANHOU !\n", nome2);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome2, populacao2, nome1, populacao1);
        }else{printf("EMPATE NO QUESITO POPULAÇAO!");}
        break;

    case 2:
        valor1_c1 = area1;
        valor1_c2 = area2;
        if (area1 > area2){
            printf("No quesito Área,   %s GANHOU !\n", nome1);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, area1, nome2, area2);
        }else if (area2 > area1){
            
            printf("No quesito Área,   %s GANHOU !\n", nome2);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome2, area2, nome1, area1);
        }else{printf("EMPATE NO QUESITO ÁREA!!! ");}
        break;

    case 3:
        valor1_c1 = pib1;
        valor1_c2 = pib2;
        if (pib1 > pib2){
            printf("No quesito PIB,     %s GANHOU!\n", nome1);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, pib1, nome2, pib2);
        }else if (pib2 > pib1){
            printf("No quesito PIB,     %s GANHOU!\n", nome2);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome2, pib2, nome1, pib1);
        }else{printf("EMPATE NO QUESITO PIB!!! ");}
        break;
    case 4:
        valor1_c1 = pontos_turisticos1;
        valor1_c2 = pontos_turisticos2;
        if (pontos_turisticos1 > pontos_turisticos2){
            printf("No quesito Número de pontos turísticos,     %s GANHOU!\n", nome1);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome1, pontos_turisticos1, nome2, pontos_turisticos2);
        }else if (pontos_turisticos2 > pontos_turisticos1){
            printf("No quesito Número de pontos turísticos,     %s GANHOU!\n", nome2);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome2, pontos_turisticos2, nome1, pontos_turisticos1);

        }else{printf("EMPATE NO QUESITO PONTOS TURÍSTICOS!!! ");}
        break;
    case 5:
        valor1_c1 = densidade1;
        valor1_c2 = densidade2;
        if (densidade1 < densidade2){
            printf("No quesito Densidade populacional,  CIDADE 1 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, inverso_densidade1, nome2, inverso_densidade2);
        }else if (densidade2 < densidade1){
            printf("No quesito Densidade populacional,  CIDADE 2 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, inverso_densidade2, nome2, inverso_densidade1);
        }else{printf("EMPATE NO QUESITO DENSIDADE POPULACIONAL!!! ");}
        break;
    case 6:
        valor1_c1 = pib_p_c1;
        valor1_c2 = pib_p_c2;
        if(pib_p_c1 > pib_p_c2){
            printf("No quesito PIB per capita,  CIDADE 1 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, pib_p_c1, nome2, pib_p_c2);
        }else if (pib_p_c2 > pib_p_c1){
            printf("No quesito PIB per capita,  CIDADE 2 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, pib_p_c2, nome2, pib_p_c1);
        }else{printf("EMPATE NO QUESITO PIB PER CAPITA!!! ");}
        break;

    default:
        break;
    }

    int menu2;
    printf("Escolha o segundo atributo: ");


    if(menu != 1) printf("1 - População\n");
    if(menu != 2) printf("2 - Área\n");
    if(menu != 3) printf("3 - PIB\n");
    if(menu != 4) printf("4 - Pontos Turísticos\n");
    if(menu != 5) printf("5 - Densidade Demográfica\n");
    if(menu != 6) printf("6 - PIB per Capita\n");
    scanf("%d", &menu2);
    switch (menu2){
    

    case 1:
        valor2_c1 = populacao1;
        valor2_c2 = populacao2;
        if (populacao1 > populacao2){
            printf("No quesito população,   %s GANHOU !\n", nome1);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome1, populacao1, nome2, populacao2);
        }else if (populacao2 > populacao1){
            
            printf("No quesito população,   %s GANHOU !\n", nome2);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome2, populacao2, nome1, populacao1);
        }else{printf("EMPATE NO QUESITO POPULAÇAO!");}
        break;

    case 2:
        valor2_c1 = area1;
        valor2_c2 = area2;
        if (area1 > area2){
            printf("No quesito Área,   %s GANHOU !\n", nome1);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, area1, nome2, area2);
        }else if (area2 > area1){
            
            printf("No quesito Área,   %s GANHOU !\n", nome2);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome2, area2, nome1, area1);
        }else{printf("EMPATE NO QUESITO ÁREA!!! ");}
        break;

    case 3:
        valor2_c1 = pib1;
        valor2_c2 = pib2;
        if (pib1 > pib2){
            printf("No quesito PIB,     %s GANHOU!\n", nome1);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, pib1, nome2, pib2);
        }else if (pib2 > pib1){
            printf("No quesito PIB,     %s GANHOU!\n", nome2);
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome2, pib2, nome1, pib1);
        }else{printf("EMPATE NO QUESITO PIB!!! ");}
        break;
    case 4:
        valor2_c1 = pontos_turisticos1;
        valor2_c2 = pontos_turisticos2;
        if (pontos_turisticos1 > pontos_turisticos2){
            printf("No quesito Número de pontos turísticos,     %s GANHOU!\n", nome1);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome1, pontos_turisticos1, nome2, pontos_turisticos2);
        }else if (pontos_turisticos2 > pontos_turisticos1){
            printf("No quesito Número de pontos turísticos,     %s GANHOU!\n", nome2);
            printf("%s tem: %d, \n enquanto...\n %s tem: %d", nome2, pontos_turisticos2, nome1, pontos_turisticos1);

        }else{printf("EMPATE NO QUESITO PONTOS TURÍSTICOS!!! ");}
        break;
    case 5:
        valor2_c1 = densidade1;
        valor2_c2 = densidade2;
        if (densidade1 < densidade2){
            printf("No quesito Densidade populacional,  CIDADE 1 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, inverso_densidade1, nome2, inverso_densidade2);
        }else if (densidade2 < densidade1){
            printf("No quesito Densidade populacional,  CIDADE 2 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, inverso_densidade2, nome2, inverso_densidade1);
        }else{printf("EMPATE NO QUESITO DENSIDADE POPULACIONAL!!! ");}
        break;
    case 6:
        valor2_c1 = pib_p_c1;
        valor2_c2 = pib_p_c2;
        if(pib_p_c1 > pib_p_c2){
            printf("No quesito PIB per capita,  CIDADE 1 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, pib_p_c1, nome2, pib_p_c2);
        }else if (pib_p_c2 > pib_p_c1){
            printf("No quesito PIB per capita,  CIDADE 2 GANHOU !\n");
            printf("%s tem: %.2f, \n enquanto...\n %s tem: %.2f", nome1, pib_p_c2, nome2, pib_p_c1);
        }else{printf("EMPATE NO QUESITO PIB PER CAPITA!!! ");}
        break;

    default:
        break;
    }
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\nResultado final:\n");
    (soma1 > soma2) ? printf("%s venceu!\n", nome1) :
    (soma2 > soma1) ? printf("%s venceu!\n", nome2) :
    printf("Empate!\n");
    

    
    return 0;
}