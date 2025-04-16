#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo_carta1[20], codigo_carta2[20];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int ponto_turistico1, ponto_turistico2;

    printf("SUPER TRUNFO \n\n");

    printf("Carta 1 \n\n");
    
    printf("Insira uma letra de A até H, representando um dos oito estados: ");
    scanf(" %c", &estado1);

    printf("Insira o código da carta (uma letra seguida de um número de 01 a 04): ");
    scanf("%s", codigo_carta1);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Insira a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Insira a quantidade de  pontos turísticos na cidade: ");
    scanf("%d", &ponto_turistico1);

    printf("\n");
    
    printf("Carta 1: \n\n");
    
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d \n", ponto_turistico1);

    printf("\n");
    
    printf("Carta 2 \n\n");

    printf("Insira uma letra de A até H, representando um dos oito estados: ");
    scanf(" %c", &estado2);

    printf("Insira o código da carta (uma letra seguida de um número de 01 a 04): ");
    scanf("%s", codigo_carta2);

    printf("Insira o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Insira o número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Insira a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Insira a quantidade de  pontos turísticos na cidade: ");
    scanf("%d", &ponto_turistico2);

    printf("\n");

    printf("Carta 2: \n\n");
    
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d \n", ponto_turistico2);

}