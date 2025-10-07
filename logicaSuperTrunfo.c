#include <stdio.h>

//Programa Super Trunfo - Comparação de Cartas
//Nível Novato: Irei comparar duas cartas com base em um atributo escolhido


int main (){
    // ==== DECLARAÇÃO DE VARIÁVEIS ====
    
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
    

    // ==== CADASTRO DA CARTA 1 ====
    printf("Cadastro da Carta 1: \n");

    printf("Digite o estado (letra A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade1);

    printf("Digite o numero de habitantes: ");
    scanf(" %d", &populacao1);

    printf("Digite a área em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB em bilhões: ");
    scanf(" %f", &pib1);

    printf("Quantidade de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos1);

    densidade1 = (float)populacao1 / area1;                     //Calcula a Densidade Populacional
    pibpercapita1 = (pib1 * 1000000000) / (float)populacao1;    // Calcula o PIB per Capita (* 1000000000 Converte bilhões para reais)
    
    
    printf("\n");

    // ==== CADASTRO DA CARTA 2 ====
    printf("Cadastro da Carta 2: \n");

    printf("Digite o estado (letra A a H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o codigo da carta (ex: A01): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomecidade2);

    printf("Digite o numero de habitantes: ");
    scanf(" %d", &populacao2);

    printf("Digite a área em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB em bilhões: ");
    scanf(" %f", &pib2);

    printf("Quantidade de Pontos Turisticos: ");
    scanf(" %d", &pontosturisticos2);

    densidade2 = (float)populacao2 / area2;                    // Calcula a Densidade Populacional
    pibpercapita2 = (pib2 * 1000000000)  / (float)populacao2;  // Calcula o PIB per Capita, (* 1000000000 Converte bilhões para reais)
    
    
    //EXIBIÇÃO DE CARTAS CADASTRADAS
    printf("\n");
    printf("CARTAS CADASTRADAS \n\n");

    //EXIBIÇÃO DA CARTA 1
    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("Número de Habitantes: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    printf("\n");

    //EXIBIÇÃO DA CARTA 2
    printf("\n");
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("Número de Habitantes: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Números de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    
    //==== COMPARAÇÃO DAS CARTAS ====
    printf("\n");
    printf("Comparação de Cartas:\n");

    //ATRIBUTO ESCOLHIDO: POPULAÇÃO
    //Para escolher outro atributo, remova o comentário da outras seções e comente as outras

    //==== COMPARAÇÃO POR POPULAÇÃO ====
    printf("Atributo escolhido: POPULAÇÃO\n");
    printf("Carta 1 - %s (%c): %d habitantes\n", nomecidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomecidade2, estado2, populacao2);
    printf("\n");

    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    }

    /*==== COMPARAÇÃO POR ÁREA ====
    printf("Atributo escolhido: ÁREA\n");
    printf("Carta 1 - %s (%c): %.2f km²\n", nomecidade1, estado1, area1);
    printf("Carta 2 - %s (%c): %.2f km²\n", nomecidade2, estado2, area2);
    printf("\n");

    if (area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    }
    */
        
    /*==== COMPARAÇÃO POR PIB ====
    printf("Atributo escolhido: PIB\n");
    printf("Carta 1 - %s (%c): %.2f bilhões\n", nomecidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f bilhões\n", nomecidade2, estado2, pib2);
    printf("\n");

    if (pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    }
    */

    /*==== COMPARAÇÃO POR PONTOS TURISTICOS ====
    printf("Atributo escolhido: PONTOS TURÍSTICOS\n");
    printf("Carta 1 - %s (%c): %d pontos turísticos\n", nomecidade1, estado1, pontosturisticos1);
    printf("Carta 2 - %s (%c): %d pontos turísticos\n", nomecidade2, estado2, pontosturisticos2);
    printf("\n");

    if (pontosturisticos1 > pontosturisticos2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    }
    */

    /*==== COMPARAÇÃO POR DENSIDADE POPULACIONAL ====
    printf("Atributo escolhido: DENSIDADE POPULACIONAL\n");
    printf("Carta 1 - %s (%c): %.2f hab/km²\n", nomecidade1, estado1, densidade1);
    printf("Carta 2 - %s (%c): %.2f hab/km²\n", nomecidade2, estado2, densidade2);
    printf("\n");

    if (densidade1 > densidade2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    }
    */

    /*==== COMPARAÇÃO POR PIB PER CAPITA ====
    printf("Atributo escolhido: PIB PER CAPITA\n");
    printf("Carta 1 - %s (%c): %.2f reais\n", nomecidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%c): %.2f reais\n", nomecidade2, estado2, pibpercapita2);
    printf("\n");

    if (pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n", nomecidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomecidade2);
    }
    */

    printf("=====Jogo Finalizado!=====\n");

    return 0;

};
