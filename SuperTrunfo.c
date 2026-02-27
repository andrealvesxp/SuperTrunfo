#include <stdio.h>
 
int main(){
    //variaveis carta1
    char estado1[3];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
 
    //variaveis carta2
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
 
    //cadastro carta1
    printf("Cadastro da Carta 1\n");
    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB : ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);
 
    //calculos carta1
    densidade1 = populacao1/area1;
    pib_per_capita1 = pib1/populacao1;
    
    printf("\n");

    //cadastro carta2
    printf("Cadastro da Carta 2\n");
    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);
 
    //calculos carta2
    densidade2 = populacao2/area2;
    pib_per_capita2 = pib2/populacao2;
 
    printf("\n");

    //print da carta1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f km²\n", area1);
    printf("PIB: %f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %f hab/km²\n", densidade1);
    printf("PIB per Capita: %f reais\n", pib_per_capita1);
 
    printf("\n");

    //print da carta2
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f km²\n", area2);
    printf("PIB: %f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %f hab/km²\n", densidade2);
    printf("PIB per Capita: %f reais\n", pib_per_capita2);
 
    return 0;
}
