#include <stdio.h>

// Função para calcular o inverso da densidade populacional (quanto menor, melhor)
float inversoDensidade(float densidade) {
    return densidade > 0 ? (1.0 / densidade) : 0; 
}

int main() {
    // Definição das variáveis para armazenar as informações de duas cartas
    char estado1, estado2;
    char cartcode1[4], cartcode2[4];
    char namecity1[30], namecity2[30];
    unsigned long int pop1, pop2;  // População com valores grandes
    float area1, area2;
    float pib1, pib2;
    int pt1, pt2;
    float dp1, dp2, pc1, pc2, sp1, sp2; // Densidade, PIB per capita, Super Poder

    printf("=== Cadastro de Cartas do Super Trunfo ===\n");

    // Entrada de dados para a primeira carta
    printf("\nCadastro da Primeira Carta\n");
    printf("Digite a letra do estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01, B03): ");
    scanf("%3s", cartcode1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", namecity1);

    printf("Digite a população da cidade: ");
    scanf("%lu", &pop1); // unsigned long int

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
    scanf("%lu", &pop2); // unsigned long int

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pt2);

    // Cálculo dos atributos derivados
    dp1 = pop1 / area1;  // Densidade populacional (hab/km²)
    pc1 = pib1 / pop1;   // PIB per capita
    dp2 = pop2 / area2;  // Densidade populacional (hab/km²)
    pc2 = pib2 / pop2;   // PIB per capita

    // Cálculo do Super Poder (soma dos atributos numéricos + inverso da densidade)
    sp1 = (float)pop1 + area1 + pib1 + pt1 + pc1 + inversoDensidade(dp1);
    sp2 = (float)pop2 + area2 + pib2 + pt2 + pc2 + inversoDensidade(dp2);

    // Exibição das cartas cadastradas
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\n--- Primeira Carta ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", cartcode1);
    printf("Cidade: %s\n", namecity1);
    printf("População: %lu habitantes\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pt1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", dp1);
    printf("PIB per Capita: %.2f\n", pc1);
    printf("Super Poder: %.2f\n", sp1);

    printf("\n--- Segunda Carta ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", cartcode2);
    printf("Cidade: %s\n", namecity2);
    printf("População: %lu habitantes\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pt2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", dp2);
    printf("PIB per Capita: %.2f\n", pc2);
    printf("Super Poder: %.2f\n", sp2);

    // Comparação das cartas
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (1)\n", pop1 > pop2 ? 1 : 2);
    printf("Área: Carta %d venceu (1)\n", area1 > area2 ? 1 : 2);
    printf("PIB: Carta %d venceu (1)\n", pib1 > pib2 ? 1 : 2);
    printf("Pontos Turísticos: Carta %d venceu (1)\n", pt1 > pt2 ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu (0)\n", dp1 < dp2 ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu (1)\n", pc1 > pc2 ? 1 : 2);
    printf("Super Poder: Carta %d venceu (1)\n", sp1 > sp2 ? 1 : 2);

    return 0;
}
