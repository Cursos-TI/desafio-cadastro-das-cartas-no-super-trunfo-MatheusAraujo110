#include <stdio.h>
#include <string.h>

struct Carta
{
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
};

int main()
{
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++)
    {
        printf("\nInforme os dados da Carta %d:\n", i + 1);

        printf("Estado (letra de A a H): ");
        scanf(" %c", &cartas[i].estado);

        printf("Código da Carta (ex: A01): ");
        scanf("%s", cartas[i].codigo);

        printf("Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);

        printf("População: ");
        scanf("%d", &cartas[i].populacao);

        printf("Área em km²: ");
        scanf("%f", &cartas[i].area);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        cartas[i].densidade = cartas[i].populacao / cartas[i].area;
    }

    int opcao;
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nComparação: População\n");
        printf("%s: %d\n", cartas[0].nomeCidade, cartas[0].populacao);
        printf("%s: %d\n", cartas[1].nomeCidade, cartas[1].populacao);

        if (cartas[0].populacao > cartas[1].populacao)
            printf("Vencedor: %s\n", cartas[0].nomeCidade);
        else if (cartas[1].populacao > cartas[0].populacao)
            printf("Vencedor: %s\n", cartas[1].nomeCidade);
        else
            printf("Empate!\n");
        break;

    case 2:
        printf("\nComparação: Área\n");
        printf("%s: %.2f km²\n", cartas[0].nomeCidade, cartas[0].area);
        printf("%s: %.2f km²\n", cartas[1].nomeCidade, cartas[1].area);

        if (cartas[0].area > cartas[1].area)
            printf("Vencedor: %s\n", cartas[0].nomeCidade);
        else if (cartas[1].area > cartas[0].area)
            printf("Vencedor: %s\n", cartas[1].nomeCidade);
        else
            printf("Empate!\n");
        break;

    case 3:
        printf("\nComparação: PIB\n");
        printf("%s: %.2f bilhões\n", cartas[0].nomeCidade, cartas[0].pib);
        printf("%s: %.2f bilhões\n", cartas[1].nomeCidade, cartas[1].pib);

        if (cartas[0].pib > cartas[1].pib)
            printf("Vencedor: %s\n", cartas[0].nomeCidade);
        else if (cartas[1].pib > cartas[0].pib)
            printf("Vencedor: %s\n", cartas[1].nomeCidade);
        else
            printf("Empate!\n");
        break;

    case 4:
        printf("\nComparação: Pontos Turísticos\n");
        printf("%s: %d\n", cartas[0].nomeCidade, cartas[0].pontosTuristicos);
        printf("%s: %d\n", cartas[1].nomeCidade, cartas[1].pontosTuristicos);

        if (cartas[0].pontosTuristicos > cartas[1].pontosTuristicos)
            printf("Vencedor: %s\n", cartas[0].nomeCidade);
        else if (cartas[1].pontosTuristicos > cartas[0].pontosTuristicos)
            printf("Vencedor: %s\n", cartas[1].nomeCidade);
        else
            printf("Empate!\n");
        break;

    case 5:
        printf("\nComparação: Densidade Demográfica\n");
        printf("%s: %.2f hab/km²\n", cartas[0].nomeCidade, cartas[0].densidade);
        printf("%s: %.2f hab/km²\n", cartas[1].nomeCidade, cartas[1].densidade);

        if (cartas[0].densidade < cartas[1].densidade)
            printf("Vencedor: %s\n", cartas[0].nomeCidade);
        else if (cartas[1].densidade < cartas[0].densidade)
            printf("Vencedor: %s\n", cartas[1].nomeCidade);
        else
            printf("Empate!\n");
        break;

    default:
        printf("Opção inválida!\n");
        break;
    }

    return 0;
}
