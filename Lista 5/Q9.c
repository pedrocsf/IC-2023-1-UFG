#include <stdio.h>

int main (void){
	int MATRIZ[2][3];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}
	
	int MATRIZ_TRANSPOSTA[3][2];
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			MATRIZ_TRANSPOSTA[i][j]=MATRIZ[j][i];
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d ", MATRIZ_TRANSPOSTA[i][j]);
			if(j==1){
				printf("\n");
			}
		}
	}
	return 0;
}
