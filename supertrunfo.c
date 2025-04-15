#include <stdio.h>

int main(){

  // Definindo a estrutura para armazenar os dados de cada carta1

  char estado[30];
  int populacao;
  float area;
  float pib;
  int pontos_turisticos;

//definindo a estrutura para armazenar os dados de cada carta2

  char estado2[30];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  printf("Carta 1\n");
  printf("Digite o nome do estado:\n");
  scanf("%s", estado); 
  printf("Digite a populacao: \n");
  scanf("%d", &populacao);
  printf("Digite a area: \n");
  scanf("%f", &area);
  printf("Digite o PIB: \n");
  scanf("%f", &pib);
  printf("Digite os pontos turisticos: \n");
  scanf("%d", &pontos_turisticos);

  printf("Carta 2\n");
  printf("Digite o nome do segundo estado: \n");
  scanf("%s", estado2);
  printf("Digite a populacao: \n");
  scanf("%d", &populacao2);
  printf("Digite a area: \n");
  scanf("%f", &area2);
  printf("Digite o PIB: \n");
  scanf("%f", &pib2);
  printf("Digite os pontos turisticos: \n");
  scanf("%d", &pontos_turisticos2);
  
  return 0;
}
   





}
  

