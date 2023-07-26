#include <stdio.h>
#include <math.h>
float VETOR[2];

float def_DIAGONAL(float VETOR[]){
	float DEF=sqrt(pow(VETOR[0],2)+pow(VETOR[1],2));
	return DEF;
}

int main(){
	printf("Digite o valor do primeiro cateto:");
		scanf("%f", &VETOR[0]);
	printf("Digite o valor do segundo cateto:");
		scanf("%f", &VETOR[1]);
		
	float DIAGONAL = def_DIAGONAL(VETOR);
	
	printf("Valor da diagonal:%.2f", DIAGONAL);
	return 0;
}

