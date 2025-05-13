#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numJogador, numComputador, resultado;
    char tipoComparação;

    srand(time(0));
    numComputador = rand() % 100 + 1;

    printf("***MAIOR, MENOR ou IGUAL***\n");
    printf("Escolha um número e depois escolha o tipo de comparação\n");
    printf("Número (de 0 a 100): ");
    scanf("%d", &numJogador);

    printf("Tipo de comparação: \n");
    printf("M = Maior que... \n");
    printf("N = Menor que...\n");
    printf("I = Igual a... \n");
    scanf(" %c", &tipoComparação);

    switch (tipoComparação) {
    case 'M':
    case 'm':
        if (numJogador > numComputador) {
            printf("PARABÉNS! Você ganhou\n");
            printf("Seu número (%d) foi maior! O Computador jogou %d \n", numJogador, numComputador);
        } else if (numJogador < numComputador) {
            printf("Que pena você perdeu. O número do computador foi maior\n");
            printf("Seu número (%d) foi menor! O Computador jogou %d \n", numJogador, numComputador);
        } else {
            printf("Você perdeu. Os números são iguais. Foi por pouco!\n");
            printf("Você jogou %d e o Computador jogou %d também\n", numJogador, numComputador);
        }
        break;
    case 'N':
    case 'n':
        if (numJogador < numComputador) {
            printf("PARABÉNS! Você ganhou\n");
            printf("Seu número (%d) foi menor! O Computador jogou %d \n", numJogador, numComputador);
        } else if (numJogador > numComputador) {
            printf("Que pena você perdeu. O número do computador foi menor\n");
            printf("Seu número (%d) foi maior! O Computador jogou %d \n", numJogador, numComputador);
        } else {
            printf("Você perdeu. Os números são iguais. Foi por pouco!\n");
            printf("Você jogou %d e o Computador jogou %d também\n", numJogador, numComputador);
        }
        break;
    case 'I':
    case 'i':
        if (numJogador < numComputador) {
            printf("Que pena você perdeu. O número do computador foi maior\n");
            printf("Seu número (%d) foi menor! O Computador jogou %d \n", numJogador, numComputador);
        } else if (numJogador > numComputador) {
            printf("Que pena você perdeu. O número do computador foi menor\n");
            printf("Seu número (%d) foi maior! O Computador jogou %d \n", numJogador, numComputador);
        } else {
            printf("PARABÉNS! Você ganhou\n");
            printf("Você jogou %d e o Computador jogou %d também\n", numJogador, numComputador);
        }
        break;
    default:
        printf("Opção inválida");
        break;
    }
}