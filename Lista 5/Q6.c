#include <stdio.h>

int main (void){
	int MATRIZ[4][5];
	int i,j;

	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}

	int TOTAL=0;
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			TOTAL=TOTAL+MATRIZ[i][j];
		}
	}

	printf("Soma de todos os elementos: %d ", TOTAL);

	return 0;
}
