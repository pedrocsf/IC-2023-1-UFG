#include <stdio.h>

int divisoesExatas(int dividendo, int divisor);

int main() {
    int dividendo, divisors;

    printf("Digite o valor do dividendo: ");
    scanf("%d", &dividendo);

    do {
        printf("Digite o valor do divisor: ");
        scanf("%d", &divisor);

        if (divisor >= dividendo) {
            printf("O divisor deve ser menor que o dividendo. Tente novamente.\n");
        }
    } while (divisor >= dividendo);

    int resultado = divisoesExatas(dividendo, divisor);
    printf("O dividendo %d é divisível por %d exatamente %d vezes.\n", dividendo, divisor, resultado);

    return 0;
}

int divisoesExatas(int dividendo, int divisor) {
    int contador = 0;

    while (dividendo >= divisor) {
        dividendo = dividendo - divisor;
        contador++;
    }

    return contador;
}

