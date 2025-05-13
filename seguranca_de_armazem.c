#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Qual a temperatura: ");
    scanf("%f", &temperatura);
    printf("Qual a umidade: ");
    scanf("%f", &umidade);
    printf("Qual a quantidade do estoque: ");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("ALERTA! A temperatura está alta\n");
    } else {
        printf("A temperatura está normal.\n");
    }

    if (umidade > 30) {
        printf("ALERTA! Umidade elevada\n");
    } else {
        printf("A umidade está normal.\n");
    }
    
    if (estoque > estoqueMinimo){
        printf("Estoque normal.\n");
    } else {
        printf("ALERTA! Estoque abaixo do limite mínimo\n");
    }
}