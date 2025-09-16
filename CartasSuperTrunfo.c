#include <stdio.h>

// Função para obter valor do atributo
float get_valor(int atributo, int carta,
    unsigned int populacao1, unsigned int populacao2,
    float area1, float area2,
    float pib1, float pib2,
    int pontos_turisticos1, int pontos_turisticos2,
    float densidade1, float densidade2
) {
    switch (atributo) {
        case 1: return carta == 1 ? (float)populacao1 : (float)populacao2;
        case 2: return carta == 1 ? area1 : area2;
        case 3: return carta == 1 ? pib1 : pib2;
        case 4: return carta == 1 ? (float)pontos_turisticos1 : (float)pontos_turisticos2;
        case 5: return carta == 1 ? densidade1 : densidade2;
        default: return 0.0f;
    }
}

// Função para exibir nome do atributo
void print_nome_atributo(int atributo) {
    switch (atributo) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
        default: printf("Atributo inválido"); break;
    }
}

int main() {
    char estado1[50], estado2[50], codigo1[5], codigo2[5], cidade1[50], cidade2[50];
    int pontos_turisticos1, pontos_turisticos2;
    int atributo1 = 0, atributo2 = 0;
    float area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;
    unsigned int populacao1, populacao2;

    // Cadastro Carta 1
    printf("Digite o Estado da carta 1 (exemplo: A a H): ");
    scanf("%s", estado1);
    printf("Digite o código da carta 1 (exemplo: A01):" );
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf("%s", cidade1);
    printf("Digite a população da carta 1:");
    scanf("%u", &populacao1);
    printf("Digite a área da carta 1:");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1:");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos da carta 1:");
    scanf("%d", &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0f / densidade1);

    // Cadastro Carta 2
    printf("Digite o Estado da carta 2 (exemplo: A a H): ");
    scanf("%s", estado2);
    printf("Digite o código da carta 2 (exemplo: A01):");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf("%s", cidade2);
    printf("Digite a população da carta 2:");
    scanf("%u", &populacao2);
    printf("Digite a área da carta 2:");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2:");
    scanf("%f", &pib2);
    printf("Digite os pontos turísticos da carta 2:");
    scanf("%d", &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0f / densidade2);

    // Menu dinâmico para escolha do primeiro atributo
    printf("\nEscolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número da opção desejada: ");
    scanf("%d", &atributo1);

    // Menu dinâmico para escolha do segundo atributo
    do {
        printf("\nEscolha o SEGUNDO atributo para comparar (diferente do primeiro):\n");
        for (int i = 1; i <= 5; i++) {
            if (i != atributo1) {
                switch (i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos Turísticos\n"); break;
                    case 5: printf("5 - Densidade Demográfica\n"); break;
                }
            }
        }
        printf("Digite o número da opção desejada: ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
            printf("Opção inválida! Escolha um diferente.\n");
        }
    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5);

    // Comparação dos atributos individualmente
    printf("\n--- Comparação dos atributos ---\n");
    for (int i = 0; i < 2; i++) {
        int atributo = (i == 0) ? atributo1 : atributo2;
        float valor1 = get_valor(atributo, 1, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);
        float valor2 = get_valor(atributo, 2, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);

        printf("\nAtributo %d: ", i+1);
        print_nome_atributo(atributo);
        printf("\n");
        printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, valor1);
        printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, valor2);

        if (atributo == 5) { // Densidade Demográfica (menor vence)
            if (valor1 < valor2)
                printf("Carta 1 venceu!\n");
            else if (valor2 < valor1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
        } else {
            if (valor1 > valor2)
                printf("Carta 1 venceu!\n");
            else if (valor2 > valor1)
                printf("Carta 2 venceu!\n");
            else
                printf("Empate!\n");
        }
    }

    // Soma dos atributos
    float soma1 = get_valor(atributo1, 1, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2)
                + get_valor(atributo2, 1, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);
    float soma2 = get_valor(atributo1, 2, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2)
                + get_valor(atributo2, 2, populacao1, populacao2, area1, area2, pib1, pib2, pontos_turisticos1, pontos_turisticos2, densidade1, densidade2);

    printf("\n--- Soma dos atributos ---\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, estado1, soma1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, estado2, soma2);

    if (soma1 > soma2)
        printf("Resultado final: Carta 1 venceu a rodada!\n");
    else if (soma2 > soma1)
        printf("Resultado final: Carta 2 venceu a rodada!\n");
    else
        printf("Resultado final: Empate!\n");

    return 0;
}