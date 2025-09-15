#include <stdio.h>

int main() {
    char estado1[50], estado2[50], codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int pontos_turisticos1, pontos_turisticos2, escolha;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    unsigned int populacao1, populacao2;

    // Carta 1
    printf("Digite o Estado da carta 1 (exemplo: A a H): ");
    scanf("%s", estado1);

    printf("Digite o código da carta 1 (exemplo: A01):" );
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);

    printf("Digite a população da carta 1:");
    scanf("%lu", &populacao1);

    printf("Digite a área da carta 1:");
    scanf("%f", &area1);

    printf("Digite o PIB da carta 1:");
    scanf("%f", &pib1);

    printf("Digite os pontos turísticos da carta 1:");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)pib1 / populacao1;

    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    // Carta 2
    printf("Digite o Estado da carta 2 (exemplo: A a H): ");
    scanf("%s", estado2);

    printf("Digite o código da carta 2 (exemplo: A01):");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);

    printf("Digite a população da carta 2:");
    scanf("%lu", &populacao2);

    printf("Digite a área da carta 2:");
    scanf("%f", &area2);

    printf("Digite o PIB da carta 2:");
    scanf("%f", &pib2);

    printf("Digite os pontos turísticos da carta 2:");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)pib2 / populacao2;

    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Menu interativo para escolha do atributo
    while (1) {
        printf("\n\n--- Menu de Opções ---\n");
        printf("1. Comparar População\n");
        printf("2. Comparar Área\n");
        printf("3. Comparar PIB\n");
        printf("4. Comparar Pontos Turísticos\n");
        printf("5. Comparar Densidade Populacional\n");
        printf("6. Sair\n");
        printf("Escolha uma opção: ");
        
        scanf("%d", &escolha);

        if (escolha == 6) {
           printf("Saindo...\n");
           break;
        }

        switch (escolha) {
            case 1:
                if (populacao1 > populacao2) {
                    printf("\nPopulação: Carta 1 venceu!\n");
                } else if (populacao1 < populacao2) {
                    printf("\nPopulação: Carta 2 venceu!\n");
                } else {
                    printf("\nEmpate!\n");
                }
                break;

            case 2:
                if (area1 > area2) {
                    printf("Área: Carta 1 venceu!\n");
                } else {
                    printf("Área: Carta 2 venceu!\n");
                }
                break;
            
            case 3:
                if (pib1 > pib2) {
                    printf("\nPIB: Carta 1 venceu!\n");
                } else {
                    printf("\nPIB: Carta 2 venceu!\n");
                }
                break;

            case 4:
                if (pontos_turisticos1 > pontos_turisticos2) {
                    printf("\nPontos Turísticos: Carta 1 venceu!\n");
                } else {
                    printf("\nPontos Turísticos: Carta 2 venceu!\n");
                }
                break;

            case 5:
                if (densidade1 < densidade2) {
                    printf("\nDensidade Populacional: Carta 1 venceu!\n");
                } else {
                    printf("\nDensidade Populacional: Carta 2 venceu!\n");
                }
                break;
            default:
                printf("\nOpção inválida. Por favor, escolha novamente.\n");
                break;
        }
    }

    // Carta 1
    printf("\n\n");
    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Carta 2
    printf("\n\n");
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);  
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2); 
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação de Cartas
    printf("\n\nComparação de Cartas:\n");

    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu (1)\n");
    } else {
        printf("População: Carta 2 venceu (0)\n");
    }

    if (area1 > area2) {
        printf("Área: Carta 1 venceu (1)\n");
    } else {
        printf("Área: Carta 2 venceu (0)\n");
    }

    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (0)\n");
    }

    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }
    
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per capita: Carta 2 venceu (0)\n");
    }

    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }

    printf("\nComparação de cartas (Atributo: População):\n\n");
    printf("Carta 1 - %s (%s): %u\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %u\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("\nCarta 1 venceu!\n");
    } else if (populacao1 < populacao2) {
        printf("\nCarta 2 venceu!\n");
    } else {
        printf("\nEmpate!\n");
    }

    return 0;
}