#include <stdio.h>

int SOMA(int *i, int *j) {
    int DEF1 = *i + *j;
    return DEF1;
}

int SUB(int *i, int *j) {
    int DEF2 = *i - *j;
    return DEF2;
}

void MULT(int *i, int *j, int *RESULTADO) {
    int TEMP = (*i) * (*j);
    *RESULTADO = TEMP;
}

int main() {
    int i, j;

    printf("Digite o primeiro valor:");
    scanf("%d", &i);

    printf("Digite o segundo valor:");
    scanf("%d", &j);

    int R_SOMA = SOMA(&i, &j);
    int R_SUB = SUB(&i, &j);

    int R_MULT;
    MULT(&i, &j, &R_MULT);

    printf("Resultado da soma desses valores: %d\nResultado da subtração desses valores: %d\nResultado da multiplicação desses valores: %d", R_SOMA, R_SUB, R_MULT);

    return 0;
}