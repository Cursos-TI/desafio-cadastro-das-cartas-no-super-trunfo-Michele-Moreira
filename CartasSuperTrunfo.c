#include <stdio.h>

int main() {
    char estado1[50], estado2[50], codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    unsigned int populacao1, populacao2;

    printf("Digite o Estado da carta 1 (exemplo: A a H): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1 (exemplo: A01):" ); // Imprime para o usuário
    scanf("%s", codigo1); // Lê o código da carta 1 %s = (texto), %d = (números inteiro), %f = (números com vírgula)

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a populacao da carta 1:");
    scanf("%lu", &populacao1);

    printf("Digite a área1 da carta 1:");
    scanf("%f", &area1);

    printf("Digite a PIB1 da carta 1:");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos da carta 1:");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1; // Cálculo da densidade populacional
    pib_per_capita1 = (float)pib1 / populacao1; // Cálculo do PIB per capita

    // Cálculo do Super Poder da carta 1
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);


    // Carta 2
    printf("Digite o Estado da carta 2 (exemplo: A a H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2 (exemplo:A01):");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a populacao da carta 2:");
    scanf("%lu", &populacao2);

    printf("Digite a área2 da carta 2:");    
    scanf("%f", &area2);

    printf("Digite a PIB2 da carta 2:");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos da carta 2:");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)pib2 / populacao2;

    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);


    // Carta 1
    printf("\n\n"); // Espaço entre as cartas
    printf("Carta 1\n"); // Imprime os dados da carta 1
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", (float)populacao1/area1); // Cálculo da densidade populacional
    printf("PIB per capita: %.2f\n", (float)pib1/populacao1); // Cálculo do PIB per capita
    printf("Densidade Populacional: %.2f\n", densidade1); // Usando a variável calculada
    printf("PIB per capita: %.2f\n", pib_per_capita1);     // Usando a variável calculada
    printf("Super Poder: %.2f\n", super_poder1);  // Imprime o Super Poder da carta 1

    // Carta 2
    printf("\n\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);  
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", (float)populacao2/area2); 
    printf("PIB per capita: %.2f\n", (float)pib2/populacao2); 
    printf("Densidade Populacional: %.2f\n", densidade2); 
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    //Comparação dos super poderes
    printf("\n\nComparacao de Cartas:\n");

    // Comparação de População
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }

    // Comparação de Área
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    // Comparação de Pontos Turísticos
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }

    // Comparação de Densidade Populacional (menor valor vence)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }
    
    // Comparação de PIB per capita
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per capita: Carta 2 venceu (0)\n");
    }

    // Comparação de Super Poder
    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }
    

    return 0;
}