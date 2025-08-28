#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    unsigned long int populacao, populacao2; //alterado para acomodar números maiores (nível mestre)
    int pontost, pontost2;
    float area, area2, pib, pib2;
    float denpo, denpo2, pibper, pibper2; //variáveis adicionadas no Nível Aventureiro
    float denpoIn, denpoIn2; //nova variavel adicionada no Nível Mestre (inverso da densidade populacional)
    char estado, estado2;
    char codigo[4], codigo2[4];
    char nome[30], nome2[30];
    float superPoder, superPoder2; //nova variavel adicionada no Nível Mestre

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
    scanf("%lu", &populacao);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost);

    //Cálculo da Densidade Populacional e PIB per Capita (Carta 1) (Nível Aventureiro)
    denpo = (float)populacao / area;
    pibper = (float)pib / populacao;

    //Cálculo do inverso da Densidade Populacional e Super Poder (Carta 1) (Nível Mestre)
    denpoIn = (float)area / populacao;
    superPoder = (float)populacao + area + pib + pontost + pibper + denpoIn;

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
    scanf("%lu", &populacao2);

    printf("Cadastre a área da cidade: ");
    scanf("%f", &area2);

    printf("Cadastre o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Cadastre a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontost2);

    //Cálculo da Densidade Populacional e PIB per Capita (Carta 2) (Nível Aventureiro)
    denpo2 = (float)populacao2 / area2;
    pibper2 = (float)pib2 / populacao2;

    //Cálculo do inverso da Densidade Populacional e Super Poder (Carta 2) (Nível Mestre)
    denpoIn2 = (float)area2 / populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + pontost2 + pibper2 + denpoIn2;

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
    printf("População: %lu\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontost);
    //exibição de novas informações - Nível Aventureiro
    printf("Densidade Populacional: %f hab/km²\n", denpo); 
    printf("PIB per Capita: %.2f reais\n\n", pibper);

    //Exibição da segunda carta!
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2fkm²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontost2);
    //exibição de novas informações - Nível Aventureiro
    printf("Densidade Populacional: %f hab/km²\n", denpo2); 
    printf("PIB per Capita: %.2f reais\n\n", pibper2);

    //comparação das cartas (Nível Mestre)
    printf("Comparação das cartas: \n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontost > pontost2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", denpo < denpo2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibper > pibper2);
    printf("Super Poder: Carta 1 venceu (%d)\n\n", superPoder > superPoder2);

    return 0;
}
