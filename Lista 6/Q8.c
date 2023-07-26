#include <stdio.h>
float VETOR[2];

float def(float VETOR[]){
	float PORCENT=VETOR[1]/100;
	float DEF=-(VETOR[0]*PORCENT)+VETOR[0];
	return DEF;
}

int main(){
	printf("Digite o valor atual:");
		scanf("%f", &VETOR[0]);
	printf("Digite o valor do desconto:");
		scanf("%f", &VETOR[1]);
		
	float NOVO_VALOR = def(VETOR);
	
	printf("Valor da diagonal:%.2f", NOVO_VALOR);
	return 0;
}
