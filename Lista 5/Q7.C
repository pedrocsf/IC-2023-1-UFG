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

	int somaLinhas[5],L1=0,L2=0,L3=0,L4=0,L5=0;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(i==0){
				L1=(L1+MATRIZ[i][j]);
				somaLinhas[0]=L1;
			}
			if(i==1){
				L2=(L2+MATRIZ[i][j]);
				somaLinhas[1]=L2;
			}
			if(i==2){
				L3=(L3+MATRIZ[i][j]);
				somaLinhas[2]=L3;
			}
			if(i==3){
				L4=(L4+MATRIZ[i][j]);
				somaLinhas[3]=L4;
			}
			if(i==4){
				L5=(L5+MATRIZ[i][j]);
				somaLinhas[4]=L5;
			}
		}
	}
	
	for(i=0;i<5;i++){
		printf("%d ", somaLinhas[i]);
	}

	
	return 0;
}
