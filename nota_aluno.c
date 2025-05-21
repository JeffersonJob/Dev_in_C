#include <stdio.h>

int main(){
    int index;

    char * notasAlunos[3][3] = {
        {"Aluno 0", "PT: 30", "MT: 90"},
        {"Aluno 1", "PT: 60", "MT: 60"},
        {"Aluno 2", "PT: 90", "MT: 30"}
    };

    printf("Digite o número do Aluno que deseja ver a nota... \n");
    printf("Para Aluno 0 digite: 0\n");
    printf("Para Aluno 1 digite: 1\n");
    printf("Para Aluno 2 digite: 2\n");
    scanf("%d", &index);

    printf("As notas do %s são %s e %s", notasAlunos[index] [0], notasAlunos[index][1], notasAlunos[index][2]);

    return 0;
}