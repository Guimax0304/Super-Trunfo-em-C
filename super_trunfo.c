#include <stdio.h>

int main() {
    // Definição das variáveis para armazenar as informações de duas cartas
    char estado1, estado2;
    char cartcode1[4], cartcode2[4];
    char namecity1[30], namecity2[30];
    int pop1, pop2;
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2;

    printf("=== Cadastro de Cartas do Super Trunfo ===\n");

    // Entrada de dados para a primeira carta
    printf("\nCadastro da Primeira Carta\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1); // Lendo um único caractere
    
    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%3s", cartcode1); // Lendo string de 3 caracteres (A01)

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", namecity1); // Permite espaços na entrada

    printf("Digite a população da cidade: ");
    scanf("%d", &pop1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pt1);

    // Entrada de dados para a segunda carta
    printf("\nCadastro da Segunda Carta\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%3s", cartcode2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", namecity2);

    printf("Digite a população da cidade: ");
    scanf("%d", &pop2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pt2);

    // Exibição das cartas cadastradas
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cartcode1);
    printf("Cidade: %s\n", namecity1);
    printf("População: %d habitantes\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pt1);

    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cartcode2);
    printf("Cidade: %s\n", namecity2);
    printf("População: %d habitantes\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pt2);

    return 0;
}
