#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    // Dados das cartas e nomes dos países
    char nome1[30] = "Brasil";
    char nome2[30] = "Japao";

    int populacao1 = 5000000 + rand() % 200000000;
    int populacao2 = 5000000 + rand() % 200000000;

    float area1 = 50000 + rand() % 9000000;
    float area2 = 50000 + rand() % 9000000;

    float pib1 = 100 + rand() % 8000;
    float pib2 = 100 + rand() % 8000;

    int pontos1 = 10 + rand() % 300;
    int pontos2 = 10 + rand() % 300;

    // Cálculo da densidade
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Título
    printf("==========================\n");
    printf("      SUPER TRUNFO\n");
    printf("==========================\n");

    // Escolha dos atributos
    int a1, a2, a3, a4;
    printf("\nEscolha ate 4 atributos (1 a 5):\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Densidade demografica\n");
    printf("5 - Pontos turisticos\n");

    printf("\nDigite o primeiro atributo: ");
    scanf("%d", &a1);
    if (a1 < 1 || a1 > 5) {
        printf("Atributo invalido! Encerrando o jogo.\n");
        
    }

    printf("Digite o segundo atributo: ");
    scanf("%d", &a2);
    if (a2 != 0 && (a2 < 1 || a2 > 5 || a2 == a1)) {
        printf("Escolha invalida! Encerrando o jogo.\n");
        
    }

    printf("Digite o terceiro atributo: ");
    scanf("%d", &a3);
    if (a3 != 0 && (a3 < 1 || a3 > 5 || a3 == a1 || a3 == a2)) {
        printf("Escolha invalida! Encerrando o jogo.\n");
        
    }

    printf("Digite o quarto atributo: ");
    scanf("%d", &a4);
    if (a4 != 0 && (a4 < 1 || a4 > 5 || a4 == a1 || a4 == a2 || a4 == a3)) {
        printf("Escolha invalida! Encerrando o jogo.\n");
       
    }

    // Mostrar cartas
    printf("\n=============================================\n");
    printf("CARTA 1: %s\n", nome1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("Pontos turisticos: %d\n", pontos1);

    printf("\nCARTA 2: %s\n", nome2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("Pontos turisticos: %d\n", pontos2);
    printf("=============================================\n");

    // Pontuação
    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    float v1, v2;

    // 1º atributo
    switch (a1) {
        case 1: v1 = populacao1; v2 = populacao2; break;
        case 2: v1 = area1; v2 = area2; break;
        case 3: v1 = pib1; v2 = pib2; break;
        case 4: v1 = densidade1; v2 = densidade2; break;
        case 5: v1 = pontos1; v2 = pontos2; break;
    }
    if (a1 == 4) { if (v1 < v2) pontosCarta1++; else if (v2 < v1) pontosCarta2++; }
    else { if (v1 > v2) pontosCarta1++; else if (v2 > v1) pontosCarta2++; }

    // 2º atributo
    if (a2 != 0) {
        switch (a2) {
            case 1: v1 = populacao1; v2 = populacao2; break;
            case 2: v1 = area1; v2 = area2; break;
            case 3: v1 = pib1; v2 = pib2; break;
            case 4: v1 = densidade1; v2 = densidade2; break;
            case 5: v1 = pontos1; v2 = pontos2; break;
        }
        if (a2 == 4) { if (v1 < v2) pontosCarta1++; else if (v2 < v1) pontosCarta2++; }
        else { if (v1 > v2) pontosCarta1++; else if (v2 > v1) pontosCarta2++; }
    }

    // 3º atributo
    if (a3 != 0) {
        switch (a3) {
            case 1: v1 = populacao1; v2 = populacao2; break;
            case 2: v1 = area1; v2 = area2; break;
            case 3: v1 = pib1; v2 = pib2; break;
            case 4: v1 = densidade1; v2 = densidade2; break;
            case 5: v1 = pontos1; v2 = pontos2; break;
        }
        if (a3 == 4) { if (v1 < v2) pontosCarta1++; else if (v2 < v1) pontosCarta2++; }
        else { if (v1 > v2) pontosCarta1++; else if (v2 > v1) pontosCarta2++; }
    }

    // 4º atributo
    if (a4 != 0) {
        switch (a4) {
            case 1: v1 = populacao1; v2 = populacao2; break;
            case 2: v1 = area1; v2 = area2; break;
            case 3: v1 = pib1; v2 = pib2; break;
            case 4: v1 = densidade1; v2 = densidade2; break;
            case 5: v1 = pontos1; v2 = pontos2; break;
        }
        if (a4 == 4) { if (v1 < v2) pontosCarta1++; else if (v2 < v1) pontosCarta2++; }
        else { if (v1 > v2) pontosCarta1++; else if (v2 > v1) pontosCarta2++; }
    }

    // Resultado final
    printf("\nResultado final:\n");
    printf("%s fez %d pontos.\n", nome1, pontosCarta1);
    printf("%s fez %d pontos.\n", nome2, pontosCarta2);

    if (pontosCarta1 > pontosCarta2)
        printf("\nVencedor: %s\n", nome1);
    else if (pontosCarta2 > pontosCarta1)
        printf("\nVencedor: %s\n", nome2);
    else
        printf("\nEmpate!\n");

    printf("\nObrigado por jogar Super Trunfo!\n");

    return 0;
}