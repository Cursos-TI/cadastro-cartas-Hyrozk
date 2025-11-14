#include <stdio.h>

int main() {
    // Declarando as variaveis da primeira carta
    char estado1[3], estado2[3];
    char carta1[3], carta2[3];
    char nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2;
    float area_km2_1, area_km2_2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;

    // Coletando os dados da primeira carta
    printf("\n- Digite os dados da primeira carta do super trunfo -\n");

    printf("\nDigite o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: "); 
    scanf("%f", &area_km2_1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Coletando os dados da segunda carta
    printf("\n- Digite os dados da segunda carta do super trunfo -\n");

    printf("\nDigite o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: ");
    scanf("%f", &area_km2_2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibindo os dados das cartas
    printf("\n- Dados da Primeira Carta -\n");

    printf("\nEstado: %s - Código da carta: %s\n", estado1, carta1);
    printf("Nome da Cidade: %s - População: %d\n", nome_cidade1, populacao1);
    printf("Area em km2: %.2f km2 - PIB: %.2f bilhoes de reais\n", area_km2_1, pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);


    // Calculando e exibindo densidade populacional e PIB per capita da primeira carta
    densidade_populacional1 = (float) populacao1 / area_km2_1;
    pib_per_capita1 = (float) pib1 / populacao1;
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n- Dados da Segunda Carta -\n"); 

    printf("\nEstado: %s - código da carta: %s\n", estado2, carta2);
    printf("Nome da Cidade: %s - População: %d\n", nome_cidade2, populacao2);
    printf("Area em km2: %.2f km2 - PIB: %.2f bilhoes de reais\n", area_km2_2, pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);


    // Calculando e exibindo densidade populacional e PIB per capita da segunda carta
    densidade_populacional2 = (float) populacao2 / area_km2_2;
    pib_per_capita2 = (float) pib2 / populacao2;
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);



    return 0;
}

