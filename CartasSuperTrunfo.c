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
    scanf("%[^\n]", nomecidade1);

    printf("populacao\n:");
    scanf("%d", populacao1);

}

