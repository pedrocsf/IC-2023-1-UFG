#include <stdio.h>

int main (void){
	int MATRIZ[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}

 	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		printf("%d ", MATRIZ[i][j]*2);
			if(j==2){
			printf("\n");
			}
		}
	}
	return 0;
}
