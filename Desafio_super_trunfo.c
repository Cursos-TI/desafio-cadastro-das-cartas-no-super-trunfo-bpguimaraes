#include <stdio.h>

// Definição da estrutura Carta
typedef struct {
    char estado;                // Estado da carta
    char codigo[5];             // Código da carta (ex: A01, B03)
    char nomeCidade[50];        // Nome da cidade
    int populacao;              // População da cidade
    float area;                 // Área da cidade em km²
    float pib;                  // PIB da cidade
    int pontosTuristicos;       // Número de pontos turísticos
} Carta;

int main() {
    // Declarando duas cartas
    Carta carta1, carta2;

    // Leitura dos dados da carta 1
    printf("Digite as informações da Carta 1:\n");

    printf("Estado (ex: S): ");
    scanf(" %c", &carta1.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", carta1.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade); 

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta1.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura dos dados da carta 2
    printf("\nDigite as informações da Carta 2:\n");

    printf("Estado (ex: S): ");
    scanf(" %c", &carta2.estado);

    printf("Código da Carta (ex: A01): ");
    scanf("%4s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Exibição dos dados cadastrados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);

    return 0;
}
