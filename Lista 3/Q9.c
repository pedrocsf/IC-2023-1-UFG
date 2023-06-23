#include <stdio.h>

int main(void) {
    float nota1, nota2;
    float media;
    do {
        printf("Digite a primeira nota (entre 0.00 e 10.00): ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota (entre 0.00 e 10.00): ");
        scanf("%f", &nota2);

        if (nota1 < 0.00 || nota1 > 10.00 || nota2 < 0.00 || nota2 > 10.00) {
            printf("Notas inválidas. Tente novamente.\n");
        }
    } while (nota1 < 0.00 || nota1 > 10.00 || nota2 < 0.00 || nota2 > 10.00);
    media = ((nota1 + nota2) / 2);
    printf("A média do aluno é: %.2f\n", media);

    return 0;
}
