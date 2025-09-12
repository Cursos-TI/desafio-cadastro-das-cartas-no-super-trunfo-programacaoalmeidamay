#include <stdio.h>

int main(){
    // Variaveis da Carta 1
    char estado1;
    char codigo1[4];
    char nomecidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    // Variaveis da Carta 2 
    char estado2;
    char codigo2[4];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontoturisticos2;

    // Entrada de dados da Carta 1
    printf("Digite os dados da carta 1:\n");
    printf("Estado (A-H):");
    scanf("%c", &estado1);

    printf("Codigo da carta (ex: A01)\n:");
    scanf("%s", codigo1);

    printf("Nome da cidade:\n");
    scanf("%d", nomecidade1);

    printf("populacao:\n");
    scanf("%d", populacao1);

    printf("Area (em km2):\n");
    scanf("%f", &area1);

    printf("PIB:\n");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados carta 2

    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H):");
    scanf("%c", &estado2);

    printf("Codigo da carta (ex: B02):\n");
    scanf("%s", &codigo2);

    printf("Nome da cidade\n");
    scanf("%c", &cidade2);

    printf("Populacao:\n");
    scanf("%d", &populacao2);

    printf("Area (em km2):\n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos:\n");
    scanf("%d", &pontosturisticos);



}

