#include <stdio.h>

int main(){
    int i = 0;
    int num;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("%d é par.\n", i);
        }
        else{
            printf("%d é impar.\n", i);
        }
        i++;
    }

    do
    {
        printf("Digite um número par para sair do programa: ");
        scanf("%d", &num);

        if (num % 2 != 0)
        {
            printf("%d é impar\n", num);
        } else {
            printf("%d é par\n", num);
            printf("Saindo do programa...\n");
        }
        

    } while (num % 2 != 0);
    
    return 0;
}