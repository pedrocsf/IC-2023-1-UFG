#include <stdio.h>

int main(void) {
	int MATRIZ[5][5];
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}
	printf("Selecione uma linha:");
	scanf("%d", &k);
	
	for(j=0;j<5;j++){
		printf("%d ", MATRIZ[k][j]);
	}
    return 0;
}
