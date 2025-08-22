#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 

#define MAX 5

struct War {
    char Territorio[50];
    char Cor[10];
    int tropas;
};

// Função atacar usando ponteiros e rand
void atacar(struct War *territoriosWar, int territorios) {
    if (territorios < 2) {
        printf("É necessário pelo menos dois territórios para atacar.\n");
        return;
    }

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    int atacante, defensor;
    printf("Escolha o território atacante (0 a %d): ", territorios - 1);
    scanf("%d", &atacante);
    getchar();

    printf("Escolha o território defensor (0 a %d): ", territorios - 1);
    scanf("%d", &defensor);
    getchar();

    if (atacante == defensor || atacante < 0 || defensor < 0 || atacante >= territorios || defensor >= territorios) {
        printf("Seleção inválida!\n");
        return;
    }

    if ((territoriosWar + atacante)->tropas < 1) {
        printf("O atacante não tem tropas suficientes!\n");
        return;
    }
    if ((territoriosWar + defensor)->tropas < 1) {
        printf("O defensor não tem tropas para perder!\n");
        return;
    }

    int dado_atacante = (rand() % 6) + 1;
    int dado_defensor = (rand() % 6) + 1;

    printf("Atacante (%s) rolou: %d\n", (territoriosWar + atacante)->Territorio, dado_atacante);
    printf("Defensor (%s) rolou: %d\n", (territoriosWar + defensor)->Territorio, dado_defensor);

    if (dado_atacante > dado_defensor) {
        (territoriosWar + defensor)->tropas -= 1;
        printf("O defensor perdeu 1 tropa!\n");
    } else if (dado_defensor > dado_atacante) {
        (territoriosWar + atacante)->tropas -= 1;
        printf("O atacante perdeu 1 tropa!\n");
    } else {
        printf("Empate! Ninguém perde tropas.\n");
    }

    printf("%s agora tem %d tropas.\n", (territoriosWar + atacante)->Territorio, (territoriosWar + atacante)->tropas);
    printf("%s agora tem %d tropas.\n", (territoriosWar + defensor)->Territorio, (territoriosWar + defensor)->tropas);
}

int main() {
    struct War *territoriosWar = malloc(MAX * sizeof(struct War));
    if (territoriosWar == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    int territorios = 0;
    int opcao;

    do {
        // ============== Exibição do Menu Do Jogo WAR ================
        printf("======WAR======\n\n");
        printf("1. Jogar\n");
        printf("2. Lista de territorios\n");
        printf("3. Sair\n");
        printf("4. Atacar\n\n");
        printf("Escolha uma opção: ");

        scanf("%d", &opcao);
        getchar(); // Limpa o buffer do teclado

        switch (opcao) {
            case 1:
                printf("Cadastro de Territorio\n\n");
                while (territorios < MAX) {
                    printf("Territorio: ");
                    fgets((territoriosWar + territorios)->Territorio, 50, stdin);
                    (territoriosWar + territorios)->Territorio[strcspn((territoriosWar + territorios)->Territorio, "\n")] = 0;

                    printf("Cor: ");
                    fgets((territoriosWar + territorios)->Cor, 10, stdin);
                    (territoriosWar + territorios)->Cor[strcspn((territoriosWar + territorios)->Cor, "\n")] = 0;

                    printf("Tropas: ");
                    scanf("%d", &(territoriosWar + territorios)->tropas);
                    getchar();

                    territorios++;

                    if (territorios == MAX) {
                        printf("Limite de territórios atingido!\n");
                    }
                }
                break;
            case 2:
                printf("Lista de territorios:\n");
                for (int i = 0; i < territorios; i++) {
                    printf("Territorio: %s, Cor: %s, Tropas: %d\n",
                        (territoriosWar + i)->Territorio,
                        (territoriosWar + i)->Cor,
                        (territoriosWar + i)->tropas);
                }
                break;
            case 3:
                printf("Saindo...\n");
                break;
            case 4:
                atacar(territoriosWar, territorios);
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 3);

    free(territoriosWar);
    return 0;
}

