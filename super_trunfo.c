#include <stdio.h>

int main(){

    char estado;
    char codigo_carta[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int ponto_turistico;

    printf("Super Trunfo \n\n");

    printf("Carta 1 \n");
    
    printf("Insira uma letra de A a H, representando um dos oito estados: \n");
    scanf("%c", &estado);

    printf("Insira o código da carta (uma letra seguida de um número de 01 a 04): \n");
    scanf("%s", codigo_carta);

    printf("Insira o nome da cidade: \n");
    scanf("%s", cidade);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Insira a quantidade de  pontos turísticos na cidade: \n");
    scanf("%d", &ponto_turistico);

    
    printf("Carta 1: \n\n");
    
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", area);
    printf("PIB: %.2f bilhões de reais \n", pib);
    printf("Número de pontos turísticos: %d \n", ponto_turistico);

    return 0;
}