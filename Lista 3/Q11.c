#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int i, NOTA1, NOTA2, MEDIA_ALUNO = 0, MEDIA_TURMA = 0;
    char NOME[100];

    for (i = 1; i <= 5; i++) {
        printf("Digite o nome do aluno:\n");
        fgets(NOME, sizeof(NOME), stdin);
        NOME[strcspn(NOME, "\n")] = '\0'; 

        printf("Digite a nota da primeira prova:\n");
        scanf("%d", &NOTA1);

        printf("Digite a nota da segunda prova:\n");
        scanf("%d", &NOTA2);

        MEDIA_ALUNO = (NOTA1 + NOTA2) / 2;
        MEDIA_TURMA += MEDIA_ALUNO; 

        printf("Dados do aluno(a):\nNome: %s\nNota 1: %d\nNota 2: %d\nMédia: %d\n\n", NOME, NOTA1, NOTA2, MEDIA_ALUNO);


        while (getchar() != '\n');
    }

    MEDIA_TURMA /= 5; 
    printf("Média da turma: %d\n", MEDIA_TURMA);

    return 0;
}
