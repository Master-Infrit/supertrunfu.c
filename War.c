#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

struct War {
    char Territorio[50];
    char Cor[10];
    int tropas;
};

int main() {
    struct War territoriosWar[MAX];
    int territorios = 0;
    int opcao;

    do {
        // ============== Exibição do Menu Do Jogo WAR ================
        printf("======WAR======\n\n");
        printf("1. Jogar: \n");
        printf("2. Lista de territorios:\n");
        printf("3. Sair\n\n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                printf("Cadastro de Territorio\n\n");
                while (territorios < MAX) {
                    printf("Territorio: ");
                    fgets(territoriosWar[territorios].Territorio, 50, stdin);
                    territoriosWar[territorios].Territorio[strcspn(territoriosWar[territorios].Territorio, "\n")] = 0;

                    printf("Cor: ");
                    fgets(territoriosWar[territorios].Cor, 10, stdin);
                    territoriosWar[territorios].Cor[strcspn(territoriosWar[territorios].Cor, "\n")] = 0;

                    printf("Tropas: ");
                    scanf("%d", &territoriosWar[territorios].tropas);
                    getchar();

                    territorios++;

                    if (territorios == MAX) {
                        printf("Limite de territórios atingido!\n");
                    }
                }
                break;
            case 2:
                printf("Lista de territorios: \n");
                for (int i = 0; i < territorios; i++) {
                    printf("Territorio: %s, Cor: %s, Tropas: %d\n", territoriosWar[i].Territorio, territoriosWar[i].Cor, territoriosWar[i].tropas);
                }
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    return 0;
}

