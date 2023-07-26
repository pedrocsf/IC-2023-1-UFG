#include <stdio.h>
float VETOR[2];
int i,j;
int main(){
	printf("Digite o valor do dividendo:");
		scanf("%f", VETOR[0]);
	while(i==1){
	printf("Digite o valor do divisor:");
		scanf("%f", VETOR[1]);
		if(VETOR[1]>VETOR[0]){
		i=1;
		}
		else{
		i=0;
		}
	}
	
	int QTD=def(VETOR);
	printf("%f", QTD);
	return 0;
}

float def(float VETOR){
	while(i==1){
		int DEF=0;
		if((VETOR[0]/VETOR[1])%==0){
			VETOR[0]=(VETOR[0]/VETOR[1]);
			i=1;
			DEF++;
		}
		else{
			i=0;
		}
	}
	
	return DEF;
}
