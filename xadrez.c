#include <stdio.h>

int main() {
    // Declarando as variaveis da primeira carta
    char estado1[3];
    char carta1[3];
    char nome_cidade1[20];
    int populacao1;
    float area_km2_1;
    float pib1;
    int pontos_turisticos1;

    // Declarando as variaveis da segunda carta
    char estado2[3];
    char carta2[3];
    char nome_cidade2[20];
    int populacao2;
    float area_km2_2;
    float pib2;
    int pontos_turisticos2;

    // Coletando os dados da primeira carta
    printf("\nDigite os dados da primeira carta do super trunfo: \n");

    printf("\nDigite o estado: \n");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a area em km2: \n");
    scanf("%f", &area_km2_1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Coletando os dados da segunda carta
    printf("\nDigite os dados da segunda carta do super trunfo: \n");

    printf("\nDigite o estado: \n");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: \n");
    scanf("%s", carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_cidade2);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a area em km2: \n");
    scanf("%f", &area_km2_2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);


    return 0;
}

