#include <stdio.h>

int main() {
    int i, NUMERO, FATORIAL;

    do {
        printf("Digite um número inteiro (digite um número menor que 1 para encerrar): ");
        scanf("%d", &NUMERO);

        if (NUMERO >= 1) {
            FATORIAL = 1;
            for (i = 1; i <= NUMERO; i=i+1) {
                FATORIAL = FATORIAL * i;
            }
            printf("O fatorial de %d é: %d\n", NUMERO, FATORIAL);
        }
    } while (NUMERO >= 1);

    printf("Programa encerrado.\n");

    return 0;
}

