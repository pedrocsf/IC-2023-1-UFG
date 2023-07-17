#include <stdio.h>

int main (void){
	int MATRIZ[5][5];
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}

 	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
		printf("%d ", MATRIZ[i][j]);
			if(j==4){
			printf("\n");
			}
		}
	}
	return 0;
}
