#include <stdio.h>
#include <string.h>
 
int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;      // Nova variável para densidade populacional
    float pib_per_capita1; // Nova variável para PIB per capita
 
    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;      // Nova variável para densidade populacional
    float pib_per_capita2; // Nova variável para PIB per capita
 
    // Instruções para entrada da Carta 1
    printf("=== CADASTRO DA CARTA 1 ===");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area em km²: ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
 
    // Cálculos para a Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
 
    // Instruções para entrada da Carta 2
    printf("=== CADASTRO DA CARTA 2 ===");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area em km²: ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
 
    // Cálculos para a Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
 
    // Exibição formatada da Carta 1
    printf("=== CARTA 1 ===");
    printf("Estado: %c", estado1);
    printf("Codigo: %s", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d", populacao1);
    printf("Area: %f km²", area1);
    printf("PIB: %f bilhoes de reais", pib1);
    printf("Numero de Pontos Turisticos: %d", pontos_turisticos1);
    printf("Densidade Populacional: %f hab/km²", densidade1);
    printf("PIB per Capita: %f reais", pib_per_capita1);
 
    // Exibição formatada da Carta 2
    printf("=== CARTA 2 ===");
    printf("Estado: %c", estado2);
    printf("Codigo: %s", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d", populacao2);
    printf("Area: %f km²", area2);
    printf("PIB: %f bilhoes de reais", pib2);
    printf("Numero de Pontos Turisticos: %d", pontos_turisticos2);
    printf("Densidade Populacional: %f hab/km²", densidade2);
    printf("PIB per Capita: %f reais", pib_per_capita2);
 
    return 0;
}
