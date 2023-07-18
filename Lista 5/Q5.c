#include <stdio.h>

int main (void){
	int A[2][2], B[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite um número inteiro para preencher a matriz A:");
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Digite um número inteiro para preencher a matriz B:");
			scanf("%d", &B[i][j]);
		}
	}
	
	int SOMA[2][2];
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			SOMA[i][j]=A[i][j]+B[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ", SOMA[i][j]);
		}
	}
	return 0;
}
