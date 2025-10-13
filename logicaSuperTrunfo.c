#include <stdio.h>

// Super Trunfo - Desafio Aventureiro
// Agora com menu interativo!

int main (){
    
    //Variáveis para carta 1 e 2
    char estado1, estado2;                          // Letra de 'A' a 'H'
    char codigo1[4], codigo2[4];                    // Codigo da carta (exA01)
    char nomecidade1[50], nomecidade2[50];          // Nome da cidade
    int populacao1, populacao2;                     // Numero de habitantes
    float area1, area2;                             // Area da cidade em Km²
    float pib1, pib2;                               // Pib em bilhões
    int pontosturisticos1, pontosturisticos2;       // Quantidade de Pontos Turisticos
    float densidade1, densidade2;                   // Densidade Populacional
    float pibpercapita1, pibpercapita2;             // Pib Percapita
    
    
    int opcao; // para o menu
    

    // Cadastrando primeira carta
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta: (exA01) ");
    scanf(" %s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area (km2): ");
    scanf(" %f", &area1);

    printf("PIB (bilhoes): ");
    scanf(" %f", &pib1);

    printf("Pontos turisticos: ");
    scanf(" %d", &pontosturisticos1);

    // calculando densidade e pib per capita
    densidade1 = (float)populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;
    
    printf("\n");

    // Cadastrando segunda carta
    printf("=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Codigo da carta: (exB01): ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area (km2): ");
    scanf(" %f", &area2);

    printf("PIB (bilhoes): ");
    scanf(" %f", &pib2);

    printf("Pontos turisticos: ");
    scanf(" %d", &pontosturisticos2);

    densidade2 = (float)populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / (float)populacao2;
    
    
    // Mostrando as cartas
    printf("\n=== CARTAS CADASTRADAS ===\n\n");

    printf("Carta 1:\n");
    printf("Estado: %c | Codigo: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomecidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("Densidade: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", pibpercapita1);

    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c | Codigo: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("Densidade: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", pibpercapita2);

    
    // Menu de escolha
    printf("\n=== MENU DE BATALHA ===\n");
    printf("Escolha qual atributo comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turisticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("\nSua escolha: ");
    scanf("%d", &opcao);

    
    // Comparando as cartas
    printf("\n=== RESULTADO ===\n");

    switch(opcao){
        case 1: // populacao
            printf("Comparando: POPULACAO\n");
            printf("%s: %d habitantes\n", nomecidade1, populacao1);
            printf("%s: %d habitantes\n", nomecidade2, populacao2);
            
            if(populacao1 > populacao2){
                printf("\nVencedor: %s!\n", nomecidade1);
            }
            else if(populacao2 > populacao1){
                printf("\nVencedor: %s!\n", nomecidade2);
            }
            else{
                printf("\nEmpate!\n");
            }
            break;

        case 2: // area
            printf("Comparando: ÁREA\n");
            printf("%s: %.2f km2\n", nomecidade1, area1);
            printf("%s: %.2f km2\n", nomecidade2, area2);
            
            if(area1 > area2){
                printf("\nVencedor: %s!\n", nomecidade1);
            }
            else if(area2 > area1){
                printf("\nVencedor: %s!\n", nomecidade2);
            }
            else{
                printf("\nEmpate!\n");
            }
            break;

        case 3: // pib
            printf("Comparando: PIB\n");
            printf("%s: R$ %.2f bilhoes\n", nomecidade1, pib1);
            printf("%s: R$ %.2f bilhoes\n", nomecidade2, pib2);
            
            if(pib1 > pib2){
                printf("\nVencedor: %s!\n", nomecidade1);
            }
            else if(pib2 > pib1){
                printf("\nVencedor: %s!\n", nomecidade2);
            }
            else{
                printf("\nEmpate!\n");
            }
            break;

        case 4: // pontos turisticos
            printf("Comparando: PONTOS TURISTICOS\n");
            printf("%s: %d pontos turisticos\n", nomecidade1, pontosturisticos1);
            printf("%s: %d pontos turisticos\n", nomecidade2, pontosturisticos2);
            
            if(pontosturisticos1 > pontosturisticos2){
                printf("\nVencedor: %s!\n", nomecidade1);
            }
            else if(pontosturisticos2 > pontosturisticos1){
                printf("\nVencedor: %s!\n", nomecidade2);
            }
            else{
                printf("\nEmpate!\n");
            }
            break;

        case 5: // densidade (menor ganha!)
            printf("Comparando: DENSIDADE POPULACIONAL\n");
            printf("OBS: Nesse atributo, MENOR valor ganha!\n");
            printf("%s: %.2f hab/km2\n", nomecidade1, densidade1);
            printf("%s: %.2f hab/km2\n", nomecidade2, densidade2);
            
            if(densidade1 < densidade2){
                printf("\nVencedor: %s! (menor densidade)\n", nomecidade1);
            }
            else if(densidade2 < densidade1){
                printf("\nVencedor: %s! (menor densidade)\n", nomecidade2);
            }
            else{
                printf("\nEmpate!\n");
            }
            break;

        case 6: // pib per capita
            printf("Comparando: PIB PER CAPITA\n");
            printf("%s: R$ %.2f\n", nomecidade1, pibpercapita1);
            printf("%s: R$ %.2f\n", nomecidade2, pibpercapita2);
            
            if(pibpercapita1 > pibpercapita2){
                printf("\nVencedor: %s!\n", nomecidade1);
            }
            else if(pibpercapita2 > pibpercapita1){
                printf("\nVencedor: %s!\n", nomecidade2);
            }
            else{
                printf("\nEmpate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha de 1 a 6.\n");
            break;
    }

    printf("\nFim do jogo!\n");

    return 0;
}