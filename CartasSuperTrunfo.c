#include <stdio.h>

int main() {

    printf("Desafio Super Trunfo - Nivel Novato");

  // declarando as variáveis para depois receber os dados

    // Carta 1
    char estado1[3];          
    char codigo1[6];          
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Carta 2
    char estado2[3];
    char codigo2[6];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // cadastrando os dados da primeira carta

    printf("Cadastro da Carta 1\n");

    printf("Estado (sigla, ex: PA): ");
    scanf("%2s", estado1);

    printf("Codigo da Carta (ex: PA01): ");
    scanf("%5s", codigo1);

    printf("Nome da Cidade (ex: Belem): ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao (ex: 1303403): ");
    scanf("%d", &populacao1);

    printf("Area em km2 (ex: 1059.45): ");
    scanf("%f", &area1);

    printf("PIB em bilhoes (ex: 33.52): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos (ex: 25): ");
    scanf("%d", &pontosTuristicos1);

    // cadastrando os dados da segunda carta

    printf("\nCadastro da Carta 2\n");

    printf("Estado (sigla, ex: AM): ");
    scanf("%2s", estado2);

    printf("Codigo da Carta (ex: AM01): ");
    scanf("%5s", codigo2);

    printf("Nome da Cidade (ex: Manaus): ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao (ex: 2063547): ");
    scanf("%d", &populacao2);

    printf("Area em km2 (ex: 11401.09): ");
    scanf("%f", &area2);

    printf("PIB em bilhoes (ex: 103.28): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos (ex: 20): ");
    scanf("%d", &pontosTuristicos2);

    // exibindo as cartas recebidas

    printf("\n============================\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n============================\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);


    return 0;
}