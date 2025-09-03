#include <stdio.h>

int main() {
    char codigo1[4], codigo2[4], estado1[50], cidade1[50];
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2;
 
    // Carta 1
    printf("Digite o código da carta 1 (exemplo:A01):" ); // Imprime para o usuário
    scanf("%s", codigo1); // Lê o código da carta 1 %s = (texto), %d = (números inteiro), %f = (números com vírgula)

    printf("Digite a populacao da carta 1:");
    scanf("%d", &populacao1);

    printf("Digite a área1 da carta 1:");
    scanf("%f", &area1);

    printf("Digite a PIB1 da carta 1:");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos da carta 1:");
    scanf("%d", &pontos_turisticos1);

    // Carta 2
    printf("Digite o código da carta 2 (exemplo:A01):");
    scanf("%s", codigo2);

    printf("Digite a populacao da carta 2:");
    scanf("%d", &populacao2);

    printf("Digite a área2 da carta 2:");    
    scanf("%d", &area2);

    printf("Digite a PIB2 da carta 2:");
    scanf("%f", &pib2);

    printf("Digite a PIB2 da carta 2:");
    scanf("%f", &pontos_turisticos2);


    // Carta 1
    printf("\n\n");
    printf("Carta 1 \n");
    printf("Código: %s \n", codigo1);
    printf("Populacao: %d \n", populacao1);
    printf("Área: %f.2\n", area1);
    printf("PIB: %f.2\n", pib1);
    printf("Número de ontos Turísticos: %d \n", pontos_turisticos1);

    // Carta 2
    printf("\n\n");
    printf("Carta 2");
    printf("Código: %s \n", codigo2);
    printf("Populacao: %d \n", populacao2);  
    printf("Área: %f.2\n", area2);
    printf("PIB: %f.2\n", pib2);
    printf("Número de pontos Turísticos: %d \n", pontos_turisticos2);

    return 0;
}