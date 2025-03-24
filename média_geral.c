#include <stdio.h>

int main() {

    // Definição das variáveis para armazenar as informações:
    float n1, n2, n3, n4, media;

    //Leitura das quatro notas:
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);
    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    //Resultado da média de quatro números :
    media = (n1 + n2 + n3 + n4) / 4;
    printf("A média é: %.2f", media);
    return 0;
}