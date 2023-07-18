#include <stdio.h>

int main (void){
	int MATRIZ[4][4];
	int i,j;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}

	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		if(MATRIZ[i][j]%2!=0){
			printf("%d ", MATRIZ[i][j]);
		}
		}
	}

	return 0;
}
