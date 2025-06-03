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

    // Menu Interativo com Switch Case
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("1: Iniciar o jogo\n");
    printf("2: Regras do jogo\n");
    printf("3: Sair\n");
    printf("Escolha uma opção: ");
    int opcao;
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("Iniciando o jogo\n\n");
            break;
        case 2:
            printf("Regras do jogo:\n");
            printf("1. Cada jogador escolhe uma carta.\n");
            printf("2. As cartas são comparadas com base em diferentes atributos.\n");
            printf("3. O jogador com o maior valor em um atributo vence a rodada.\n");
            printf("4. O pib per capita é calculado como PIB dividido pela população.\n");
            break;
        case 3:
            printf("Saindo do jogo...\n");

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
           
    }
    int opcao2;
    printf("Qual carta você deseja jogar?\n");
    printf("1: Carta 1 (Rio de Janeiro)\n");
    printf("2: Carta 2 (São Paulo)\n");
    printf("Escolha uma opção:");
    scanf("%d", &opcao2);
    if (opcao2 == 1) {
        printf("Você escolheu a Carta 1: Rio de Janeiro\n\n");
    } else if (opcao2 == 2) {
        printf("Você escolheu a Carta 2: São Paulo\n\n");
    } else {
        printf("Opção inválida! Tente novamente.\n");
        return 1;
    }
  // Lendo a opção de comparação      
    int opcao3;
    printf("Escolha uma opção para comparar:\n");
    printf("1: População\n");
    printf("2: Área\n");
    printf("3: PIB\n");
    printf("4: Pontos Turísticos\n");
    printf("5: Densidade Populacional\n");
    printf("6: PIB per Capita\n");
    printf("7: Super Poder\n");
    printf("8: Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao3);

    // Calculando o Super Poder
    float super_poder1 = populacao + area + pib + pontos_turisticos + (desidade_populacional / pib_per_capita);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (desidade_populacional2 / pib_per_capita2);

    // Declarando as variáveis para armazenar os super poderes
    printf("\nSuper Poder da Carta 1: %.2f\n", super_poder1);
    printf("Super Poder da Carta 2: %.2f\n", super_poder2);

   // Mostrando quem venceu a rodada com base na opção escolhida
    switch (opcao3) {
        case 1:
            if (populacao > populacao2) 
                printf("População: Carta 1 venceu!\n");
             else if (populacao < populacao2) 
                printf("Sao Paulo venceu!\n");
             else 
                printf("Empate em população!\n");
            
        case 2:
            if (area > area2) 
                printf("Rio de Janeiro venceu!\n");               
             else if (area < area2) 
                printf("Sao Paulo venceu!\n");
             else 
                printf("Empate em área!\n");
            
        case 3:
            if (pib > pib2) 
                printf("Rio de Janeiro venceu!\n");
              else if (pib < pib2) {
                printf("Sao Paulo venceu!\n");
            } else 
                printf("Empate em PIB!\n");           
            break;
        case 4:
            if (pontos_turisticos > pontos_turisticos2) 
                printf("Rio de Janeiro venceu!\n");
             else if (pontos_turisticos < pontos_turisticos2) 
                printf("Sao Paulo venceu!\n");
             else 
                printf("Empate em pontos turísticos!\n");
            break;
            
        case 5:
           if (desidade_populacional > desidade_populacional2) 
                printf("rio de Janeiro venceu!\n");
             else if (desidade_populacional < desidade_populacional2) 
                printf("Sao Paulo venceu!\n");
             else 
                printf("Empate em densidade populacional!\n");
            break;
        case 6:
            if (pib_per_capita > pib_per_capita2) 
                printf("Rio de Janeiro venceu!\n");
             else if (pib_per_capita < pib_per_capita2) 
                printf("Sao Paulo venceu!\n");
             else 
                printf("Empate em PIB per Capita!\n");
            break;
        case 7:
             if (super_poder1 > super_poder2) 
                printf("Super poder: A carta 1 venceu!\n");
            else if (super_poder1 < super_poder2) 
                printf("Super poder: A carta 2 venceu!\n");
            else 
                printf("As cartas são iguais!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1;
    }
   
    
  // Exibindo os dados da Carta 1
  // printf("Carta 1\n");
  // printf("Estado: %s\n", estado);
  // printf("População: %d\n", populacao);
  // printf("Área: %.2f km²\n", area);
  // printf("PIB: %.2f bilhões\n", pib);
  // printf("Pontos Turísticos: %d\n", pontos_turisticos);
  // printf("Densidade Populacional: %.2f\n", desidade_populacional);
  // printf("PIB per Capita: %.2f\n\n", pib_per_capita);


  // Exibindo os dados da Carta 2
  // printf("Carta 2\n");
  // printf("Estado: %s\n", estado2);
  // printf("População: %d\n", populacao2);
  // printf("Área: %.2f km²\n", area2);
  // printf("PIB: %.2f bilhões\n", pib2);
  // printf("Pontos Turísticos: %d\n", pontos_turisticos2);
  // printf("Densidade Populacional: %.2f\n", desidade_populacional2);
  // printf("PIB per Capita: %.2f\n\n", pib_per_capita2);

    return 0;
}
