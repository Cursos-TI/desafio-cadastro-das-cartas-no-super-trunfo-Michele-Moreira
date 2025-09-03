#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4], estado1[50], cidade1[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
 
    // Carta 1
    printf("Digite o codigo da carta 1 (exemplo:A01):" \n); // Imprime para o usuário
    scanf("%s", codigo1); // Lê o código da carta 1 %s = (texto), %d = (números inteiro), %f = (números com vírgula)

    printf("Digite a populacao da carta 1:" \n);
    scanf("%d", &populacao1);

    printf("Digite a area1 da carta 1:" \n);
    scanf("%d", area1);

    printf("Digite a pib1 da carta 1:" \n);
    scanf("%f", pib1);

    printf("Digite a pib1 da carta 1:" \n);
    scanf("%f", pontos_turisticos1);

    // Carta 2
    printf("Digite o codigo da carta 2 (exemplo:A01):" \n);
    scanf("%s", codigo2);

    printf("Digite a populacao da carta 2:" \n);
    scanf("%d", &populacao2);

    printf("Digite a area2 da carta 2:" \n);    
    scanf("%d", area2);

    printf("Digite a pib2 da carta 2:" \n);
    scanf("%f", pib2);

    printf("Digite a pib2 da carta 2:" \n);
    scanf("%f", pontos_turisticos2);


    // Carta 1
    printf("Carta 1:\n");
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Carta 2
    printf("Carta 2:\n");
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);  
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
