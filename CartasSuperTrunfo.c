#include <stdio.h>

struct Carta
{
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main()
{
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++)
    {
        printf("\nInforme os dados da Carta %d:\n", i + 1);

        printf("Estado (letra de A a H): ");
        scanf(" %c", &cartas[i].estado); // Espaço antes do %c limpa o buffer

        printf("Código da Carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade); // Lê até o final da linha (inclusive com espaços)

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área em km²: ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    for (int i = 0; i < 2; i++)
    {
        float densidade = cartas[i].populacao / cartas[i].area;
        float pibPerCapita = (cartas[i].pib * 1000000000) / cartas[i].populacao;

        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %c\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade);
        printf("PIB per Capita: %.2f reais\n", pibPerCapita);
    }

    return 0;
}
