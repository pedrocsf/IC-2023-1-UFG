#include <stdio.h>
#include <stdlib.h> // incluída a biblioteca stdlib.h para usar a função atoi()

int main(void) {
    int NUM, PRECO_UNIT, QTD, PRECO_FINAL, i = 1;
    char DATA[100];

    do {
        printf("Digite o número do pedido: ");
        scanf("%d", &NUM);
        getchar(); 

        printf("Digite a data do pedido (DD MM AAAA): ");
        fgets(DATA, sizeof(DATA), stdin);

        printf("Digite o preço unitário: ");
        scanf("%d", &PRECO_UNIT);
        getchar(); 

        printf("Digite a quantidade do produto: ");
        scanf("%d", &QTD);
        getchar(); 

        PRECO_FINAL = QTD * PRECO_UNIT;
        printf("O preço final do pedido em questão é de %d.\n", PRECO_FINAL);

        printf("Deseja iniciar um novo pedido?\n1 SIM \n2 NÃO: ");
        scanf("%d", &i);
        getchar(); 
    } while (i == 1);

    return 0;
}

