#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Eliabe Paulo

int main() {

    //definição das variaveis
    char estado, estado2;
    char codicarta[50], codicarta2[50];
    char cidade[50], cidade2[50];
    int pop, pop2, comppop, comparea, comppib, compdensi, compPibCap, comppontoT, compsp;
    float area, area2, pib, pib2, densi1, densi2, pibCap1, pibCap2, sp1, sp2, densi1inve, densi2inve;
    int pontoT, pontoT2;

    // leitura dos dados do usuario referente a primeira carta

    printf("Por favor, a sigla do estado referente a sua carta: \n");
    scanf(" %c", &estado);
    printf("Por favor, digite o codigo da sua carta: \n");
    scanf(" %s", codicarta);
    printf("Por favor, a cidade da sua carta: \n");
    scanf(" %s", cidade);
    printf("Por favor, digite quantidade populacional da sua cidade: \n");
    scanf("%d", &pop);
    printf("Por favor, digite qual a area da sua cidade: \n");
    scanf("%f", &area);
    printf("Por favor, digite qual o pib da sua cidade: \n");
    scanf("%f", &pib);
    printf("Por favor, digite qual numero de pontos turisticos da sua cidade: \n");
    scanf("%d", &pontoT);

    // leitura dos dados do usuario referente a segunda carta

    printf("\nPor favor, a sigla do estado referente a segunda carta: \n");
    scanf(" %c", &estado2);
    printf("Por favor, digite o codigo da sua carta: \n");
    scanf(" %s", codicarta2);
    printf("Por favor, a cidade da sua carta: \n");
    scanf(" %s", cidade2);
    printf("Por favor, digite quantidade populacional da sua cidade: \n");
    scanf("%d", &pop2);
    printf("Por favor, digite qual a area da sua cidade: \n");
    scanf("%f", &area2);
    printf("Por favor, digite qual o pib da sua cidade: \n");
    scanf("%f", &pib2);
    printf("Por favor, digite qual numero de pontos turisticos da sua cidade: \n");
    scanf("%d", &pontoT2);


    //calculando a densidade populaciponal de cada carta

    densi1 = pop / area;
    densi2 = pop2 / area2;

    //calculando o pib percapta das duas cartas

    pibCap1 = pib / pop;
    pibCap2 = pib2 / pop2;

    //calculo para o inverso da densidade

    densi1inve = 1 / densi1;
    densi2inve = 1 / densi2;


    //calculo do super poder da carta 1 e do super poder da carta 2

    sp1 = pop + area + pib + pontoT + pibCap1 + densi1inve;
    sp2 = pop2 + area2 + pib2 + pontoT2 + pibCap2 + densi2inve;


    // comparação das cartas

    comppop = pop > pop2;
    comparea = area > area2;
    comppib = pib > pib2;
    comppontoT = pontoT > pontoT2;
    compPibCap = pibCap1 > pibCap2;
    compdensi = densi1inve > densi2inve;
    compsp = sp1 > sp2;

    // exibindo as informações da carta 1:

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s\n", codicarta);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", pop);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoT);
    printf("Densidade Populacional: %.2f hab/km²\n", densi1);
    printf("PIB per Capta: %.2f reais\n", pibCap1);

    // exibindo as informações da carta 2:

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da Carta: %s\n", codicarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontoT2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi2);
    printf("PIB per Capta: %.2f reais\n", pibCap2);


    printf("\n \n");

    // exibindo resultado da comparação

    printf("População: Carta 1 Venceu (%d)\n", comppop);
    printf("Área: Carta 1 Venceu (%d)\n", comparea);  
    printf("PIB: Carta 1 Venceu (%d)\n", comppib);
    printf("Pontos Turisticos: Carta 1 Venceu (%d)\n", comppontoT);
    printf("Densidade Populacional: Carta 1 Venceu (%d)\n", compdensi);
    printf("Pib Per Capita: Carta 1 Venceu (%d)\n", compPibCap);
    printf("Super Poder: Carta 1 Venceu (%d)\n", compsp);
    return 0;
}
