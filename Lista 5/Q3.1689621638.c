#include <stdio.h>

int main (void){
	int MATRIZ[5][3];
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}

	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
		if((i+j)%2==0){
		printf("%d ", MATRIZ[i][j]);
			if(j==2){
			printf("\n");
			}
		}
		}
	}
	
	return 0;
}
