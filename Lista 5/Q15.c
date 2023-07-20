#include <stdio.h>

int main() {
    const int MESES = 12;
    const int SEMANAS = 4;

    float vendas[MESES][SEMANAS];

    for (int i = 0; i < MESES; i++) {
        printf("Mês %d:\n", i + 1);
        for (int j = 0; j < SEMANAS; j++) {
            printf("Digite o total de vendas na semana %d: ", j + 1);
            scanf("%f", &vendas[i][j]);
        }
    }

    printf("\nTotal vendido em cada mês do ano:\n");
    for (int i = 0; i < MESES; i++) {
        float totalMes = 0;
        for (int j = 0; j < SEMANAS; j++) {
            totalMes += vendas[i][j];
        }
        printf("Mês %d: R$ %.2f\n", i + 1, totalMes);
    }

    printf("\nTotal vendido em cada semana ao longo do ano:\n");
    for (int j = 0; j < SEMANAS; j++) {
        float totalSemana = 0;
        for (int i = 0; i < MESES; i++) {
            totalSemana += vendas[i][j];
        }
        printf("Semana %d: R$ %.2f\n", j + 1, totalSemana);
    }

    float totalAno = 0;
    for (int i = 0; i < MESES; i++) {
        for (int j = 0; j < SEMANAS; j++) {
            totalAno += vendas[i][j];
        }
    }
    printf("\nTotal vendido no ano: R$ %.2f\n", totalAno);

    return 0;
}
