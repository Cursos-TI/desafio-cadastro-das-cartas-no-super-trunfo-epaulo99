#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Eliabe Paulo

int main() {

    //definição das variaveis
    char estado;
    char codicarta[50];
    char cidade[50];
    int pop;
    float area;
    float pib;
    int pontoT;

    // leitura dos dados do usuario referente a primeira carta

    printf("Por favor, a sigla do estado referente a sua carta: \n");
    scanf(" %c", &estado);
    printf("Por favor, digite o codigo da sua carta: \n");
    scanf("%s", codicarta);
    printf("Por favor, a cidade da sua carta: \n");
    scanf("%s", cidade);
    printf("Por favor, digite quantidade populacional da sua cidade: \n");
    scanf("%d", &pop);
    printf("Por favor, digite qual a area da sua cidade: \n");
    scanf("%f", &area);
    printf("Por favor, digite qual o pib da sua cidade: \n");
    scanf("%f", &pib);
    printf("Por favor, digite qual numero de pontos turisticos da sua cidade: \n");
    scanf("%d", &pontoT);

    // exibindo as informações da carta 1:

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Codigo da Carta: %s", codicarta);
    printf("\nNome da Cidade: %s\n", cidade);
    printf("População: %d\n", pop);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontoT);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
