#include <stdio.h>
#include <stdlib.h> // inclu�da a biblioteca stdlib.h para usar a fun��o atoi()

int main(void) {
    int NUM, PRECO_UNIT, QTD, PRECO_FINAL, i = 1;
    char DATA[100];

    do {
        printf("Digite o n�mero do pedido: ");
        scanf("%d", &NUM);
        getchar(); 

        printf("Digite a data do pedido (DD MM AAAA): ");
        fgets(DATA, sizeof(DATA), stdin);

        printf("Digite o pre�o unit�rio: ");
        scanf("%d", &PRECO_UNIT);
        getchar(); 

        printf("Digite a quantidade do produto: ");
        scanf("%d", &QTD);
        getchar(); 

        PRECO_FINAL = QTD * PRECO_UNIT;
        printf("O pre�o final do pedido em quest�o � de %d.\n", PRECO_FINAL);

        printf("Deseja iniciar um novo pedido?\n1 SIM \n2 N�O: ");
        scanf("%d", &i);
        getchar(); 
    } while (i == 1);

    return 0;
}

