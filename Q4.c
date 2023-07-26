#include <stdio.h>
float VETOR[2];

float def(float VETOR[]){
	float PORCENT = VETOR[1]/100.0;
	float NOVO_SALDO=(PORCENT*VETOR[0])+(VETOR[0]);
	return NOVO_SALDO;
}

int main(){
	printf("Digite o valor do saldo atual:");
		scanf("%f", &VETOR[0]);
	printf("Digite o valor do reajuste(porcentagem):");
		scanf("%f", &VETOR[1]);
		
	float RESULTADO = def(VETOR);

	printf("Novo saldo: %.2f", RESULTADO);
	return 0;
}
