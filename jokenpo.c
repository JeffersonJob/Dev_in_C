#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int jogador;
    int computador;

    srand(time(0));

    printf("***JOKENPÔ***\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("ESCOLHA: ");
    scanf("%d", &jogador);

    switch (jogador) {
    case 1:
        printf("Você escolheu Pedra - ");
        break;
    case 2:
        printf("Você escolheu Papel - ");
        break;
    case 3:
        printf("Você escolheu Tesoura - ");
        break;
    default:
        printf("Opção Inválida!");
        break;
    }

    computador = rand() % 3 + 1;

    switch (computador) {
    case 1:
        printf("E o Computador Pedra\n");
        break;
    case 2:
        printf("E o Computador Papel\n");
        break;
    case 3:
        printf("E o Computador Tesoura\n");
        break;
    }

    if (jogador == 1 && computador == 3 || jogador == 2 && computador == 1 || jogador == 3 && computador == 2 ) {
        printf("PARABÉNS - Você ganhou!\n");
    } else if (jogador == computador) {
        printf("O Jogo empatou!\n");
    } else {
        printf("O Computador Ganhou!\n");
    }
    return 0;
}