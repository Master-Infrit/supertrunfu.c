#include <stdio.h>
#include <string.h>

int main() {
    // Definindo a estrutura para armazenar os dados de cada carta
    char estado[30];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    float desidade_populacional;
    float pib_per_capita;

    // Definindo a estrutura para armazenar os dados de cada carta2
    char estado2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float desidade_populacional2;
    float pib_per_capita2;

    

    // Atribuindo valores às variáveis da Carta 1
    strcpy(estado, "Rio de Janeiro");
    populacao = 17366189;
    area =  1325.25;
    pib = 150000000.0;
    pontos_turisticos = 10;


    // Calculando a densidade populacional e o PIB per capita
    desidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;


    // Atribuindo valores às variáveis da Carta 2
    strcpy(estado2, "São Paulo");
    populacao2 = 12325232;
    area2 = 1521.11;
    pib2 = 3000000000.0;
    pontos_turisticos2 = 15;


    // Calculando a densidade populacional e o PIB per capita
    pib_per_capita2 = pib2 / populacao2;
    desidade_populacional2 = populacao2 / area2;

    
    printf("*** Meu Jogo de Cartas ***\n\n");
    // Exibindo os dados da Carta 1
    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f\n", desidade_populacional);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita);


    // Exibindo os dados da Carta 2
    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f\n", desidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    float super_poder1 = populacao + area + pib + pontos_turisticos + (desidade_populacional / pib_per_capita);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (desidade_populacional2 / pib_per_capita2);

    if (super_poder1 > super_poder2) {
        printf("A carta 1 é mais forte!\n");
    } else if (super_poder1 < super_poder2) {
        printf("A carta 2 é mais forte!\n");
    } else {
        printf("As cartas são iguais!\n");
    }

    return 0;
}