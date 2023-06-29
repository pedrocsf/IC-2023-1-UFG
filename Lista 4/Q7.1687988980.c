#include <stdio.h>

int main(void) {
    int MATRIZ[20][2], w = 0, x = 0, y = 0, z = 0;

    for (z = 0; z < 20; z++) {
        MATRIZ[z][0] = -1;  
        MATRIZ[z][1] = 0;
    }

    for (x = 0; x < 20; x++) {
        printf("Digite um valor inteiro entre 0-10: ");
        scanf("%d", &MATRIZ[x][0]);

        while (MATRIZ[x][0] < 0 || MATRIZ[x][0] > 10) {
            printf("Valor inválido. Digite novamente: ");
            scanf("%d", &MATRIZ[x][0]);
        }

        for (y = 0; y < x; y++) {  
            if (MATRIZ[x][0] == MATRIZ[y][0]) {
                MATRIZ[y][1]++;
                break;
            }
        }
    }

    printf("A seguinte lista expressa quantas vezes cada valor foi inserido:\n");
    for (w = 0; w < 20; w++) {
        if (MATRIZ[w][1] > 0) {
            printf("Número %d: %d vezes\n", MATRIZ[w][0], MATRIZ[w][1]);
        }
    }

    return 0;
}

