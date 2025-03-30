#include <stdio.h>
#include <string.h>

 typedef struct{
    char estado;
    char codigo[3];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} carta;

 int main(){
// atribuindo valor as variaveis da carta

   carta carta1, carta2;
   
   char estado;
   char codigo[3];
   char cidade[20];
   int populacao;
   float area;
   float pib;
   int pontos_turisticos;

    // atribuindo valores as cartas

    carta1.estado = 'RJ';
    strcpy(carta1.codigo, "A1");
    strcpy(carta1.cidade, "Rio de Janeiro");
    carta1.populacao = 6748000;
    carta1.area = 1182.3;
    carta1.pib = 0.5;
    carta1.pontos_turisticos = 10;

    carta2.estado = 'SP';
    strcpy(carta2.codigo, "A2");
    strcpy(carta2.cidade, "São Paulo");
    carta2.populacao = 12000000;
    carta2.area = 1521.11;
    carta2.pib = 0.7;
    carta2.pontos_turisticos = 15;

  // imprimindo os valores
   printf("Carta 1:\n");
   printf("\nEstado: %c\n", carta1.estado);
   printf("Codigo: %s\n", carta1.codigo);
   printf("Cidade: %s\n", carta1.cidade);
   printf("Populacao: %d\n",carta1.populacao);
   printf("Area: %.2f\n", area);
   printf("PIB: %.2f\n", pib);
   printf("Pontos turisticos: %d\n", pontos_turisticos);


   prinf("Carta 2:\n");

   


    








 }