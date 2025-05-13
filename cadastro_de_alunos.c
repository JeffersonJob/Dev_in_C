#include <stdio.h>

int main(){
    char nome[20];
    int idade, matricula;
    float altura;

    printf("Nome do aluno: ");
    scanf("%s", &nome);

    printf("Número da matricula: ");
    scanf("%d", &matricula);

    printf("Idade do aluno: ");
    scanf("%d", &idade);

    printf("Altura do aluno: ");
    scanf("%f", &altura);

    printf("Aluno: %s - Matrícula Número: %d \n", nome, matricula);
    printf("Idade: %d - Altura: %.2f", idade, altura);

}
