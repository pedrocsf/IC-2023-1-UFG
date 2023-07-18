#include <stdio.h>

int main (void){
	int MATRIZ[3][5];
	int i,j;

	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Digite um número inteiro:");
			scanf("%d", &MATRIZ[i][j]);
		}
	}

	int somaColunas[5],L1=0,L2=0,L3=0,L4=0,L5=0;

	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			if(j==0){
				L1=(L1+MATRIZ[i][j]);
				somaColunas[0]=L1;
			}
			if(j==1){
				L2=(L2+MATRIZ[i][j]);
				somaColunas[1]=L2;
			}
			if(j==2){
				L3=(L3+MATRIZ[i][j]);
				somaColunas[2]=L3;
			}
   			if(j==3){
				L4=(L4+MATRIZ[i][j]);
				somaColunas[3]=L4;
			}
			if(j==4){
				L5=(L5+MATRIZ[i][j]);
				somaColunas[4]=L5;
			}
		}
	}

	for(i=0;i<5;i++){
		printf("%d ", somaColunas[i]);
	}


	return 0;
}
