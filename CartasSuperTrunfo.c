#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int populacao, populacao2, pontost, pontost2;
    float area, area2, pib, pib2;
    float denpo, denpo2, pibper, pibper2; //variáveis adicionadas no Nível Aventureiro
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nome[30], nome2[30];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //Cadastro da carta número 1
    printf("Siga as orientações para o cadastro de carta!\n\n");

    printf("Cadastre o Estado(A-H): ");
    scanf(" %c", &estado); //espaço antes do '%' para programa não ler nenhum caractere no buffer

    printf("Cadastre o código da carta(Ex: A01): ");
    scanf("%s", codigo);

    printf("Cadastre o nome da cidade: ");
    scanf(" %30[^\n]s", nome); //' %30[^\n]s' para a leitura do programa não ser limitada até o primeiro espaço

    printf("Cadastre a população da cidade: ");
    scanf("%d", &populacao);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost);

    //Cálculo da Densidade Populacional e PIB per Capita
    denpo = (float)populacao / area;
    pibper = (float)pib / populacao;

    printf("Carta cadastrada!\n\n");
    //Cadastro da primeira carta concluido!

    //Cadastro da carta número 2
    printf("Cadastre uma nova carta!\n");

    printf("Cadastre o Estado(A-H): ");
    scanf(" %c", &estado2);

    printf("Cadastre o código da carta(Ex: A01): ");
    scanf("%s", codigo2);

    printf("Cadastre o nome da cidade: ");
    scanf(" %30[^\n]s", nome2);

    printf("Cadastre a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area2);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost2);

    //Cálculo da Densidade Populacional e PIB per Capita
    denpo2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    printf("Carta cadastrada!\n\n");
    //Cadastro da segunda carta concluido!
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha..
    //Exibição da primeira carta!
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %fkm²\n", area);
    printf("PIB: %.3f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontost);
    //exibição de novas informações - Nível Aventureiro
    printf("Densidade Populacional: %f hab/km²\n", denpo); 
    printf("PIB per Capita: %.2f reais\n\n", pibper);

    //Exibição da segunda carta!
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %fkm²\n", area2);
    printf("PIB: %.3f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    //exibição de novas informações - Nível Aventureiro
    printf("Densidade Populacional: %f hab/km²\n", denpo2); 
    printf("PIB per Capita: %.2f reais\n\n", pibper2);

    return 0;
}
