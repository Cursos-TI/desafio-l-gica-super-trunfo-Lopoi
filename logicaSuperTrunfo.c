#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Dados da primeira carta
    char codigo_1[4];
    char nome_1[21];
    unsigned long int populacao_1;
    float area_1;
    float pib_1;
    unsigned int pontos_turisticos_1;

    float pib_capita_1;
    float densidade_1;

    float poder_1;

    // Dados da segunda carta
    char codigo_2[4];
    char nome_2[21];
    unsigned long int populacao_2;
    float area_2;
    float pib_2;
    unsigned int pontos_turisticos_2;

    float pib_capita_2;
    float densidade_2;

    float poder_2;

    // Cadastro das Cartas:
    printf("Insira os dados da primeira carta:\n");
    printf("Código: ");
    scanf("%3s", codigo_1);
    printf("Nome: ");
    scanf("%20s", nome_1);
    printf("População: ");
    scanf("%ld", &populacao_1);
    printf("Area: ");
    scanf("%f", &area_1);
    printf("PIB: ");
    scanf("%f", &pib_1);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("\n\nInsira os dados da segunda carta:\n");
    printf("Código: ");
    scanf("%3s", codigo_2);
    printf("Nome: ");
    scanf("%20s", nome_2);
    printf("População: ");
    scanf("%ld", &populacao_2);
    printf("Area: ");
    scanf("%f", &area_2);
    printf("PIB: ");
    scanf("%f", &pib_2);
    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Calculo dos valores
    densidade_1 = populacao_1 / area_1;
    densidade_2 = populacao_2 / area_2;

    pib_capita_1 = pib_1 / populacao_1;
    pib_capita_2 = pib_2 / populacao_2;

    poder_1 = populacao_1 + area_1 + pib_1 + pontos_turisticos_1 + (1 / densidade_1) + pib_capita_1;
    poder_2 = populacao_2 + area_2 + pib_2 + pontos_turisticos_2 + (1 / densidade_2) + pib_capita_2;
    unsigned int comparacao = 0;
    int correct = 0;
    while (correct == 0)
    {
        printf("Escolha um atributo:\n");
        printf("1 - populacao\n");
        printf("2 - area\n");
        printf("3 - pib\n");
        printf("4 - pontos turísticos\n");
        printf("5 - densidade populacional\n");
        printf("6 - pib per capita\n");
        scanf("%d", &comparacao);
        if (comparacao > 6 || comparacao < 1)
        {
            printf("Escolha Inválida\n");
        }
        else
        {
            correct = 1;
        }
    }

    switch (comparacao)
    {
    case 1:
        printf("Comparação de cartas (Atributo: População):\n");
        printf("%s (%s): %ld \n", nome_1, codigo_1, populacao_1);
        printf("%s (%s): %ld \n", nome_2, codigo_2, populacao_2);
        if (populacao_1 > populacao_2)
        {
            printf("Resultado: %s Venceu \n", nome_1);
        }
        else if (populacao_2 > populacao_1)
        {
            printf("Resultado: %s Venceu \n", nome_2);
        }
        else
        {
            printf("Resultado: Empate\n");
        }
        break;
    case 2:
        printf("Comparação de cartas (Atributo: Area):\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, area_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, area_2);
        if (area_1 > area_2)
        {
            printf("Resultado: %s Venceu \n", nome_1);
        }
        else if (area_2 > area_1)
        {
            printf("Resultado: %s Venceu \n", nome_2);
        }
        else
        {
            printf("Resultado: Empate\n");
        }
        break;
    case 3:
        printf("Comparação de cartas (Atributo: PIB):\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, pib_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, pib_2);
        if (pib_1 > pib_2)
        {
            printf("Resultado: %s Venceu \n", nome_1);
        }
        else if (pib_2 > pib_1)
        {
            printf("Resultado: %s Venceu \n", nome_2);
        }
        else
        {
            printf("Resultado: Empate\n");
        }
        break;
    case 4:
        printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
        printf("%s (%s): %d \n", nome_1, codigo_1, pontos_turisticos_1);
        printf("%s (%s): %d \n", nome_2, codigo_2, pontos_turisticos_2);
        if (pontos_turisticos_1 > pontos_turisticos_2)
        {
            printf("Resultado: %s Venceu \n", nome_1);
        }
        else if (pontos_turisticos_2 > pontos_turisticos_1)
        {
            printf("Resultado: %s Venceu \n", nome_2);
        }
        else
        {
            printf("Resultado: Empate\n");
        }
        break;
    case 5:
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, densidade_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, densidade_2);
        if (densidade_1 < densidade_2)
        {
            printf("Resultado: %s Venceu \n", nome_1);
        }
        else if (densidade_2 < densidade_1)
        {
            printf("Resultado: %s Venceu \n", nome_2);
        }
        else
        {
            printf("Resultado: Empate\n");
        }
        break;
    case 6:
        printf("Comparação de cartas (Atributo: PIB per Capita):\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, pib_capita_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, pib_capita_2);
        if (pib_capita_1 > pib_capita_2)
        {
            printf("Resultado: %s Venceu \n", nome_1);
        }
        else if (pib_capita_2 > pib_capita_1)
        {
            printf("Resultado: %s Venceu \n", nome_2);
        }
        else
        {
            printf("Resultado: Empate\n");
        }
        break;
    default:

        printf("Escolha Inválida\n");
    }

    return 0;
}
