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
        scanf(" %c", &cartas[i].estado);
        scanf("%s", cartas[i].codigo);
        scanf(" %[^\n]", cartas[i].nomeCidade);
        scanf("%d", &cartas[i].populacao);
        scanf("%f", &cartas[i].area);
        scanf("%f", &cartas[i].pib);
        scanf("%d", &cartas[i].pontosTuristicos);
    }

    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");
    printf("Carta 1 - %s (%c): %d\n", cartas[0].nomeCidade, cartas[0].estado, cartas[0].populacao);
    printf("Carta 2 - %s (%c): %d\n", cartas[1].nomeCidade, cartas[1].estado, cartas[1].populacao);

    if (cartas[0].populacao > cartas[1].populacao)
        printf("Resultado: Carta 1 (%s) venceu!\n", cartas[0].nomeCidade);
    else if (cartas[1].populacao > cartas[0].populacao)
        printf("Resultado: Carta 2 (%s) venceu!\n", cartas[1].nomeCidade);
    else
        printf("Resultado: Empate!\n");

    return 0;
}
