#include <stdio.h>
int main(){

    int numero, contagem;

    printf("Digite o número para ver sua tabuada: ");
    scanf("%d", &numero);

    for (contagem = 1; contagem <= 10; contagem++)
    {
        printf("%d x %d = %d \n", contagem, numero, contagem * numero);
    }
    return 0;
}