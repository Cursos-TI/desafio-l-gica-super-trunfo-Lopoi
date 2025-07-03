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
    unsigned int comparacao_1 = 0;
    unsigned int comparacao_2 = 0;
    int correct = 0;
    while (correct == 0)
    {
        printf("Escolha o primeiro atributo:\n");
        printf("1 - populacao\n");
        printf("2 - area\n");
        printf("3 - pib\n");
        printf("4 - pontos turísticos\n");
        printf("5 - densidade populacional\n");
        printf("6 - pib per capita\n");
        scanf("%d", &comparacao_1);
        if (comparacao_1 > 6 || comparacao_1 < 1)
        {
            printf("Escolha Inválida\n");
        }
        else
        {
            correct = 1;
        }
    }
    correct = 0;
    while (correct == 0)
    {
        printf("Escolha o segundo atributo:\n");
        if(comparacao_1 != 1) printf("1 - populacao\n");
        if(comparacao_1 != 2) printf("2 - area\n");
        if(comparacao_1 != 3) printf("3 - pib\n");
        if(comparacao_1 != 4) printf("4 - pontos turísticos\n");
        if(comparacao_1 != 5) printf("5 - densidade populacional\n");
        if(comparacao_1 != 6) printf("6 - pib per capita\n");
        scanf("%d", &comparacao_2);
        if (comparacao_2 > 6 || comparacao_2 < 1 || comparacao_1 == comparacao_2)
        {
            if(comparacao_1 == comparacao_2){
                printf("Opção Já escolhida\n");
            }else{
                printf("Escolha Inválida\n");
            }
        }
        else
        {
            correct = 1;
        }
    }
    float comparador_1;
    float comparador_2;
    printf("Comparação de cartas:\n");
    switch (comparacao_1)
    {
    case 1:
        printf("Atributo 1: População:\n");
        printf("%s (%s): %ld \n", nome_1, codigo_1, populacao_1);
        printf("%s (%s): %ld \n", nome_2, codigo_2, populacao_2);
        comparador_1 += populacao_1;
        comparador_2 += populacao_2;
        break;
    case 2:
        printf("Atributo 1: Area:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, area_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, area_2);
        comparador_1 += area_1;
        comparador_2 += area_2;
        break;
    case 3:
        printf("Atributo 1: PIB:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, pib_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, pib_2);
        comparador_1 += pib_1;
        comparador_2 += pib_2;
        break;
    case 4:
        printf("Atributo 1: Pontos turísticos:\n");
        printf("%s (%s): %d \n", nome_1, codigo_1, pontos_turisticos_1);
        printf("%s (%s): %d \n", nome_2, codigo_2, pontos_turisticos_2);
        comparador_1 += pontos_turisticos_1;
        comparador_2 += pontos_turisticos_2;
        break;
    case 5:
        printf("Atributo 1: Densidade:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, densidade_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, densidade_2);
        comparador_1 += densidade_1;
        comparador_2 += densidade_2;
        break;
    case 6:
        printf("Atributo 1: PIB per Capita:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, pib_capita_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, pib_capita_2);
        comparador_1 += pib_capita_1;
        comparador_2 += pib_capita_2;
        break;
    default:
    }

    printf("------------\n");
    switch (comparacao_2)
    {
    case 1:
        printf("Atributo 2: População:\n");
        printf("%s (%s): %ld \n", nome_1, codigo_1, populacao_1);
        printf("%s (%s): %ld \n", nome_2, codigo_2, populacao_2);
        comparador_1 += populacao_1;
        comparador_2 += populacao_2;
        break;
    case 2:
        printf("Atributo 2: Area:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, area_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, area_2);
        comparador_1 += area_1;
        comparador_2 += area_2;
        break;
    case 3:
        printf("Atributo 2: PIB:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, pib_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, pib_2);
        comparador_1 += pib_1;
        comparador_2 += pib_2;
        break;
    case 4:
        printf("Atributo 2: Pontos turísticos:\n");
        printf("%s (%s): %d \n", nome_1, codigo_1, pontos_turisticos_1);
        printf("%s (%s): %d \n", nome_2, codigo_2, pontos_turisticos_2);
        comparador_1 += pontos_turisticos_1;
        comparador_2 += pontos_turisticos_2;
        break;
    case 5:
        printf("Atributo 2: Densidade:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, densidade_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, densidade_2);
        comparador_1 += densidade_1;
        comparador_2 += densidade_2;
        break;
    case 6:
        printf("Atributo 2: PIB per Capita:\n");
        printf("%s (%s): %.2f \n", nome_1, codigo_1, pib_capita_1);
        printf("%s (%s): %.2f \n", nome_2, codigo_2, pib_capita_2);
        comparador_1 += pib_capita_1;
        comparador_2 += pib_capita_2;
        break;
    default:
    }

    printf("Soma de %s: %.2f\n", nome_1, comparador_1);
    printf("Soma de %s: %.2f\n", nome_2, comparador_2);

    if(comparador_1 > comparador_2) {
        printf("%s Venceu\n", nome_1);
    } else if(comparador_2 > comparador_1){
        printf("%s Venceu\n", nome_2);
    } else {
        printf("Empate\n");
    }
    return 0;
}
